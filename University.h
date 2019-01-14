/***********************************************************************
 * Module:  University.h
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:18:39 AM
 * Purpose: Declaration of the class University
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Proshchenko_University_h)
#define __UML_Class_Diagram_Proshchenko_University_h
#include "Header.h"
#include "Student.h"
#include "Decanat.h"
#include "Studrada.h"

class Studrada;

class University
{
public:
   void FinancingForStudrada(void);
   void Settlement(void);
   void Ejection(void);

   University();
   University(string, bool, double, string na, string s, double p, bool se, bool st, string name, double financ, string, double);
   University(const University&);
   ~University();

   ////////////------------GET---------------/

   inline string Getname(){ return name; }
   inline bool GetProcessing(){ return processing; }
   inline double Getfinancing(){ return financing; }
   inline vector<Student> GetStudents(){ return students; }
   inline vector<Decanat> GetDecanats(){ return decanats; }
   inline vector<Studrada> GetStudradas(){ return studradas; }

   ///////////-------------SET---------------/
   inline void Setname(string arg){ name = arg; }
   inline void Setprocessing(bool arg){ processing = arg; }
   inline void Setfinancing(double arg){ financing = arg; }
   inline void Setstudents(vector<Student> arg){ students.swap(arg); }
   inline void Setdecanats(vector<Decanat> arg){ decanats.swap(arg); }
   inline void Setstudradas(vector<Studrada> arg){ studradas.swap(arg); }

   University& operator=(const University&);

protected:
private:
   string name;
   bool processing;
   double financing;
   vector<Student> students;
   vector<Decanat> decanats;
   vector<Studrada> studradas;


};

#endif