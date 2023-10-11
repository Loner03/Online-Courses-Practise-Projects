#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

	cout << fixed << setprecision(2) << endl;
	char selection{};
	int count;
	int numbers;

	vector <int> integers{};

	do
	{
		cout << "\nWelcome To Loner03 Menu System" << endl;
		cout << "==============================" << endl;
		cout << endl;
		cout << "Current Avalable Menu's" << endl;
		cout << "-----------------------" << endl;
		cout << endl;
		cout << "1: Number Playing System" << endl;
		cout << "-A Menu System Where You Have Fun With A List Of Numbers, You Decide Yourself" << endl;
		cout << endl;
		cout << "More Coming Soon......." << endl;
		cout << endl;

		cout << "Enter The Menu NUmber To Start It: ";
		cin >> selection;

		if (selection == '1') {

			cout << "\nWelcome To The Number Menu" << endl;
			cout << "==========================" << endl;

			cout << "Before We Start Let's Make A Number List For You!" << endl;
			cout << "Its Simple, Just A Few Steps Ahead:-" << endl;
			cout << endl;

			cout << "How Many Number's Would You Like In The List: ";
			cin >> count;

			if (count > 0) {
				for (int i{}; i < count; ++i) {

					cout << "Number " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);

				}

			}
			else 
			{

				cout << "Invalid Output" << endl;
				for (int i{}; i < count; ++i) {

					cout << "Number " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);
				}
			}

			cout << "\nNow That Number List Is Ready Let Us Move On To The Menu:-" << endl;
			cout << endl;

			cout << "Number Menu" << endl;
			cout << "===========" << endl;
			cout << "P: Print All Number From The List" << endl;
			cout << "A: Add Number's From The List" << endl;
			cout << "S: Print Samllest Number From The List" << endl;
			cout << "M: Print Mean Of All Number From The List" << endl;
			cout << "L: Print Largest Number From The List" << endl;
			cout << "Q: Quit" << endl;

			cout << "\nPlease Select The Desired Option: ";
			cin >> selection;
			cout << endl;

			switch (selection) {

				case 'p':
			    case 'P':
				{
					cout << "Here Are All The Number From The List:-" << endl;
					for (auto allnumbers : integers)
						cout << allnumbers << endl;
					break;
				}
				case 'a':
				case 'A':
				{
					do
					{
						cout << "\nSub-Menu Option's" << endl;
						cout << "=================" << endl;
						cout << "1: Mean Of All Number's" << endl;
						cout << "2: Mean Of Certain Number's" << endl;
						cout << "3: Quit" << endl;
						
						cout << "\nPlease Select The Desired Option: ";
						cin >> selection;
						switch (selection)
						{
							
						case '1':
						{
							int sum{};
							cout << "\nMean Of All Number's: ";


							for (int m{}; m < integers.size(); ++m)
                                     sum += integers.at(m);

							cout << sum / (integers.size() + 1) << endl;

							

						}
						default:
						    cout << "\n" << endl;
						    
							


						}
			
				default:
					cout << "\nInvalid Output, Please Try Again!" << endl;
						

					} while (selection == 3);
				}
			}
				
				

					
		}
		else 
		{ 
			cout << "\n=================================" << endl;
			cout << "Invalid Output, Please Try Again!" << endl;
			cout << "=================================" << endl;
			cout << "\n*------------*------------*------------*------------*\n" << endl;
		}


	} while (selection != 'Q' && selection != 'q');


	cout << endl;
	return 0;
}
