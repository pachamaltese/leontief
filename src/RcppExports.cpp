// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// input_requirement
arma::mat input_requirement(const arma::mat& X, const arma::vec& d);
RcppExport SEXP _leontief_input_requirement(SEXP XSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(input_requirement(X, d));
    return rcpp_result_gen;
END_RCPP
}
// augmented_input_requirement
arma::mat augmented_input_requirement(const arma::mat& X, const arma::vec& w, const arma::vec& c, const arma::vec& d);
RcppExport SEXP _leontief_augmented_input_requirement(SEXP XSEXP, SEXP wSEXP, SEXP cSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(augmented_input_requirement(X, w, c, d));
    return rcpp_result_gen;
END_RCPP
}
// output_allocation
arma::mat output_allocation(const arma::mat& X, const arma::vec& d);
RcppExport SEXP _leontief_output_allocation(SEXP XSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(output_allocation(X, d));
    return rcpp_result_gen;
END_RCPP
}
// leontief_inverse
arma::mat leontief_inverse(const arma::mat& A);
RcppExport SEXP _leontief_leontief_inverse(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(leontief_inverse(A));
    return rcpp_result_gen;
END_RCPP
}
// equilibrium_output
arma::mat equilibrium_output(const arma::mat& L, const arma::vec& d);
RcppExport SEXP _leontief_equilibrium_output(SEXP LSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(equilibrium_output(L, d));
    return rcpp_result_gen;
END_RCPP
}
// output_multiplier
arma::mat output_multiplier(const arma::mat& L);
RcppExport SEXP _leontief_output_multiplier(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(output_multiplier(L));
    return rcpp_result_gen;
END_RCPP
}
// income_multiplier
arma::mat income_multiplier(const arma::mat& L, const arma::vec& w);
RcppExport SEXP _leontief_income_multiplier(SEXP LSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(income_multiplier(L, w));
    return rcpp_result_gen;
END_RCPP
}
// employment_multiplier
arma::mat employment_multiplier(const arma::mat& L, const arma::vec& e);
RcppExport SEXP _leontief_employment_multiplier(SEXP LSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(employment_multiplier(L, e));
    return rcpp_result_gen;
END_RCPP
}
// employment_number
arma::mat employment_number(const arma::mat& L, const arma::vec& e, const arma::vec& c);
RcppExport SEXP _leontief_employment_number(SEXP LSEXP, SEXP eSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type e(eSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(employment_number(L, e, c));
    return rcpp_result_gen;
END_RCPP
}
// backward_linkage
arma::mat backward_linkage(const arma::mat& A);
RcppExport SEXP _leontief_backward_linkage(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(backward_linkage(A));
    return rcpp_result_gen;
END_RCPP
}
// forward_linkage
arma::mat forward_linkage(const arma::mat& A);
RcppExport SEXP _leontief_forward_linkage(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(forward_linkage(A));
    return rcpp_result_gen;
END_RCPP
}
// power_dispersion
arma::mat power_dispersion(const arma::mat& L);
RcppExport SEXP _leontief_power_dispersion(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(power_dispersion(L));
    return rcpp_result_gen;
END_RCPP
}
// power_dispersion_cv
arma::mat power_dispersion_cv(const arma::mat& L);
RcppExport SEXP _leontief_power_dispersion_cv(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(power_dispersion_cv(L));
    return rcpp_result_gen;
END_RCPP
}
// sensitivity_dispersion
arma::mat sensitivity_dispersion(const arma::mat& L);
RcppExport SEXP _leontief_sensitivity_dispersion(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(sensitivity_dispersion(L));
    return rcpp_result_gen;
END_RCPP
}
// sensitivity_dispersion_cv
arma::mat sensitivity_dispersion_cv(const arma::mat& L);
RcppExport SEXP _leontief_sensitivity_dispersion_cv(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(sensitivity_dispersion_cv(L));
    return rcpp_result_gen;
END_RCPP
}
// multiplier_product_matrix
arma::mat multiplier_product_matrix(const arma::mat& L);
RcppExport SEXP _leontief_multiplier_product_matrix(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(multiplier_product_matrix(L));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_leontief_input_requirement", (DL_FUNC) &_leontief_input_requirement, 2},
    {"_leontief_augmented_input_requirement", (DL_FUNC) &_leontief_augmented_input_requirement, 4},
    {"_leontief_output_allocation", (DL_FUNC) &_leontief_output_allocation, 2},
    {"_leontief_leontief_inverse", (DL_FUNC) &_leontief_leontief_inverse, 1},
    {"_leontief_equilibrium_output", (DL_FUNC) &_leontief_equilibrium_output, 2},
    {"_leontief_output_multiplier", (DL_FUNC) &_leontief_output_multiplier, 1},
    {"_leontief_income_multiplier", (DL_FUNC) &_leontief_income_multiplier, 2},
    {"_leontief_employment_multiplier", (DL_FUNC) &_leontief_employment_multiplier, 2},
    {"_leontief_employment_number", (DL_FUNC) &_leontief_employment_number, 3},
    {"_leontief_backward_linkage", (DL_FUNC) &_leontief_backward_linkage, 1},
    {"_leontief_forward_linkage", (DL_FUNC) &_leontief_forward_linkage, 1},
    {"_leontief_power_dispersion", (DL_FUNC) &_leontief_power_dispersion, 1},
    {"_leontief_power_dispersion_cv", (DL_FUNC) &_leontief_power_dispersion_cv, 1},
    {"_leontief_sensitivity_dispersion", (DL_FUNC) &_leontief_sensitivity_dispersion, 1},
    {"_leontief_sensitivity_dispersion_cv", (DL_FUNC) &_leontief_sensitivity_dispersion_cv, 1},
    {"_leontief_multiplier_product_matrix", (DL_FUNC) &_leontief_multiplier_product_matrix, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_leontief(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
