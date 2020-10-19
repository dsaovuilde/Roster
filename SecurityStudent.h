#pragma once
#ifndef SecurityStudent_H
#define SecurityStudent_H
#include "Student.h"
#include "degree.h"
// D.3
class SecurityStudent : public Student
{
	virtual degree GetDegreeProgram();
	using Student::Student;
private:
	degree typeOfDegree = SECURITY;

};

#endif SecurityStudent_H
