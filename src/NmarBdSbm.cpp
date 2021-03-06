// [[Rcpp::depends(RcppArmadillo)]]
#include "gicl_tools.h"
#include "MergeMat.h"
#include "IclModel.h"
#include "MissSbm.h"
#include "NmarBdSbm.h"
using namespace Rcpp;


double NmarBdSbm::icl_emiss(const List & obs_stats){
  arma::vec counts =as<arma::vec>(obs_stats["counts"]);
  arma::mat edges_counts =as<arma::mat>(obs_stats["x_counts"]);
  arma::mat obs_counts =as<arma::mat>(obs_stats["x_counts_obs"]);
  arma::mat cmat = lgamma(a0+edges_counts)+lgamma(obs_counts-edges_counts+b0)+lgamma(a0+b0);
  cmat = cmat - lgamma(a0) - lgamma(b0) - lgamma(obs_counts+a0+b0);
  
  arma::mat matcount = counts*counts.t();
  arma::mat cmatobs = lgamma(a0obs+obs_counts)+lgamma(matcount-obs_counts+b0obs)+lgamma(a0obs+b0obs);
  cmatobs = cmatobs - lgamma(a0obs) - lgamma(b0obs) - lgamma(matcount+a0obs+b0obs);
  
  double icl_emiss=accu(cmat+cmatobs);
  return icl_emiss;
}

double NmarBdSbm::icl_emiss(const List & obs_stats,int oldcl,int newcl){
  arma::vec counts =as<arma::vec>(obs_stats["counts"]);
  arma::mat edges_counts =as<arma::mat>(obs_stats["x_counts"]);
  arma::mat obs_counts =as<arma::mat>(obs_stats["x_counts_obs"]);
  arma::mat si = submatcross(oldcl,newcl,counts.n_rows);
  double icl_emiss = 0;
  int k = 0;
  int l = 0;
  int cc = 0;
  for (arma::uword i = 0;i<si.n_rows;++i){
    k=si(i,0);
    l=si(i,1);
    if(counts(k)*counts(l)!=0){
        cc = obs_counts(k,l);
        icl_emiss += lgamma(a0+edges_counts(k,l))+lgamma(b0+cc-edges_counts(k,l))+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc); 
        cc = counts(k)*counts(l);
        icl_emiss += lgamma(a0obs+obs_counts(k,l))+lgamma(b0obs+cc-obs_counts(k,l))+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc);  
    }
    
  }
  return icl_emiss;
}



