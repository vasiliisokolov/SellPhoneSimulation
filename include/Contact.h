#pragma once

class Contact
{
	std::string name;
	std::string number;

public:
	void setName(std::string& newName)
	{
		name = newName;
	}
	
	void setNumber(std::string& newNumber)
	{
		number = newNumber;
	}
	
	std::string getName()
	{
		return name;
	}

	std::string getNumber()
	{
		return number;
	}
};