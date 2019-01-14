/***********************************************************************
 * Module:  Studrada.cpp
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:22:19 AM
 * Purpose: Implementation of the class Studrada
 ***********************************************************************/

#include "SRStudent.h"
#include "Studrada.h"



Studrada::Studrada() : students(1, Student()), financing(30){
	printf("\n The studrada was created by default");
}

Studrada::Studrada(const Studrada& arg) : students(arg.students), financing(arg.financing){
	printf("\n The studrada was created by copy");
}


void Studrada::EditQuantity(void)
{
   // TODO : implement
}


int Studrada::Event(void)
{
   // TODO : implement
	return 0;
}


void Studrada::WorkwithFinances(void)
{
   // TODO : implement
}