/***********************************************************************
 * Module:  Student.h
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:26:45 AM
 * Purpose: Declaration of the class Student
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Proshchenko_Student_h)
#define __UML_Class_Diagram_Proshchenko_Student_h
#include "Header.h"
class Student
{
public:
   double Studying(void);
   void EnterStudrada(void);
   void LeaveStudrada(void);

   Student();
   Student(const Student&);
   Student(string, string, double, bool, bool);

   inline string Getname(){ return name; }
   inline string Getsurname(){ return surname; }
   inline double Getpoints(){ return points; }
   inline bool GetSettle(){ return is_inSettlement; }
   inline bool GetStypend(){ return has_Stypend; }

   Student Student::operator ++();


protected:

private:
  
	string name;
	string surname;
	double points;
	bool is_inSettlement;
	bool has_Stypend;

};

#endif