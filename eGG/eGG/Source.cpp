#include <iostream>

/*
Create a program that asks the user how many eggs they would like. 
The output should tell the user how many dozen eggs there are and how many eggs were remaining.
The output should also contain a price per dozen eggs at $2.00, with each remaining egg costing $0.25.

Enrichment: If the amount of eggs is more than 10 dozen output for the price of the eggs should be $0.50 less per dozen. 
Only show the discounted price for the output not the original price and discounted price.
*/

int main()
{
	int selectedEggs;
	int dozenEggs;
	int singleEggs;

	double dozenPrice;
	double singlePrice;
	double totalPrice;

	std::cout << "How many eggs would you like to purchase?\n\n";
	std::cout << "The price of a dozen eggs is $2.00 \nThe price of individual eggs is $0.25 each.\n\n";
	std::cout << "If you purchase over 10 dozen eggs, the price of each dozen is reduced by $0.50.\n > ";
	std::cin >> selectedEggs; // Flavor text + inform the user of the math.

	// Sort selected eggs into dozen and individuals.
	dozenEggs = selectedEggs / 12;
	singleEggs = selectedEggs % 12;

	// Check if purchased eggs is over 10 dozen.
	if (selectedEggs > 120)
	{
			dozenPrice = dozenEggs * 1.5; // Set price for dozen eggs if total dozen is greater than 10.     ( discount )
	}
	else
	{
		dozenPrice = dozenEggs * 2; // Set price for dozen eggs if total dozen is less than 10.     ( without discount )
	}
	
	singlePrice = singleEggs * 0.25; // Set price for individual eggs.

	totalPrice = singlePrice + dozenPrice; // Set the total price; price of dozen eggs and price of individual eggs together.

	std::cout << "You have purchased " << dozenEggs << " dozen, and " << singleEggs << " individual. \nThe total for this is $" << totalPrice << ". \n" << std::endl;
	// Purchase statement; favor text + display amount of dozen eggs + individual eggs, then display the price of the two together.


	std::cout << std::endl;
	system("Pause");
	return 0;
}