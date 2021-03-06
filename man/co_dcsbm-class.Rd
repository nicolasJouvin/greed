% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/coclust_dcsbm.R
\docType{class}
\name{co_dcsbm-class}
\alias{co_dcsbm-class}
\title{Degree Corrected Stochastic Block Model for bipartite graph class}
\description{
An S4 class to represent a degree corrected stochastic block model for co_clustering of bipartite graph, extends \code{\link{icl_model-class}} class.
Such model can be used to cluster graph vertex, and model a bipartite graph adjacency matrix \eqn{X} with the following generative model :  
\deqn{ \pi \sim Dirichlet(\alpha)}
\deqn{ Z_i^r  \sim \mathcal{M}(1,\pi^r)}
\deqn{ Z_j^c  \sim \mathcal{M}(1,\pi^c)}
\deqn{ \theta_{kl} \sim Exponential(p)}
\deqn{ \gamma_i^r\sim \mathcal{U}(S_k)}
\deqn{ \gamma_i^c\sim \mathcal{U}(S_l)}
\deqn{ X_{ij}|Z_{ik}^cZ_{jl}^r=1 \sim \mathcal{P}(\gamma_i^r\theta_{kl}\gamma_j^c)}
The individuals parameters \eqn{\gamma_i^r,\gamma_j^c} allow to take into account the node degree heterogeneity. 
These parameters have uniform priors over simplex \eqn{S_k}. This class mainly store the prior parameters value \eqn{\alpha} of this generative model in the following slots (the prior parameter \eqn{p} is estimated from the data as the global average probability of connection between two nodes):
}
\section{Slots}{

\describe{
\item{\code{alpha}}{Dirichlet parameters for the prior over clusters proportions (default to 1)}

\item{\code{p}}{Exponential prior parameter (default to Nan, in this case p will be estimated from data as the average intensities of X)}
}}

\examples{
new("co_dcsbm")
new("co_dcsbm", p = 0.1)
}
