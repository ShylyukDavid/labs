/***********************************************************************
 * Module:  Decanat.h
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:21:20 AM
 * Purpose: Declaration of the class Decanat
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Proshchenko_Decanat_h)
#define __UML_Class_Diagram_Proshchenko_Decanat_h
#include "Header.h"
class Decanat
{
public:
   void Stypend(void);
   void DeductionOfStudent(void);

   Decanat();
   Decanat(const Decanat&);
   Decanat(string, double);

   inline string Getname(){ return name; }
   inline double Getfinancing(){ return financing; }


   inline void Setname(string arg){ name = arg; }
   inline void Setfinancing(double arg){ financing = arg; }

protected:
private:
   string name;
   double financing;


};

#endif