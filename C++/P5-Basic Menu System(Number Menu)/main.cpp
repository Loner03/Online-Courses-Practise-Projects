#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{

	cout << fixed << setprecision(2) << endl;
	int count;
	int numbers;
	char selection;

	vector <int> integers{};

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

	cout << "Since Only 1 Menu Is Avalable Right Now, The Serice Will Default To That!" << endl;
	cout << "Thanks" << endl;
	

	do {

		cout << "\nWelcome To The Number Menu" << endl;
		cout << "==========================" << endl;

		cout << "Before We Start Let's Make A Number List For You!" << endl;
		cout << "Its Simple, Just A Few Steps Ahead:-" << endl;
		cout << endl;

		cout << "How Many Number's Would You Like In The List: ";
		cin >> count;

		for (int i{}; i < count; ++i) {

			cout << "\nNumber " << i + 1 << ": ";
			cin >> numbers;
			integers.push_back(numbers);

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

		case 'P':
		case 'p':
		{

			cout << "Sub Menu" << endl;
			cout << "========" << endl;
			cout << "\nC:Re-Initilize The Number List" << endl;
			cout << "\nN:Continue With The Old One" << endl;

			cout << "\nPlease Select The Desired Option: ";
			cin >> selection;
			cout << endl;


			if (selection == 'C' || selection == 'c')
			{
				integers.clear();
				cout << "\nHow Many Number's Would You Like In The List: ";
				cin >> count;

				for (int i{}; i < count; ++i) {

					cout << "\nNumber " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);

				}

				cout << "\nHere Are All The Number From The List:-" << endl;
				for (auto allnumbers : integers)
					cout <<  allnumbers << endl;



			}
			else if (selection == 'N' || selection == 'n')

			{

				cout << "\nHere Are All The Number From The List:-" << endl;
				for (auto allnumbers : integers)
					cout << allnumbers << endl;

			}

			else
				cout << "Wrong Input!" << endl;

		}
		break;

		case 'A':
		case 'a':
		{

			cout << "Sub Menu" << endl;
			cout << "========" << endl;
			cout << "\nC:Re-Initilize The Number List" << endl;
			cout << "\nN:Continue With The Old One" << endl;

			cout << "\nPlease Select The Desired Option: ";
			cin >> selection;
			cout << endl;


			if (selection == 'C' || selection == 'c')
			{
				integers.clear();
				cout << "\nHow Many Number's Would You Like In The List: ";
				cin >> count;

				for (int i{}; i < count; ++i) {

					cout << "\nNumber " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);

				}

				
				int sum{};
				for (auto allnumbers : integers)
					sum += allnumbers;
				cout << "\nSum Of All Numbers: " << sum << endl;



			}
			else if (selection == 'N' || selection == 'n')

			{

				
				int sum{};
				for (auto allnumbers : integers)
					sum += allnumbers;
				cout << "\nSum Of All Numbers: " << sum << endl;

			}

			else
				cout << "Wrong Input!" << endl;

		}
		break;

		case 'S':
		case 's':
		{

			cout << "Sub Menu" << endl;
			cout << "========" << endl;
			cout << "\nC:Re-Initilize The Number List" << endl;
			cout << "\nN:Continue With The Old One" << endl;

			cout << "\nPlease Select The Desired Option: ";
			cin >> selection;
			cout << endl;


			if (selection == 'C' || selection == 'c')
			{
				integers.clear();
				cout << "\nHow Many Number's Would You Like In The List: ";
				cin >> count;

				for (int i{}; i < count; ++i) {

					cout << "\nNumber " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);

				}

				
				
				int smallest(integers.at(0));
				for (auto small : integers)
					if ( small < smallest)
						smallest = small;

				cout << "\nHere Is The Smallest Number From The List: " << smallest << endl;
				


			}
			else if (selection == 'N' || selection == 'n')

			{

				int smallest(integers.at(0));
				for (auto small : integers)
					if (small < smallest)
						smallest = small;

				cout << "Here Is The Smallest Number From The List: " << smallest << endl;

			}

			else
				cout << "Wrong Input!" << endl;

		}
		break;

		case 'L':
		case 'l':
		{

			cout << "Sub Menu" << endl;
			cout << "========" << endl;
			cout << "\nC:Re-Initilize The Number List" << endl;
			cout << "\nN:Continue With The Old One" << endl;

			cout << "\nPlease Select The Desired Option: ";
			cin >> selection;
			cout << endl;


			if (selection == 'C' || selection == 'c')
			{
				integers.clear();
				cout << "\nHow Many Number's Would You Like In The List: ";
				cin >> count;

				for (int i{}; i < count; ++i) {

					cout << "\nNumber " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);

				}



				int smallest(integers.at(0));
				for (auto small : integers)
					if (small > smallest)
						smallest = small;

				cout << "Here Is The Largest Number From The List: " << smallest << endl;



			}
			else if (selection == 'N' || selection == 'n')

			{

				int smallest(integers.at(0));
				for (auto small : integers)
					if (small > smallest)
						smallest = small;

				cout << "Here Is The Largest Number From The List: " << smallest << endl;

			}

			else
				cout << "Wrong Input!" << endl;

		}
		break;

		case 'M':
		case 'm':
		{

			cout << "Sub Menu" << endl;
			cout << "========" << endl;
			cout << "\nC:Re-Initilize The Number List" << endl;
			cout << "\nN:Continue With The Old One" << endl;

			cout << "\nPlease Select The Desired Option: ";
			cin >> selection;
			cout << endl;


			if (selection == 'C' || selection == 'c')
			{
				integers.clear();
				cout << "\nHow Many Number's Would You Like In The List: ";
				cin >> count;

				for (int i{}; i < count; ++i) {

					cout << "\nNumber " << i + 1 << ": ";
					cin >> numbers;
					integers.push_back(numbers);

				}


				int meansum{};
				for (auto num : integers)
					meansum += num;

				cout << "Mean Of The Number Is: " << meansum / (integers.size() + 1) << endl;




			}
			else if (selection == 'N' || selection == 'n')

			{

				int meansum{};
				for (auto num : integers)
					meansum += num;

				cout << "Mean Of The Number Is: " << meansum / (integers.size() + 1) << endl;
			}

			else
				cout << "Wrong Input!" << endl;

		}
		break;



		}
	} while (selection != 'q' && selection != 'Q');
		cout << "\nGoodBye!" << endl;
	

		cout << endl;
		return 0;
}