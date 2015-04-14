
r-portable 
==========
[![Build status](https://ci.appveyor.com/api/projects/status/w016xch3qm00msde/branch/master)](https://ci.appveyor.com/project/krlmlr/r-portable/branch/master)

Archives and disk images that contain everything necessary to build R packages on Windows.

Built by [AppVeyor](http://www.appveyor.com/). Uses [innounp](http://innounp.sourceforge.net/) and [the cygwin port of cdrtools](http://www.student.tugraz.at/thomas.plank/index_en.html).

## Download

Most recent version:

- [R.tar.gz](https://rportable.blob.core.windows.net/r-portable/master/R.tar.gz) (152.7 MB, MD5 hash: `a75310181815250ed9e629325918b8e8`, uncompressed 440.9 MB)
- [R.iso.gz](https://rportable.blob.core.windows.net/r-portable/master/R.iso.gz) (153 MB, MD5 hash: `9c300e0fa16b6848cf67d8a1f3b38a90`, uncompressed 449.2 MB)
- [R.vhd.gz](https://rportable.blob.core.windows.net/r-portable/master/R.vhd.gz) (154.5 MB, MD5 hash: `1bee0059b1802474b623220867e33d0a`, uncompressed 480.9 MB)

Earlier versions are available through the [AppVeyor build history](https://ci.appveyor.com/project/krlmlr/r-portable/history) in the corresponding "ARTIFACTS" section of the individual builds.  ([Direct link](https://ci.appveyor.com/project/krlmlr/r-portable/build/artifacts) to the artifacts for the *latest* build.)

## Contents

### R version

R Under development (unstable) (2015-04-19 r68206)

### Package versions

####  base 
[`base`](http://cran.r-project.org/package=base) (3.3.0),
[`compiler`](http://cran.r-project.org/package=compiler) (3.3.0),
[`datasets`](http://cran.r-project.org/package=datasets) (3.3.0),
[`graphics`](http://cran.r-project.org/package=graphics) (3.3.0),
[`grDevices`](http://cran.r-project.org/package=grDevices) (3.3.0),
[`grid`](http://cran.r-project.org/package=grid) (3.3.0),
[`methods`](http://cran.r-project.org/package=methods) (3.3.0),
[`parallel`](http://cran.r-project.org/package=parallel) (3.3.0),
[`splines`](http://cran.r-project.org/package=splines) (3.3.0),
[`stats`](http://cran.r-project.org/package=stats) (3.3.0),
[`stats4`](http://cran.r-project.org/package=stats4) (3.3.0),
[`tcltk`](http://cran.r-project.org/package=tcltk) (3.3.0),
[`tools`](http://cran.r-project.org/package=tools) (3.3.0),
[`utils`](http://cran.r-project.org/package=utils) (3.3.0) 
####  recommended 
[`boot`](http://cran.r-project.org/package=boot) (1.3-16),
[`class`](http://cran.r-project.org/package=class) (7.3-12),
[`cluster`](http://cran.r-project.org/package=cluster) (2.0.1),
[`codetools`](http://cran.r-project.org/package=codetools) (0.2-11),
[`foreign`](http://cran.r-project.org/package=foreign) (0.8-63),
[`KernSmooth`](http://cran.r-project.org/package=KernSmooth) (2.23-14),
[`lattice`](http://cran.r-project.org/package=lattice) (0.20-31),
[`MASS`](http://cran.r-project.org/package=MASS) (7.3-40),
[`Matrix`](http://cran.r-project.org/package=Matrix) (1.2-0),
[`mgcv`](http://cran.r-project.org/package=mgcv) (1.8-6),
[`nlme`](http://cran.r-project.org/package=nlme) (3.1-120),
[`nnet`](http://cran.r-project.org/package=nnet) (7.3-9),
[`rpart`](http://cran.r-project.org/package=rpart) (4.1-9),
[`spatial`](http://cran.r-project.org/package=spatial) (7.3-9),
[`survival`](http://cran.r-project.org/package=survival) (2.38-1) 
####  other 
[`bitops`](http://cran.r-project.org/package=bitops) (1.0-6),
[`brew`](http://cran.r-project.org/package=brew) (1.0-6),
[`devtools`](http://cran.r-project.org/package=devtools) (1.7.0),
[`digest`](http://cran.r-project.org/package=digest) (0.6.8),
[`evaluate`](http://cran.r-project.org/package=evaluate) (0.6),
[`formatR`](http://cran.r-project.org/package=formatR) (1.1),
[`highr`](http://cran.r-project.org/package=highr) (0.4.1),
[`httr`](http://cran.r-project.org/package=httr) (0.6.1),
[`jsonlite`](http://cran.r-project.org/package=jsonlite) (0.9.16),
[`knitr`](http://cran.r-project.org/package=knitr) (1.9),
[`markdown`](http://cran.r-project.org/package=markdown) (0.7.4),
[`memoise`](http://cran.r-project.org/package=memoise) (0.2.1),
[`mime`](http://cran.r-project.org/package=mime) (0.3),
[`plyr`](http://cran.r-project.org/package=plyr) (1.8.1),
[`R6`](http://cran.r-project.org/package=R6) (2.0.1),
[`Rcpp`](http://cran.r-project.org/package=Rcpp) (0.11.5),
[`RCurl`](http://cran.r-project.org/package=RCurl) (1.95-4.5),
[`roxygen2`](http://cran.r-project.org/package=roxygen2) (4.1.1),
[`rstudioapi`](http://cran.r-project.org/package=rstudioapi) (0.3.1),
[`stringr`](http://cran.r-project.org/package=stringr) (0.6.2),
[`testthat`](http://cran.r-project.org/package=testthat) (0.9.1),
[`translations`](http://cran.r-project.org/package=translations) (3.3.0),
[`whisker`](http://cran.r-project.org/package=whisker) (0.3-2) 
