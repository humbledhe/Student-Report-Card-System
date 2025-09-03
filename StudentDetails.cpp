#include "StudentDetails.h"

StudentDetails::StudentDetails(std::string name, float gpa)
	: m_name(name), m_gpa(gpa) 
{
}

std::string StudentDetails::getName() const
{
	return m_name;
}

float StudentDetails::getGpa() const
{
	return m_gpa;
}
