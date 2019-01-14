/***********************************************************************
 * Module:  Decanat.cpp
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:21:20 AM
 * Purpose: Implementation of the class Decanat
 ***********************************************************************/

#include "Decanat.h"

Decanat::Decanat() :name("FICT"), financing(40.5){
	printf("\n The decanat was created by default");
}

Decanat::Decanat(const Decanat& arg): name(arg.name), financing(arg.financing){
	printf("\n The decanat was created by copy");
}

Decanat::Decanat(string name, double financ) : name(name), financing(financ){
	printf("\n The decanat was created by default");
}


void Decanat::Stypend(void)
{
   // TODO : implement
}



void Decanat::DeductionOfStudent(void)
{
   // TODO : implement
}