// Return Values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int calculateBonus(int yearsWorked);
int main()
{
	int manysBonus = calculateBonus(14);
	int emmaBonus = calculateBonus(2);
	printf_s("Many gets $%d \n", manysBonus);
	printf_s("Emma gets $%d \n", emmaBonus);
    return 0;
}
int calculateBonus(int yearsWorked) {
	int bonus = yearsWorked * 200;
	if (yearsWorked > 10) {
		bonus += 1000;
	}
	return bonus;
}