double NmarBdSbm::delta_merge_correction(int k,int l,int obk,int obl,const List & old_stats){
  // here old refers to the stats before the fusion between obk and obl
  //Rcout << obk << "---- " << obl << std::endl;
  int a,b,ao,bo,lo;
  double icl_cor = 0;
  int cc, cc_old;
  double oxc,xc;
  arma::vec old_counts =as<arma::vec>(old_stats["counts"]);
  arma::mat old_x_counts =as<arma::mat>(old_stats["x_counts"]);
  arma::mat old_obs_counts =as<arma::mat>(old_stats["x_counts_obs"]);
  cc = counts(k)*counts(l);
  arma::uvec kl;
  kl << k << l << arma::endr;
  arma::uvec mkl;
  mkl << obk << obl << arma::endr;
  if(l>=obk){
    lo=l+1;
  }else{
    lo=l;
  }
  for(int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      
      
      a = kl(i);
      b = mkl(j);
      if(b>=obk){
        b=b-1;
      }
      
      
      
      // new stats no fusion k/l
      if(j==1){
        
        cc = x_counts_obs(a,b);
        icl_cor -= lgamma(a0+x_counts(a,b))+lgamma(b0+cc-x_counts(a,b))+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc);
        

        cc = counts(a)*counts(b);
        icl_cor -= lgamma(a0obs+x_counts_obs(a,b))+lgamma(b0obs+cc-x_counts_obs(a,b))+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc);

        cc = x_counts_obs(b,a);
        icl_cor -= lgamma(a0+x_counts(b,a))+lgamma(b0+cc-x_counts(b,a))+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc);

        cc = counts(a)*counts(b);
        icl_cor -= lgamma(a0obs+x_counts_obs(b,a))+lgamma(b0obs+cc-x_counts_obs(b,a))+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc);
        
      }
      
      // new stats fusion k/l
      if((j==1) & (i==0)){
        cc = x_counts_obs(k,b)+x_counts_obs(l,b);
        xc    = x_counts(k,b)+x_counts(l,b);
        icl_cor += lgamma(a0+xc)+lgamma(b0+cc-xc)+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc);
        
        cc  = (counts(k)+counts(l))*counts(b);
        xc  = x_counts_obs(k,b)+x_counts_obs(l,b);
        icl_cor += lgamma(a0obs+xc)+lgamma(b0obs+cc-xc)+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc);
        
        cc = x_counts_obs(b,k)+x_counts_obs(b,l);
        xc    = x_counts(b,k)+x_counts(b,l);
        icl_cor += lgamma(a0+xc)+lgamma(b0+cc-xc)+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc); 
        
        
        cc  = (counts(k)+counts(l))*counts(b);
        xc  = x_counts_obs(b,k)+x_counts_obs(b,l);
        icl_cor += lgamma(a0obs+xc)+lgamma(b0obs+cc-xc)+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc);
      }
      
      // handling matrix sizes differences
      ao = kl(i);
      bo = mkl(j);
      if(ao>=obk){
        ao=ao+1;
      }

      // old stats no fusion k/l
      cc_old = old_obs_counts(ao,bo);
      icl_cor += lgamma(a0+old_x_counts(ao,bo))+lgamma(b0+cc_old-old_x_counts(ao,bo))+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc_old);
      
      cc_old = old_counts(ao)*old_counts(bo);
      icl_cor += lgamma(a0obs+old_obs_counts(ao,bo))+lgamma(b0+cc_old-old_obs_counts(ao,bo))+lgamma(a0obs+b0)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc_old);
      
      cc_old = old_obs_counts(bo,ao);
      icl_cor += lgamma(a0+old_x_counts(bo,ao))+lgamma(b0+cc_old-old_x_counts(bo,ao))+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc_old);
      
      cc_old = old_counts(ao)*old_counts(bo);
      icl_cor += lgamma(a0obs+old_obs_counts(bo,ao))+lgamma(b0+cc_old-old_obs_counts(bo,ao))+lgamma(a0obs+b0)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc_old);
      
      // old stats fusion k/l
      if(i==0){
        
        cc_old = old_obs_counts(ao,bo)+old_obs_counts(lo,bo);
        oxc    = old_x_counts(ao,bo)+old_x_counts(lo,bo);
        icl_cor -= lgamma(a0+oxc)+lgamma(b0+cc_old-oxc)+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc_old);
        
        cc_old = (old_counts(ao)+old_counts(lo))*old_counts(bo);
        oxc    = old_obs_counts(ao,bo)+old_obs_counts(lo,bo);
        icl_cor -= lgamma(a0obs+oxc)+lgamma(b0obs+cc_old-oxc)+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc_old);
        
        
        cc_old = old_obs_counts(bo,ao)+old_obs_counts(bo,lo);
        oxc    = old_x_counts(bo,ao)+old_x_counts(bo,lo);
        icl_cor -= lgamma(a0+oxc)+lgamma(b0+cc_old-oxc)+lgamma(a0+b0)-lgamma(a0)-lgamma(b0)-lgamma(a0+b0+cc_old);
        
        cc_old = (old_counts(ao)+old_counts(lo))*old_counts(bo);
        oxc    = old_obs_counts(bo,ao)+old_obs_counts(bo,lo);
        icl_cor -= lgamma(a0obs+oxc)+lgamma(b0obs+cc_old-oxc)+lgamma(a0obs+b0obs)-lgamma(a0obs)-lgamma(b0obs)-lgamma(a0obs+b0obs+cc_old);
        
      }
      
      
    }
  }
  return icl_cor;  
  
  
  
}



