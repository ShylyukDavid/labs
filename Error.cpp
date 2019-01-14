/***********************************************************************
 * Module:  Error.cpp
 * Author:  is7222
 * Modified: Thursday, January 10, 2019 10:28:13 AM
 * Purpose: Implementation of the class Error
 ***********************************************************************/

#include "Error.h"


Error::Error(int i) :type(i){

}


void Error::SearchError()
{
	switch (type){
	case 1:
		LowPoints();
		break;
	}
}



void Error::LowPoints(void)
{
	printf("\n\nPoints are less than 60. Student can`t study more");
}

void Error::LowFinancing(void)
{
   // TODO : implement
}


void Error::LowAttractedPeople(void)
{
   // TODO : implement
}