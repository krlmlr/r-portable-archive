// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 4 -*-
//
// rcauchy.h: Rcpp R/C++ interface class library --
//
// Copyright (C) 2010 - 2012 Douglas Bates, Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef Rcpp__stats__random_rcauchy_h
#define Rcpp__stats__random_rcauchy_h

namespace Rcpp {
namespace stats {

class CauchyGenerator : public ::Rcpp::Generator<double> {
public:

	CauchyGenerator( double location_, double scale_) :
		location(location_) , scale(scale_) {}

	inline double operator()() const {
		return location + scale * ::tan(M_PI * unif_rand()) ;
	}

private:
	double location, scale ;
} ;

class CauchyGenerator_1 : public ::Rcpp::Generator<double> {
public:

	CauchyGenerator_1( double location_) :
		location(location_){}

	inline double operator()() const {
		return location + ::tan(M_PI * unif_rand()) ;
	}

private:
	double location ;
} ;

class CauchyGenerator_0 : public ::Rcpp::Generator<double> {
public:

	CauchyGenerator_0(){}

	inline double operator()() const {
		return ::tan(M_PI * unif_rand()) ;
	}

} ;

} // stats

} // Rcpp

#endif
