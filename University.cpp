/***********************************************************************
 * Module:  University.cpp
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:18:39 AM
 * Purpose: Implementation of the class University
 ***********************************************************************/

#include "Decanat.h"
#include "Student.h"
#include "Studrada.h"
#include "University.h"


University &University::operator=(const University &un){
	if (this == &un)
		printf("\n The same object");
	else{
		printf("\n Assignment operator used '='\n");
		this->name = un.name;
		this->processing = un.processing;
		this->financing = un.financing;
		this->students = un.students;
		this->decanats = un.decanats;
		this->studradas = un.studradas;
	}
	return *this;
}

University::University() :
name("KPI"), processing(true), financing(50), students(1, Student()), decanats(1, Decanat()), studradas(1, Studrada()){
	printf("\n The University was created by deafult");
}

University::University(string n, bool f, double fin, string na, string s, double p, bool se, bool st, string name, double financ, string name1, double d) :
name(n), processing(f), financing(fin), students(1, Student(na, s, p, se, st)), decanats(1, Decanat(name, financ)), studradas(1, Studrada()){
	printf("\n The University was created by initialisation");
}

University::University(const University &arg) : name(arg.name), processing(arg.processing), financing(arg.financing), students(arg.students),
decanats(arg.decanats), studradas(arg.studradas){
	printf("\n The University was created by copy");
}


University::~University(){
	printf("\n The University was destructed");
}
////////////////////////////////////////////////////////////////////////
// Name:       University::FinancingForStudrada()
// Purpose:    Implementation of University::FinancingForStudrada()
// Return:     void
////////////////////////////////////////////////////////////////////////

void University::FinancingForStudrada(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       University::Settlement()
// Purpose:    Implementation of University::Settlement()
// Return:     void
////////////////////////////////////////////////////////////////////////

void University::Settlement(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       University::Ejection()
// Purpose:    Implementation of University::Ejection()
// Return:     void
////////////////////////////////////////////////////////////////////////

void University::Ejection(void)
{
   // TODO : implement
}