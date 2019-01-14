/***********************************************************************
 * Module:  Error.h
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:28:13 AM
 * Purpose: Declaration of the class Error
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_Proshchenko_Error_h)
#define __UML_Class_Diagram_Proshchenko_Error_h
#include "Header.h"
class Error
{
public:
   void SearchError();
   void LowPoints(void);
   void LowFinancing(void);
   void LowAttractedPeople(void);

   Error(int);


protected:
private:
   int type;


};

#endif