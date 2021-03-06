% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sbm.R
\docType{class}
\name{sbm_fit-class}
\alias{sbm_fit-class}
\title{Stochastic Block Model fit results class}
\description{
An S4 class to represent a fit of a Stochastic Block Model, extend \code{\link{icl_fit-class}}.
}
\section{Slots}{

\describe{
\item{\code{model}}{a \code{\link{sbm-class}} object to store the model fitted}

\item{\code{name}}{generative model name}

\item{\code{icl}}{icl value of the fitted model}

\item{\code{K}}{number of extracted clusters over rows and columns}

\item{\code{cl}}{a numeric vector with row and columns cluster indexes}

\item{\code{obs_stats}}{a list with the following elements:
\itemize{
\item counts: numeric vector of size K with number of elements in each clusters
\item x_counts: matrix of size K*K with the number of links between each pair of clusters 
}}

\item{\code{move_mat}}{binary matrix which store move constraints}

\item{\code{train_hist}}{data.frame with training history information (details depends on the training procedure)}
}}

