/*
Anthony Tieu
10/11/2017
*/

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
	hitPoints = rand()% 91 + 10;
	int halfarmor = armor/2 + 1;
	int reduce = rand()% halfarmor;

	double damage = hitPoints - (armor - reduce);
	if(damage < 0)		return 0;
	else				return damage;
}
