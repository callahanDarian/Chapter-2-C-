#include <iostream>

int main()
{
	double temp1, temp2, temp3;
	double cTemp1, cTemp2, cTemp3;

	std::cout << "What was the temperature at 8:00am in Fahrenheit? \n > ";
	std::cin >> temp1;
	std::cout << "What was the temperature at 12:00pm in Fahrenheit? \n > ";
	std::cin >> temp2;

	if (temp1 - temp2 <= -10)
	{
		std::cout << "ERROR - U FUKD UP" << std::endl;
		system("pause");
		exit(0);
	}

	std::cout << "What was the temperature at 5:00pm in Fahrenheit? \n > ";
	std::cin >> temp3;

	cTemp1 = (temp1 - 32) * 0.5556;
	cTemp2 = (temp2 - 32) * 0.5556;
	cTemp3 = (temp3 - 32) * 0.5556;

	std::cout << std::endl;
	std::cout << "F : " << temp1 << "    C : " << cTemp1 << std::endl;
	std::cout << "F : " << temp2 << "    C : " << cTemp2 << std::endl;
	std::cout << "F : " << temp3 << "    C : " << cTemp3 << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	system("pause");
	return(0);
}