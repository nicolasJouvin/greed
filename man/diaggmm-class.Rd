% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/diaggmm.R
\docType{class}
\name{diaggmm-class}
\alias{diaggmm-class}
\title{Diagonal Gaussian mixture model description class}
\description{
An S4 class to represent a multivariate diagonal Gaussian mixture model, extend \code{\link{icl_model-class}}.
The model corresponds to the following generative model:
\deqn{ \pi \sim Dirichlet(\alpha)}
\deqn{ Z_i  \sim \mathcal{M}(1,\pi)}
\deqn{ \lambda_k^{(d)} \sim \mathcal{G}(\kappa,\beta)}
\deqn{ \mu_k^{(d)} \sim \mathcal{N}(\mu,(\tau \lambda_k)^{-1})}
\deqn{ X_{i.}|Z_{ik}=1 \sim \mathcal{N}(\mu_k,\lambda_{k}^{-1})}
with \eqn{\mathcal{G}(\kappa,\beta)} the Gamma distribution with shape parameter \eqn{\kappa} and rate parameter \eqn{\beta}.
}
\section{Slots}{

\describe{
\item{\code{name}}{name of the model}

\item{\code{alpha}}{Dirichlet over cluster proportions prior parameter (default to 1)}

\item{\code{tau}}{Prior parameter (inverse variance), (default 0.01)}

\item{\code{kappa}}{Prior parameter (gamma shape), (default to 1)}

\item{\code{beta}}{Prior parameter (gamma rate), (default to NaN, in this case beta will be estimated from data as 0.1 time the mean of X columns variances)}

\item{\code{mu}}{Prior for the means (vector of size D), (default to NaN, in this case mu will be estimated from data as the mean of X)}
}}

\examples{
new("diaggmm")
new("diaggmm",alpha=1,tau=0.1,beta=0.1)
}
\references{
Bertoletti, Marco & Friel, Nial & Rastelli, Riccardo. (2014). Choosing the number of clusters in a finite mixture model using an exact Integrated Completed Likelihood criterion. METRON. 73. 10.1007/s40300-015-0064-5. #'
}
