#include "Student.h"

Student::Student() {

}
Student::Student(string &ID, string &FName, string &LName, string &Email, int &Age, int course1, int course2, int course3, degree Degree) {
	studentId = ID;
	firstName = FName;
	lastName = LName;
	email = Email;
	age = Age;
	daysToComplete[0] = course1;
	daysToComplete[1] = course2;
	daysToComplete[2] = course3;
	degreeType = Degree;

}
string &Student::GetStudentID() {
	return studentId;
}
string &Student::GetFirstName() {
	return firstName;
}
string &Student::GetLastName() {
	return lastName;
}
string &Student::GetStudentEmail() {
	return email;
}
int Student::GetStudentAge() {
	return age;
}
 int *Student::GetDaysToComplete() {
	return daysToComplete;
}
degree Student::GetDegreeType() {
	return degree();
}

void Student::SetStudentID(string &ID) {
	studentId = ID;
	
}
void Student::SetFirstName(string &FName) {
	firstName = FName;
	
}
void Student::SetLastName(string &LName) {
	lastName = LName;
	
}
void Student::SetStudentEmail(string &Email) {
	email = Email;
	
}
void Student::SetStudentAge(int &Age) {
	age = Age;
	
}

void Student::SetDaysToComplete( int course1,  int course2,  int course3) {
	Student::daysToComplete[0] = course1;
	Student::daysToComplete[1] = course2;
	Student::daysToComplete[2] = course3;
	
}
void Student::SetDegreeType(degree typeOfDegree) {
	degreeType = typeOfDegree;
}





void Student::print() {
	string degreeType;
	if (GetDegreeProgram() == NETWORK) {
		degreeType = "NETWORK";
	}
	if (GetDegreeProgram() == SOFTWARE) {
		degreeType = "SOFTWARE";
	}
	if (GetDegreeProgram() == SECURITY) {
		degreeType = "SECURITY";
	}
	cout << "Student ID: " << GetStudentID() << "\t";
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetStudentAge() << "\t";
	cout << "\tDays in course: {" << daysToComplete[0] << ", " << daysToComplete[1] << ", " << daysToComplete[2] << "}" << "\t";
	cout << "Degree Program: " << degreeType << endl;
	
}

degree Student::GetDegreeProgram() {
	return INVALID;
}
Student::~Student() {

}

// finish print function/ getdegreeprogram/ destructor