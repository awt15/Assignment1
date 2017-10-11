/*
Anthony Tieu,
10/11/2017*/

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor)
{
	if(armor >= 0 && armor <= 20)
		return hitPoints;
	else
	{
		if(hitPoints - armor < 0)	return 0;
		return hitPoints - armor;
	}
}
