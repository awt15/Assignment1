/*
Anthony Tieu,
10/11/2017
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

class SimpleAxe : public Weapon
{
	public:
	SimpleAxe() : Weapon("Simple Axe", 60){}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);
};

#endif
