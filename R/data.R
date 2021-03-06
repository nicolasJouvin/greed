#' Ndrangheta mafia covert network dataset
#'
#' Network of co-attendance occurrence attendance of suspected members of the Ndrangheta criminal organization at summits (meetings whose purpose is to make important decisions and/or affiliations, but also to solve internal problems and to establish roles and powers) taking place between 2007 and 2009.
 
#' @docType data
#'
#' @usage data(Ndrangheta)
#'
#' @format An object of class \code{list} with two fields; 
#'  \describe{
#'   \item{X}{network adjacency matrix as a \code{\link[matrix]{matrix}} of size 146x146}
#'   \item{node_meta}{data frame of nodes meta information with features :}
#'   \describe{
#'   \item{Id}{id of the node, rownames of network adjacency matrix}
#'   \item{Locale}{factor with the locali affiliation of the node , "OUT": Suspects not belonging to La Lombardia, "MISS": Information not available, other Locali Id.}
#'   \item{Role}{factor with the type of hierarchical position of the node "MISS": Information not available,"boss": high hierachical position, "aff": affiliate}
#'   
#' }
#'
#' @keywords datasets
#'
#' @references{Extended Stochastic Block Models with Application to Criminal Networks, Sirio Legramanti and Tommaso Rigon and Daniele Durante and David B. Dunson, 2021, 
#' (\href{https://arxiv.org/abs/2007.08569v2}{arXiv:2007.08569}).}
#'
#' @source \href{https://sites.google.com/site/ucinetsoftware/datasets/covert-networks/ndranghetamafia2}{ucinetsoftware/datasets/covert-networks}
#'
#' @examples
#' data(Ndrangheta)
"Ndrangheta"



#' American College football network dataset
#'
#' Network of American football games between Division IA colleges during regular season Fall 2000. 
#' @docType data
#'
#' @usage data(Football)
#'
#' @format An object of class \code{list} with two fields; 
#'  \describe{
#'   \item{X}{network adjacency matrix as a \code{\link[Matrix]{sparseMatrix}} of size 115x115}
#'   \item{label}{vector of teams conferences of size 115 with the following encoding (0 = Atlantic Coast,
#'   1 = Big East,
#'   2 = Big Ten,
#'   3 = Big Twelve,
#'   4 = Conference USA,
#'   5 = Independents,
#'   6 = Mid-American,
#'   7 = Mountain West,
#'   8 = Pacific Ten,
#'   9 = Southeastern,
#'   10 = Sun Belt,
#'   11 = Western Athletic)}
#' }
#'
#' @keywords datasets
#'
#' @references M. Girvan and M. E. J. Newman, Community structure in social and biological networks, Proc. Natl. Acad. Sci. USA 99, 7821-7826 (2002)
#' (\href{https://www.pnas.org/content/99/12/7821}{PNAS}).
#'
#' @source \href{http://www-personal.umich.edu/~mejn/netdata/}{M. E. J. Newman Network datasets}
#'
#' @examples
#' data(Football)
"Football"


#' Fashion mnist dataset
#'
#' Zalando fashionmnist dataset, sample of 1 000 Zalando's article images from the test set.
#' @docType data
#'
#' @usage data(fashion)
#'
#' @format An object of class \code{list} with two fields; 
#'  \describe{
#'   \item{X}{pixels intensities values data.frame of size 1 000x784}
#'   \item{labels}{vector of labels with the following encoding (0 = T-shirt/top,
#'   1 = Trouser,
#'   2 = Pullover,
#'   3 = Dress,
#'   4 = Coat,
#'   5 = Sandal,
#'   6 = Shirt,
#'   7 = Sneaker,
#'   8 = Bag
#'   9 = Ankle boot)}
#' }
#'
#' @keywords datasets
#'
#' @references Fashion-MNIST: a Novel Image Dataset for Benchmarking Machine Learning Algorithms. Han Xiao, Kashif Rasul, Roland Vollgraf (2017)  
#' (\href{https://arxiv.org/abs/1708.07747}{arXiv:1708.07747}).
#'
#' @source \href{https://github.com/zalandoresearch/fashion-mnist}{https://github.com/zalandoresearch/fashion-mnist}
#'
#' @examples
#' data(fashion)
"fashion"


