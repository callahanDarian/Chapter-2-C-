#include <iostream>
#include <iomanip>
int main()
{
	double before, after;
	std::cout << "Input your employee's weekly pay \n >";
	std::cin >> before;
	after = before - ( (before / 100) * 32 );
	std::cout << "After taxes, your employee with make : \n $" << std::fixed << std::setprecision(2) << std::setfill('0') << after << std::endl;
	std::cout << std::endl;
	std::cout << "Next Employee\n";
	main();
}