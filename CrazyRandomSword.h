/*
Anthony Tieu
10/11/2017
*/

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword: public Weapon
{
	public:
		CrazyRandomSword() : Weapon("Crazy Random Sword", rand()%91+10) {};
		virtual ~CrazyRandomSword() {};
		virtual double hit(double armor);
};

#endif
