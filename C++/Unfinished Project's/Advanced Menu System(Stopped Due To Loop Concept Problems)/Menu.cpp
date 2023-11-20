#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//Function Prototype's Start Here

void main_menu_list();
void  numberlist_mnakr_intro();
void array_size(size_t&);
void numberarray_maker(vector<int>& v, int n);
void printVector(const vector<int>& vec);
void option_choser(char&);

void print_all_numbers(vector <int>& v);
void sub_number_menu(char a);
int add_all_numbers(vector <int>& v);

//Function Prototype's End's Here
//Main Function Start's Here

int main() {

	size_t count{};
	double numbers{};
	char selection{};
	int sum;

	vector <int> integers{};

	main_menu_list();

	cout << fixed << setprecision(2) << endl;

	do
	{
		numberlist_mnakr_intro();
		array_size(count);
		numberarray_maker(integers, count);
		printVector(integers);
		option_choser(selection);

		switch (selection) {

		case 'P':
		case 'p':
		{
			sub_number_menu(selection);
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				numberlist_mnakr_intro();
				array_size(count);
				numberarray_maker(integers, count);
				print_all_numbers(integers);
			}
			else if (selection == 'N' || selection == 'n')
				print_all_numbers(integers);
			else
				cout << "Wrong Input!" << endl;
			
		}
		break;

		case 'A':
		case 'a': {

			sub_number_menu(selection);
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				numberlist_mnakr_intro();
				array_size(count);
				numberarray_maker(integers, count);
				print_all_numbers(integers);
				cout << "Sum: " << add_all_numbers(integers) << endl;
				cout << endl;
			}
			else if (selection == 'N' || selection == 'n') {
				cout << "Sum: " << add_all_numbers(integers) << endl;
				cout << endl;
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

//Main Function End's Here
//Function Defination's Start From Next Line

void main_menu_list() {

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

	cout << "\nWelcome To The Number Menu" << endl;
	cout << "==========================" << endl;

	cout << "Before We Start Let's Make A Number List For You!" << endl;
	cout << "Its Simple, Just A Few Steps Ahead:-" << endl;
	cout << endl;

}

void numberlist_mnakr_intro() {

	cout << "How Many Number's Would You Like In The List: ";
}

void array_size(size_t& n) {

	cin >> n;

}

void numberarray_maker(vector<int>& integers, int count) {

	integers.clear();
	int numbers;

	for (int i = 0; i < count; ++i) {
		cout << "\nNumber " << i + 1 << ": ";

		cin >> numbers;
		integers.push_back(numbers);
	}
}

void printVector(const std::vector<int>& vec) {

	cout << "\nCongratulation's, Your Number List Is Ready: ";

	for (int value : vec) {
		cout << value << " ";
	}

	std::cout << std::endl;
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

}

void option_choser(char& a) {

	cout << "\nPlease Select The Desired Option: ";
	cin >> a;
	cout << endl;

}

void print_all_numbers(vector <int>& v) {

	cout << "\nHere Is Your Number List: ";

	for (int c : v) {
		cout << c << " ";

	}

	cout << endl;
	cout << endl;
}

void sub_number_menu(char selection) {

	cout << "Sub Menu" << endl;
	cout << "========" << endl;
	cout << "\nC:Re-Initilize The Number List" << endl;
	cout << "\nN:Continue With The Old One" << endl;

}

int add_all_numbers(vector <int>& v) {

	int sum{};

	
	for (int c : v) {
		sum += c;

	}

	return (sum);

}


//Fucntion Defination's Ends Here