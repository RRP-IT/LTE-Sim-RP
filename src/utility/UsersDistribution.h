/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010,2011,2012,2013 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of LTE-Sim
 *
 * LTE-Sim is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * LTE-Sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LTE-Sim; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author of original file: Giuseppe Piro <g.piro@poliba.it>
 * Author of updated file: Rui R. Paulo <rrp@lx.it.pt>
 */


#ifndef USERSDISTRIBTION_H_
#define USERSDISTRIBTION_H_

#include "../core/cartesianCoodrdinates/CartesianCoordinates.h"
#include "CellPosition.h"
#include "../componentManagers/NetworkManager.h"

#include <vector>
#include <iostream>
#include <cmath>
#include <random>
#include <chrono>

static CartesianCoordinates*
GetCartesianCoordinatesFromPolar (double r, double angle)
{
  double x = r * cos (angle);
  double y = r * sin (angle);

  CartesianCoordinates *coordinates = new CartesianCoordinates ();
  coordinates->SetCoordinates(x,y);
  return coordinates;
}

static vector<CartesianCoordinates*>*
GetUniformUsersDistribution (int idCell, int nbUE)
{
  NetworkManager * networkManager = NetworkManager::Init();
  vector<CartesianCoordinates*> *vectorOfCoordinates = new vector<CartesianCoordinates*>;

  Cell *cell = networkManager->GetCellByID(idCell);

  double radii = (cell->GetRadius()*1000)*0.8;

  CartesianCoordinates *cellCoordinates = cell->GetCellCenterPosition();
  double r; double angle;

  for (int i = 0; i < nbUE; i++)
    {

                 /* Made by Rui R. Paulo, please cite  doi: 10.1109/VTCFall.2018.8690935 */
	  	 unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	  	 std::mt19937 rng_mt(seed);
	  	 std::uniform_real_distribution<double> dist_double(0.0, 1.0);
	  	 std::uniform_real_distribution<double> theta_double(0.0, 360.0);

	  	 double radius=dist_double(rng_mt);
	  	 double th=theta_double(rng_mt);

	  	 double angle = 2*M_PI*th/360;
	  	 double r1 = sqrt(radius);
	  	 double r = radii*r1;


	  CartesianCoordinates *newCoordinates = GetCartesianCoordinatesFromPolar (r, angle);

	  //Compute absoluteCoordinates
	  newCoordinates->SetCoordinateX (cellCoordinates->GetCoordinateX () + newCoordinates->GetCoordinateX ());
	  newCoordinates->SetCoordinateY (cellCoordinates->GetCoordinateY () + newCoordinates->GetCoordinateY ());

	  vectorOfCoordinates->push_back(newCoordinates);
    }

  return vectorOfCoordinates;
}

static vector<CartesianCoordinates*>*
GetUniformUsersDistributionInFemtoCell (int idCell, int nbUE)
{
  NetworkManager * networkManager = NetworkManager::Init();
  vector<CartesianCoordinates*> *vectorOfCoordinates = new vector<CartesianCoordinates*>;

  Femtocell *cell = networkManager->GetFemtoCellByID(idCell);

  double sidehome = cell->GetSide();
 

  CartesianCoordinates *cellCoordinates = cell->GetCellCenterPosition();
  double r; double angle;

  for (int i = 0; i < nbUE; i++)
    {

                 /* Made by Rui R. Paulo, please cite  doi: 10.1109/VTCFall.2018.8690935 */
	  	 unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	  	 std::mt19937 rng_mt(seed);
	  	 std::uniform_real_distribution<double> distx_double(0.0, 1);
	  	 std::uniform_real_distribution<double> disty_double(0.0, 1);

	  	 double xa=distx_double(rng_mt);
	  	 double ya=disty_double(rng_mt);

	  	 double x = sidehome*xa-(sidehome/2);
	  	 double y = sidehome*ya-(sidehome/2);


	  //CartesianCoordinates *newCoordinates = GetCartesianCoordinatesFromPolar (r, angle);
	  	CartesianCoordinates *newCoordinates = new CartesianCoordinates ();
	  	newCoordinates->SetCoordinates(x,y);
	  //Compute absoluteCoordinates
	  newCoordinates->SetCoordinateX (cellCoordinates->GetCoordinateX () + newCoordinates->GetCoordinateX ());
	  newCoordinates->SetCoordinateY (cellCoordinates->GetCoordinateY () + newCoordinates->GetCoordinateY ());

	  vectorOfCoordinates->push_back(newCoordinates);
    }

  return vectorOfCoordinates;
}


#endif /* USERSDISTRIBTION_H_ */