#' Political blogs network dataset
#' 
#' A directed network of hyperlinks between weblogs on US politics, recorded in 2005 by Adamic and Glance. 
#' Only the biggest connected component of the original graph is provided. 
#' 
#' @docType data
#'
#' @usage data(Blogs)
#'
#' @format An object of class \code{list} with two fields; 
#'  \describe{
#'   \item{X}{network adjacency matrix as a \code{\link[Matrix]{sparseMatrix}} of size 1222x1222}
#'   \item{label}{vector of political leaning of each blogs (size 1222) with the following encoding (0 = left or liberal,1 = right or conservative)}
#' }
#'
#' @keywords datasets
#'
#' @references Lada A. Adamic and Natalie Glance, "The political blogosphere and the 2004 US Election", in Proceedings of the WWW-2005 Workshop 
#' on the Weblogging Ecosystem (2005) (\href{https://dl.acm.org/doi/10.1145/1134271.1134277}{ACM}).
#'
#' @source \href{http://www-personal.umich.edu/~mejn/netdata/}{M. E. J. Newman Network datasets}
#'
#' @examples
#' data(Blogs)
"Blogs"




#' Books about US politics network dataset
#' 
#' A network of books about US politics published around the time of the 2004 presidential election and sold by the online bookseller Amazon.com. Edges between books represent frequent co-purchasing of books by the same buyers. 
#' The network was compiled by V. Krebs and is unpublished, but can found on Krebs' web site. Thanks to Valdis Krebs for permission to post these data on this web site.
#' 
#' @docType data
#'
#' @usage data(Books)
#'
#' @format An object of class \code{list} with two fields; 
#'  \describe{
#'   \item{X}{network adjacency matrix as a \code{\link[Matrix]{sparseMatrix}} of size 105x105}
#'   \item{label}{ a factor of length  (size 105) with levels "l", "n", or "c" to indicate whether the books are liberal, neutral, or conservative}
#' }
#'
#' @keywords datasets
#'
#'
#' @source \href{http://www-personal.umich.edu/~mejn/netdata/}{M. E. J. Newman Network datasets}
#'
#' @examples
#' data(Books)
"Books"


#' Jazz musicians network dataset
#' 
#' List of edges of the network of Jazz musicians.
#'  
#' @docType data
#'
#' @usage data(Jazz)
#'
#' @format An object of class \code{\link[Matrix]{sparseMatrix}} with the network adjacency matrix. 
#'
#' @keywords datasets
#'
#' @references P.Gleiser and L. Danon , Community Structure in jazz, Adv. Complex Syst.6, 565 (2003) (\href{https://arxiv.org/abs/cond-mat/0307434}{Arxiv})
#' 
#' @source \href{http://deim.urv.cat/~alexandre.arenas/data/welcome.htm}{A. Arena Network datasets}
#'
#' @examples
#' data(Jazz)
"Jazz"

#' Jazz musicians / Bands relations
#' 
#' List  Jazz musicians / Bands relationship
#'  
#' @docType data
#'
#' @usage data(Jazz_full)
#'
#' @format A list with two fields:
#' \describe{
#'   \item{X}{a \code{\link[Matrix]{sparseMatrix}} binary matrix of size 4475x965 with a one when one musicians played once in a given band.}
#'   \item{col_meta}{a data.frame with columns (bands) meta_data}
#' }
#'
#' @keywords datasets
#'
#' @references P.Gleiser and L. Danon , Community Structure in jazz, Adv. Complex Syst.6, 565 (2003) (\href{https://arxiv.org/abs/cond-mat/0307434}{Arxiv})
#' 
#' @source \href{http://deim.urv.cat/~alexandre.arenas/data/welcome.htm}{A. Arena Network datasets}
#'
#' @examples
#' data(Jazz_full)
"Jazz_full"


#' French Parliament votes dataset
#' 
#' 
#'  
#' 
#' @docType data 
#'
#' @usage data(FrenchParliament)
#'
#' @format An object of class \code{list} with two fields; 
#'  \describe{
#'   \item{X}{matrix of deputy votes a \code{\link[Matrix]{sparseMatrix}} of size 593x570}
#'   \item{labels}{a data frame with deputy meta-data}
#' }
#' @examples
#' data(FrenchParliament)
"FrenchParliament"

#' French Parliament votes dataset
#' 
#' 
#'  
#' 
#' @docType data
#'
#' @usage data(Xvlegislature)
#'
#' @format An object of class \code{list} with three fields; 
#'  \describe{
#'   \item{X}{matrix of deputy votes a \code{\link[Matrix]{sparseMatrix}} of size 593x1839}
#'   \item{rowmeta}{a data frame with deputy meta-data}
#'   \item{colmeta}{a data frame with votes meta data}
#' }
#' @examples
#' data(Xvlegislature)
"Xvlegislature"


