//============================================================================
// Name        : Generator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Generator.h"

int main()
{

	int value = 0;
	while (value != 2)
	{
		std::cout << "Enter: "
				"\n 1 - to create a list of unique random numbers"
				"\n 2 - to exit the program " << std::endl;
		std::cin >> value;

		if (value == 1)
		{
			std::cout << "enter the number of elements" << std::endl;
			int number;
			std::cin >> number;

			if (number != LONG_MAX && number != LONG_MIN)
			{

				Generator<std::list> generator(number);
				while (value != 4)
				{
					std::cout << "Enter: "
							"\n 1 - to count the unique numbers in the list"
							"\n 2 - to delete the number is  less than a given"
							"\n 3 - to clean and create a new list "
							"\n 4 - exit the program" << std::endl;
					std::cin >> value;

					switch (value)
					{
						case 1:
							std::cout << "Число уникальных элементов " << std::endl;
							std::cout << generator.CountUniqueNumbers() << std::endl;
							break;
						case 2:
							std::cout << "enter the number " << std::endl;
							int number;
							std::cin >> number;
							if (number != LONG_MAX && number != LONG_MIN)
							{
								generator.DeleteNumbers(number);
							}
							else
							{
								std::cout << "the number was entered incorrectly" << std::endl;
								break;
							}
							break;
						case 3:
							generator.CleanAndCreate();
							break;

					}

				}
			}
			else
			{
				std::cout << "the number was entered incorrectly" << std::endl;
				continue;
			}
		}

	}

	return 0;
}
