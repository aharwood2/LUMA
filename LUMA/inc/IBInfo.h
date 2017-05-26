/*
* --------------------------------------------------------------
*
* ------ Lattice Boltzmann @ The University of Manchester ------
*
* -------------------------- L-U-M-A ---------------------------
*
*  Copyright (C) 2015, 2016
*  E-mail contact: info@luma.manchester.ac.uk
*
* This software is for academic use only and not available for
* distribution without written consent.
*
*/
#ifndef IBINFO_H
#define IBINFO_H

#include "stdafx.h"



///	\brief	Class for arranging data before epsilon calculation.
///
///
class epsCalcMarkerClass
{

public:
	// Default Constructor
	epsCalcMarkerClass();

	// Custom constructor for creating eps calc marker
	epsCalcMarkerClass(int bodyID, std::vector<double> position, double area, double dilation, std::vector<std::vector<double>> supp_position, std::vector<double> deltaval);

public:

	// Marker data
	int bodyID;
	std::vector<double> position;
	double local_area;
	double dilation;

	// Support data
	std::vector<double> deltaval;
	std::vector<double> x;
	std::vector<double> y;
	std::vector<double> z;
};

#endif	// L_IBINFO_H
