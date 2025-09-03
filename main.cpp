#include "Student.h"

#include <iostream>
#include <limits>

int main()
{
	Student student;

	int option{};

	do
	{
		std::cout << "Welcome to the Student Board\n";

		student.menu();
		std::cin >> option;

		std::string name{};
		float gpa{};

		switch (option)
		{
		case 1: // Add student
			system("cls");

			std::cout << "Enter student name: ";
			std::cin >> name;

			while (true)
			{
				std::cout << "Enter gpa: ";
				std::cin >> gpa;

				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					system("cls");
					std::cout << "Invalid input\n";
				}
				else break;
			}

			if (gpa > 5.0)
			{
				system("cls");
				std::cout << "Invalid gpa. Cannot be greater than 5.0\n\n";
			}
			else
			{
				student.addStudent(StudentDetails(name, gpa));
				system("cls");
				std::cout << "Successful\n\n";
			}
			break;

		case 3: // View all students
			system("cls");
			student.printStudents();
			break;

		case 4: // Delete student
			system("cls");

			std::cout << "Student name: ";
			std::cin >> name;

			student.deleteStudent(name);
			break;
		}

	} while (option != 5);

	return 0;
} 