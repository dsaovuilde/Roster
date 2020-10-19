#pragma once
#include "Roster.h"
#include <vector>
#include <sstream>





void Roster::add(string StudentID, string firstName, string lastName, string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degree degreeProgram) {
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] == nullptr) {
			switch (degreeProgram) {
			case NETWORK:
				classRosterArray[i] = new NetworkStudent(StudentID, firstName, lastName, emailAddress, Age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
				break;
			case SOFTWARE:
				classRosterArray[i] = new SoftwareStudent(StudentID, firstName, lastName, emailAddress, Age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
				break;
			case SECURITY:
				classRosterArray[i] = new SecurityStudent(StudentID, firstName, lastName, emailAddress, Age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
				
			}
			break;
		}
		
	}
}
	

	

void Roster::remove(string StudentID){
	cout << "Removing Student \"" << StudentID << "\" from the roster:" << endl;
	bool found = false;
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr && classRosterArray[i]->GetStudentID() == StudentID) {
		found = true;
		classRosterArray[i] = nullptr;
		cout << " Success!" << endl << endl;
		} 
		

	}
		if (found == false) {
			cout << "Error: Student with ID \"" << StudentID << "\" was not found";

		}
	}
		
		void Roster::printAll() {
			cout << "Student Roster:" << endl << endl;
			for (int i = 0; i < 5; ++i) {
				if (classRosterArray[i] != nullptr) {
					classRosterArray[i]->print();
				}
			}
			cout << endl;
		}
		void Roster::printByDegreeProgram(degree degreeProgram) {
			cout << "Students in SOFTWARE program: " << endl << endl;
			for (int i = 0; i < 5; ++i) {
				if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
					classRosterArray[i]->print();
				}
			}
			cout << endl << endl;
		}
		
		void Roster::printDaysInCourse(string studentID) {
			for (int i = 0; i < 5; ++i) {
				double Avg = 0.0;
				int* daysToComplete = 0;
				daysToComplete = { classRosterArray[i]->GetDaysToComplete() };
					for (int j = 0; j < 3; ++j) {
						Avg = Avg + daysToComplete[j];
					}
					cout << "Average number of days for student: " << classRosterArray[i]->GetStudentID() << " to complete 3 courses: " << (Avg / 3) << endl;
									
			}
			cout << endl << endl;
		}
		void Roster::printInvalidEmails() {
			for (int i = 0; i < 5; ++i) {
				string emails = classRosterArray[i]->GetStudentEmail();
				size_t found1 = emails.find('@');
				size_t found2 = emails.find('.');
				size_t found3 = emails.find(' ');
				size_t found4 = emails.find('1');
				if (found1 == string::npos || found2 == string::npos || found3 != string::npos || found4 != string::npos) {
					cout << "Invalid Email: " << emails << endl;
				}
			}
			cout << endl << endl;
		}

		Roster::~Roster() {

}
		int main()

		{
			cout << "C867 Scripting and Programming Applications" << endl;
			cout << "C++" << endl;
			cout << "000972200" << endl;
			cout << "David Soule" << endl << endl;

			const string studentData[] =
			{
				"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
				"A2,Suzan,Erikson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
				"A3,Jack,Napoli,The_lawyer99@yahoo.com,19,20,40,33,SOFTWARE",
				"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
				"A5,David,Soule,dwsoule@hotmail.com.com,24,30,30,30,SOFTWARE"
			};
			Roster classRoster;
			degree Degree;

			
			for (int i = 0; i < 5; ++i) {
				stringstream ss(studentData[i]);
				vector<string> vect;

				while (ss.good())
				{
					string substr;
					getline(ss, substr, ',');
					vect.push_back(substr);
				}
				if (vect.at(8) == "NETWORK") {
					Degree = NETWORK;
				}
				if (vect.at(8) == "SOFTWARE") {
					Degree = SOFTWARE;
				}
				if (vect.at(8) == "SECURITY") {
					Degree = SECURITY;
				}
				

				classRoster.add(vect.at(0), vect.at(1), vect.at(2), vect.at(3), stoi(vect.at(4)), stoi(vect.at(5)),
					stoi(vect.at(6)), stoi(vect.at(7)), Degree);
				
				
				
			}
			string studentID;
			classRoster.printAll();
			classRoster.printInvalidEmails();
			classRoster.printDaysInCourse(studentID);
			classRoster.printByDegreeProgram(SOFTWARE);
			classRoster.remove("A3");
			classRoster.remove("A3");
			
			classRoster.~Roster();

			return 0;
		}
