#include <iostream>

int main()
{
	double hoursWorked;
	double hourlyPay;
	double netPay;

	std::cout << "Please enter your hourly pay \n > ";
	std::cin >> hourlyPay;
	std::cout << "Please enter hours worked \n >";
	std::cin >> hoursWorked;
	netPay = hourlyPay * hoursWorked;
	std::cout << std::endl;
	std::cout << "Net pay is " << netPay << std::endl;

	std::cout << std::endl;
	system("Pause");
	return 0;
}