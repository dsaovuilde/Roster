#pragma once
#ifndef Roster_H
#define Roster_H
//#include <iostream>
//#include <string>
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include "SecurityStudent.h"
using namespace std;

class Roster {
	//E.3
public:
	void add(string StudentID, string firstName, string lastName, string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degree degreeProgram);
	void printAll();
	void remove(string StudentID);
	void printDaysInCourse(string StudentID);
	void printInvalidEmails();
	void printByDegreeProgram(degree degreeProgram);
	~Roster();

//private:
	
	// array of pointers E1
	Student *classRosterArray[5]{ nullptr, nullptr, nullptr, nullptr, nullptr, };


};

#endif Roster_H