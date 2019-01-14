/***********************************************************************
 * Module:  Studrada.h
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:22:19 AM
 * Purpose: Declaration of the class Studrada
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Proshchenko_Studrada_h)
#define __UML_Class_Diagram_Proshchenko_Studrada_h
#include "Header.h"

class Studrada
{
public:
   void EditQuantity(void);
   int Event(void);
   void WorkwithFinances(void);

   Studrada();
   Studrada(const Studrada&);
   //Studrada(vector<Student>, double);

   inline vector<Student> Getstudents(){ return students; }
   inline double Getfinancing(){ return financing; }

   inline void Setstudents(vector<Student> arg){ students.swap(arg); }
   inline void Setfinancing(double arg){ financing = arg; }

protected:
private:
   vector<Student> students;
   double financing;


};

#endif