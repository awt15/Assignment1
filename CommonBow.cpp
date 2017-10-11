/* 
Anthony Tieu
10/11/2017 */

#include "CommonBow.h"

double CommonBow::hit(double armor)
{
	//Ignores 40% of armor
	double damage = hitPoints - (armor * 0.6);
	if (damage < 0)		return 0;
	else				return damage;
}
