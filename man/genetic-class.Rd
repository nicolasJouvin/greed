% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/alg_classes.R
\docType{class}
\name{genetic-class}
\alias{genetic-class}
\title{Genetic optimization algorithm}
\description{
An S4 class to represent a genetic algorithm (extends \code{\link{alg-class}} class).
}
\section{Slots}{

\describe{
\item{\code{pop_size}}{size of the solutions populations (default to 10)}

\item{\code{nb_max_gen}}{maximal number of generation to produce (default to 4)}

\item{\code{prob_mutation}}{probability of mutation (default to 0.25)}

\item{\code{sel_frac}}{fraction of best solutions selected for crossing  (default to 0.75)}
}}

