#pragma once
#ifndef NetworkStudent_H
#define NetworkStudent_H
#include "Student.h"
#include "degree.h"
// D.3
class NetworkStudent : public Student
{
	virtual degree GetDegreeProgram();
	using Student::Student;

private:
	degree typeOfDegree = NETWORK;
};

#endif NetworkStudent_H