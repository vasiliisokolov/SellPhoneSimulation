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
				
				break;
			case operation::call:
				
				break;
			case operation::sms:
				
				break;
			case operation::ex:

				return 0;

			}
		}


	}

	return 0;
}
