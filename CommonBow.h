/*
Anthony Tieu
10/11/2017 */

#include <string>
#include "Weapon.h"

#ifndef COMMONBOW_H
#define COMMONBOW_H

class CommonBow : public Weapon
{
	public:
		CommonBow() : Weapon("Common Bow", 35.0) {}
		virtual ~CommonBow() {};
		virtual double hit(double armor);
};

#endif
