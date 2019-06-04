// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// post_probs
arma::mat post_probs(S4 model, List data, arma::vec& clt);
RcppExport SEXP _greed_post_probs(SEXP modelSEXP, SEXP dataSEXP, SEXP cltSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type model(modelSEXP);
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type clt(cltSEXP);
    rcpp_result_gen = Rcpp::wrap(post_probs(model, data, clt));
    return rcpp_result_gen;
END_RCPP
}
// fit_greed
S4 fit_greed(S4 model, List data, arma::vec& clt, std::string type, int nb_max_pass, bool verbose);
RcppExport SEXP _greed_fit_greed(SEXP modelSEXP, SEXP dataSEXP, SEXP cltSEXP, SEXP typeSEXP, SEXP nb_max_passSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type model(modelSEXP);
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type clt(cltSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type nb_max_pass(nb_max_passSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_greed(model, data, clt, type, nb_max_pass, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fit_greed_path
S4 fit_greed_path(List data, S4 init_fit);
RcppExport SEXP _greed_fit_greed_path(SEXP dataSEXP, SEXP init_fitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< S4 >::type init_fit(init_fitSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_greed_path(data, init_fit));
    return rcpp_result_gen;
END_RCPP
}
// lm_post
List lm_post(const arma::mat X, const arma::colvec& y, double regu, double a0, double b0);
RcppExport SEXP _greed_lm_post(SEXP XSEXP, SEXP ySEXP, SEXP reguSEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type regu(reguSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(lm_post(X, y, regu, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// lm_post_add1
List lm_post_add1(List current, const arma::rowvec X, double y, double regu, double a0, double b0);
RcppExport SEXP _greed_lm_post_add1(SEXP currentSEXP, SEXP XSEXP, SEXP ySEXP, SEXP reguSEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current(currentSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type regu(reguSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(lm_post_add1(current, X, y, regu, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// lm_post_del1
List lm_post_del1(List current, const arma::rowvec X, double y, double regu, double a0, double b0);
RcppExport SEXP _greed_lm_post_del1(SEXP currentSEXP, SEXP XSEXP, SEXP ySEXP, SEXP reguSEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current(currentSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type regu(reguSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(lm_post_del1(current, X, y, regu, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// lm_post_merge
List lm_post_merge(List current_k, List current_l, double regu, double a0, double b0);
RcppExport SEXP _greed_lm_post_merge(SEXP current_kSEXP, SEXP current_lSEXP, SEXP reguSEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current_k(current_kSEXP);
    Rcpp::traits::input_parameter< List >::type current_l(current_lSEXP);
    Rcpp::traits::input_parameter< double >::type regu(reguSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(lm_post_merge(current_k, current_l, regu, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// lm_post_add
List lm_post_add(List current, const arma::mat X, const arma::colvec& y, double regu, double a0, double b0);
RcppExport SEXP _greed_lm_post_add(SEXP currentSEXP, SEXP XSEXP, SEXP ySEXP, SEXP reguSEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current(currentSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type regu(reguSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(lm_post_add(current, X, y, regu, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// lm_post_del
List lm_post_del(List current, const arma::mat X, const arma::colvec& y, double regu, double a0, double b0);
RcppExport SEXP _greed_lm_post_del(SEXP currentSEXP, SEXP XSEXP, SEXP ySEXP, SEXP reguSEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current(currentSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type regu(reguSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(lm_post_del(current, X, y, regu, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// mvlm_post
List mvlm_post(const arma::mat X, const arma::mat Y, double alpha, double N0);
RcppExport SEXP _greed_mvlm_post(SEXP XSEXP, SEXP YSEXP, SEXP alphaSEXP, SEXP N0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type N0(N0SEXP);
    rcpp_result_gen = Rcpp::wrap(mvlm_post(X, Y, alpha, N0));
    return rcpp_result_gen;
END_RCPP
}
// mvlm_post_add1
List mvlm_post_add1(List current, const arma::rowvec X, const arma::rowvec Y, double alpha, double N0);
RcppExport SEXP _greed_mvlm_post_add1(SEXP currentSEXP, SEXP XSEXP, SEXP YSEXP, SEXP alphaSEXP, SEXP N0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current(currentSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type N0(N0SEXP);
    rcpp_result_gen = Rcpp::wrap(mvlm_post_add1(current, X, Y, alpha, N0));
    return rcpp_result_gen;
END_RCPP
}
// mvlm_post_del1
List mvlm_post_del1(List current, const arma::rowvec X, const arma::rowvec Y, double alpha, double N0);
RcppExport SEXP _greed_mvlm_post_del1(SEXP currentSEXP, SEXP XSEXP, SEXP YSEXP, SEXP alphaSEXP, SEXP N0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current(currentSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type N0(N0SEXP);
    rcpp_result_gen = Rcpp::wrap(mvlm_post_del1(current, X, Y, alpha, N0));
    return rcpp_result_gen;
END_RCPP
}
// mvlm_post_merge
List mvlm_post_merge(List current1, List current2, double alpha, double N0);
RcppExport SEXP _greed_mvlm_post_merge(SEXP current1SEXP, SEXP current2SEXP, SEXP alphaSEXP, SEXP N0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type current1(current1SEXP);
    Rcpp::traits::input_parameter< List >::type current2(current2SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type N0(N0SEXP);
    rcpp_result_gen = Rcpp::wrap(mvlm_post_merge(current1, current2, alpha, N0));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_greed_post_probs", (DL_FUNC) &_greed_post_probs, 3},
    {"_greed_fit_greed", (DL_FUNC) &_greed_fit_greed, 6},
    {"_greed_fit_greed_path", (DL_FUNC) &_greed_fit_greed_path, 2},
    {"_greed_lm_post", (DL_FUNC) &_greed_lm_post, 5},
    {"_greed_lm_post_add1", (DL_FUNC) &_greed_lm_post_add1, 6},
    {"_greed_lm_post_del1", (DL_FUNC) &_greed_lm_post_del1, 6},
    {"_greed_lm_post_merge", (DL_FUNC) &_greed_lm_post_merge, 5},
    {"_greed_lm_post_add", (DL_FUNC) &_greed_lm_post_add, 6},
    {"_greed_lm_post_del", (DL_FUNC) &_greed_lm_post_del, 6},
    {"_greed_mvlm_post", (DL_FUNC) &_greed_mvlm_post, 4},
    {"_greed_mvlm_post_add1", (DL_FUNC) &_greed_mvlm_post_add1, 5},
    {"_greed_mvlm_post_del1", (DL_FUNC) &_greed_mvlm_post_del1, 5},
    {"_greed_mvlm_post_merge", (DL_FUNC) &_greed_mvlm_post_merge, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_greed(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
