#ifndef MULTSBMUNDIRECTED
#define MULTSBMUNDIRECTED

// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>
#include "MergeMat.h"
#include "MultSbm.h"
#include "IclModel.h"
using namespace Rcpp;

class MultSbmUndirected : public MultSbm
{
using MultSbm::MultSbm;
public:
  double icl_emiss(const List & obs_stats);
  double icl_emiss(const List & obs_stats,int oldcl,int newcl);
  double delta_merge_correction(int k,int l,int obk,int obl,const List & old_stats);
};

#endif
