#include "person.h"
#include <string>

person::person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate)
{
	this->id = id;
	this->lastName = lastName;
	this->firstName = firstName;
	this->gender = gender;
	this->birthDate = birthDate;
}

string person::getId() const
{
	return id;
}

string person::getLastName() const
{
	return lastName;
}

string person::getFirstName() const
{
	return firstName;
}
string person::getGender() const
{
	return gender;
}
string person::getBirthDate() const
{
	return birthDate;
}