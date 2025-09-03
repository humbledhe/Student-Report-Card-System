#pragma once

#include <iostream>

class StudentDetails
{
private:
	std::string m_name;
	float m_gpa;

public:
	StudentDetails(std::string name, float gpa);

	std::string getName() const;
	
	float getGpa() const;
};

