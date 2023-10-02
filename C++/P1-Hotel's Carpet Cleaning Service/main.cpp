#include <iostream>
using namespace std;

int main() {

	const double cleaning_carpet_small_room{ 34.78 };
	const double cleaning_carpet_large_room{ 54.89 };
	const double tax{ 0.06 };
	const int valid_days{ 30 };

	cout << "Welcome To Hotel's Carpet Cleaning Service!" << endl;
	cout << "___________________________________________" << endl;

	cout << "\nHow many Large rooms would you like to be cleaned: ";
	int Large_Rooms{ 0 };
	cin >> Large_Rooms;

	cout << "\nHow many Small rooms would you like to be cleaned: ";
	int Small_Rooms{ 0 };
	cin >> Small_Rooms;

	cout << "\nEstimate For Carpet Cleaning Service\n";
	cout << "------------------------------------\n";
	cout << "Number of Large Rooms: " << Large_Rooms << endl;
	cout << "Number of Small Rooms: " << Small_Rooms << endl;
	cout << "Price per Large Room: $" << cleaning_carpet_large_room << endl;
	cout << "Price per Small Room: $" << cleaning_carpet_small_room << endl;
	cout << "Total Cleaning Cost: $" << (Large_Rooms * cleaning_carpet_large_room) + (Small_Rooms * cleaning_carpet_small_room) << endl;
	cout << "Total Tax: $" << (Large_Rooms * cleaning_carpet_large_room * tax) + (Small_Rooms * cleaning_carpet_small_room * tax) << endl;
	cout << "====================================\n";
	cout << "Current Total Estimate: $" << (Large_Rooms * cleaning_carpet_large_room) + (Small_Rooms * cleaning_carpet_small_room) + (Large_Rooms * cleaning_carpet_large_room * tax) + (Small_Rooms * cleaning_carpet_small_room * tax) << endl;
	cout << "This estimate is only valid for the next " << valid_days << " days" << endl;

	cout << "\nThanks For Using Loner03 Services!" << endl;
	cout << "__________________________________" << endl;


	cout << endl;
	return 0;

}
