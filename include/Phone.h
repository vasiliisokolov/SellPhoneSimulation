#pragma once

class Phone
{
	std::vector<Contact> phoneBook;
	std::string find(std::string& buffer)
	{
		for (int i = 0; i < phoneBook.size(); i++)
		{
			if (buffer == phoneBook[i].getName())
			{
				return phoneBook[i].getNumber();
			}

			if (buffer == phoneBook[i].getNumber())
			{
				return phoneBook[i].getName();
			}
				
		}

		return "Error! Wrong number or name!";
	}

public:
	void addContact()
	{
		std::string name, number;
		Contact contact;
		std::cout << "Enter the thelephone number: ";
		std::cin >> number;
		contact.setNumber(number);
		std::cout << "Enter the name of the contact: ";
		std::cin >> name;
		contact.setName(name);
		phoneBook.push_back(contact);
	}

	void callContact()
	{
		std::string buffer;
		std::cout << "Enter contact's name or number: ";
		std::cin >> buffer;
		std::cout << "Call" << std::endl;
		if (buffer[0] == '+')
		{
			std::cout << find(buffer) << std::endl;
			std::cout << buffer << std::endl;
		}
		else
		{
			std::cout << buffer << std::endl;
			std::cout << find(buffer) << std::endl;
		}
	}

	void smsContact()
	{
		std::string buffer;
		std::cout << "Enter contact's name or number: ";
		std::cin >> buffer;
		std::cout << "Send to: " << std::endl;
		if (buffer[0] == '+')
		{
			std::cout << find(buffer) << std::endl;
			std::cout << buffer << std::endl;
		}
		else
		{
			std::cout << buffer << std::endl;
			std::cout << find(buffer) << std::endl;
		}
		std::cout << "Enter the message: " << std::endl;
		std::getline(std::cin, buffer);
	}
};