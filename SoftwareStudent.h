#pragma once
#ifndef SoftwareStudent_H
#define SoftwareStudent_H
#include "Student.h"
#include "degree.h"
//D.3
class SoftwareStudent : public Student 
{
	virtual degree GetDegreeProgram();
	using Student::Student;
	
private:
	degree typeOfDegree = SOFTWARE;

};

#endif SoftwareStudent_H

