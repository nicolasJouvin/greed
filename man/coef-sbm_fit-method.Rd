% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sbm.R
\name{coef,sbm_fit-method}
\alias{coef,sbm_fit-method}
\title{Extract parameters from an \code{\link{sbm_fit-class}} object}
\usage{
\S4method{coef}{sbm_fit}(object)
}
\arguments{
\item{object}{a \code{\link{sbm_fit-class}}}
}
\value{
a list with the model parameters estimates (MAP), the fields are:
\itemize{
\item \code{'pi'}: cluster proportions 
\item \code{'thetakl'}: between clusters connections probabilities (matrix of size K x K)
}
}
\description{
Extract parameters from an \code{\link{sbm_fit-class}} object
}
