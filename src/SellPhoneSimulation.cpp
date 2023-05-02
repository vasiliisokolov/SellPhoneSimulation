// SellPhoneSimulation.cpp: определяет точку входа для приложения.
//

#include "SellPhoneSimulation.h"

enum operation
{
	add = 0,
	call = 1,
	sms = 2,
	ex = 3
};
int main()
{
	std::cout << "YouPhone." << std::endl;
	Phone phone;
	int op;
	while (true)
	{
		std::cout << "Choose the operation: ";
		std::cin >> op;
		if (op > 3 || op < 0)
		{
			std::cerr << "Error! Wrong operation! Try again!" << std::endl;
		}
		else
		{
			switch (op)
			{
			case operation::add:
				phone.addContact();
				break;
			case operation::call:
				phone.callContact();
				break;
			case operation::sms:
				phone.smsContact();
				break;
			case operation::ex:

				return 0;

			}
		}
	}
}