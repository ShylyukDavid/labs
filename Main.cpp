#include "Header.h"
#include "University.h"
#include "Error.h"

int main(){

	printf("Alisa Proshchenko IS-72 Task 1\n\n Presenting constructors:\n\n Default for main class University:\n");
	University university;

	printf("\n\n Initialisation for main class University :\n");

	University university2("KPI", true, 200, "Alisa", "Proshchenko", 75, false, true, 
		"FICT", 40, "Studrada", 50.5);

	printf("\n\n Copying:\n");

	University university3(university);
	printf("\n\n\nUsing operator functions:\n\n");

	university3 = university;
	
	Student st = university.GetStudents()[0];
	cout << "\npoints: " << st.Getpoints() << "\n\n";
	st++;
	cout << "\npoints: " << st.Getpoints() << "\n\n";

	printf("\n\n\nException: if student has less than 60 points, he will be deducted\n\n");
	cout << "\n\nFirst student`s points: " << st.Getpoints() << endl;

	try{
		if (st.Getpoints() < 60)
			throw Error(1);
		printf("\n\nStudent can study far");
	}
	catch (Error er){
		er.SearchError();
	}

	cout << "\n\nSecond student`s points: " << university2.GetStudents()[0].Getpoints() << endl;
	try{
		if (university2.GetStudents()[0].Getpoints() < 60)
			throw Error(1);
		printf("\n\nStudent can study far\n\n");
	}
	catch (Error er){
		er.SearchError();
	}
	system("pause");
	return 0;
}