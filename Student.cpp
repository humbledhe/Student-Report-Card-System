#include "Student.h"

Student::Student()
{
}

void Student::menu()
{
	std::cout << "1. Add student\n";
	std::cout << "2. View student\n";
	std::cout << "3. View all students\n";
	std::cout << "4. Delete student\n";
	std::cout << "5. Exit\n\n";
}

std::vector<StudentDetails>& Student::getStudentDetails()
{
	return m_studentDetails;
}

void Student::addStudent(const StudentDetails& studentDetails)
{
	m_studentDetails.push_back(studentDetails);
}

void Student::deleteStudent(std::string name)
{
	for (auto it = m_studentDetails.begin(); it != m_studentDetails.end(); it++)
	{
		if (name == it->getName())
			it = m_studentDetails.erase(it);
	}
}

void Student::addFromFile(const std::string& file)
{
	std::fstream myFile;

	myFile.open(file, std::ios::in);

	if (myFile.is_open())
	{
		std::string name{};
		float gpa{};

		while (myFile.good())
		{
			myFile >> name >> gpa;
			addStudent(StudentDetails(name, gpa));
		}
		myFile.close();
	}
	else
		std::cerr << "File not found\n";
}

void Student::printStudents()
{
	for (auto& s : m_studentDetails)
	{
		std::cout << "Name: " << s.getName() << std::endl;
		std::cout << "GPA: " << s.getGpa() << std::endl;
	}
}

