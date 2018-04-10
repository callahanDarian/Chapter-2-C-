#include <iostream>


double addTotal;
double total;

int main()
{
	std::cout << "Sup Sharon; how much moneys would you like to dump into your pile?\n> ";
	std::cin >> addTotal;
	total = total + addTotal;
	std::cout << "Your current total is " << total << std::endl;
	main();
}