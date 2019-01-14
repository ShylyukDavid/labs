/***********************************************************************
 * Module:  Student.cpp
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:26:45 AM
 * Purpose: Implementation of the class Student
 ***********************************************************************/

#include "Student.h"

Student::Student() : name("Ivan"), surname("Ivanov"), points(30), is_inSettlement(false), has_Stypend(false){
	printf("\n The student was created by default");
}
Student::Student(string n, string s, double p, bool se, bool st) : name(n), surname(s), points(p), is_inSettlement(se), has_Stypend(st){
	printf("\n The student was created by initialisation");
}
Student::Student(const Student &stud)  {
	name = stud.name;
	surname = stud.surname; 
	points = stud.points; 
	is_inSettlement = stud.is_inSettlement;
	has_Stypend = stud.has_Stypend;
	printf("\n The student was created by copy");
}

Student Student::operator++(){
	printf("\n\nOperator '++': Student get 10 more\n\n");
	this->name = name;
	this->surname = surname;
	this->points = points + 10;
	this->is_inSettlement = is_inSettlement;
	this->has_Stypend = has_Stypend;
	return *this;
}

////////////////////////////////////////////////////////////////////////
// Name:       Student::Studying()
// Purpose:    Implementation of Student::Studying()
// Return:     double
////////////////////////////////////////////////////////////////////////


double Student::Studying(void)
{
   // TODO : implement
	return 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Student::EnterStudrada()
// Purpose:    Implementation of Student::EnterStudrada()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Student::EnterStudrada(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Student::LeaveStudrada()
// Purpose:    Implementation of Student::LeaveStudrada()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Student::LeaveStudrada(void)
{
   // TODO : implement
}