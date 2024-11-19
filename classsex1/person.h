#pragma once
#include <string>
using namespace std;
class person
{
private:
	string id;
	string lastName;
	string firstName;
	string gender;
	string birthDate;

public:
	//constructor
	person(const string&id, const string& lastName, const string& firstName, const string& gender, const string& birthDate);

	string getId() const;
	string getLastName() const;
	string getFirstName() const;
	string getGender() const;
	string getBirthDate() const;
	
};

