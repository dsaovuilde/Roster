#pragma once
#ifndef Student_H
#define Student_H
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student
{
public:
	// getters D2.a
	string &GetStudentID();
	string &GetFirstName();
	string &GetLastName();
	string &GetStudentEmail();
	int GetStudentAge();
	int *GetDaysToComplete();
	virtual degree GetDegreeType();

	// setters D2.b
	void SetStudentID(string &ID);
	void SetFirstName(string &FName);
	void SetLastName(string &LName);
	void SetStudentEmail(string &Email);
	void SetStudentAge(int &Age);
	void SetDaysToComplete( int course1,  int course2,  int course3);
	void SetDegreeType(degree);

	Student(string &ID, string &FName, string &LName, string &Email, int &Age, int course1, int course2, int course3, degree degreeType);
	
	Student();

	// constructor D2.c
  //Student(string &ID, string &FName, string &LName, string &Email, int &Age, int daysToComplete, degree degreeType);

	// destructor D2.e

	~Student();

	// print/GetDegreeProgram D2.d/D2.f

	virtual void print();
	virtual degree GetDegreeProgram();

private:
	string studentId, firstName, lastName, email;
	int age, daysToComplete[3];
	degree degreeType;



};

#endif Student_H