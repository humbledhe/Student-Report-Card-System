#pragma once

#include "StudentDetails.h"

#include <iostream>
#include <vector>
#include <fstream>

class Student
{
private:
	std::vector<StudentDetails> m_studentDetails;

public:
	Student();

	void menu();

	std::vector<StudentDetails>& getStudentDetails();

	void addStudent(const StudentDetails& studentDetails);
	
	void deleteStudent(std::string name);

	void addFromFile(const std::string& file);

	void printStudents();
};

