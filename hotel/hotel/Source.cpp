#include <iostream>
#include <iomanip>

/*
The manager of the Lake View Hotel wants a program that calculates and displays a guest's total bill.
Each guest pays a room charge that is based on a per-night rate.
For example, if the per-night rate is $100 and the guest stays two nights.  The room charge is $200.
Customers also may incur a one-time room service charge of $35 dollars and a one-time telephone charge of $0.25 per minute. 
*/

int main()
{
	double nightsStayed;
	int roomServiceChoice;
	int roomService;
	double phoneMinutes;
	double bill;

	using namespace std;

	cout << "Welcome to the Lake View Hotel.\n\n";
	cout << "How many nights have you stayed?\n > ";
	cin >> nightsStayed;
	cout << "Have you used room service?\n 1 - Yes     2 - No\n > ";
	cin >> roomServiceChoice;

	if (roomServiceChoice == 1)
	{
		roomService = 1;
	}
	else if (roomServiceChoice == 2)
	{
		roomService = 2;
	}
	else
	{
		cout << "Unavailable input; assuming room service was used." << std::endl;
		roomService = 1;
	}

	cout << "How many minutes have you spent using the phone?\n > ";
	cin >> phoneMinutes;

	bill = (nightsStayed * 100) + (roomService * 35) + (phoneMinutes * 0.25);

	cout << "\nThank you for staying at Lake View Hotel. \nYour bill is $" << fixed << setprecision(2) << std::setfill('0') << bill << std::endl;

	cout << endl;
	system("Pause");
	return(0);
}