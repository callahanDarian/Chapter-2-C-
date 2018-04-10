#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	int bagels, donuts, cups;
	double price;

	cout << "How many bagels is the customer ordering? \n > ";
	cin >> bagels;
	cout << "How many donuts is the customer ordering? \n > ";
	cin >> donuts;
	cout << "How many cups of coffee is the customer ordering? \n > ";
	cin >> cups;

	price = (bagels*0.99) + (donuts*0.75) + (cups*1.20);

	cout << "Charge the customer for $" << std::fixed << std::setprecision(2) << std::setfill('0') << price << std::endl;
	cout << endl;
	cout << "Next Customer \n" << endl;

	main();
}