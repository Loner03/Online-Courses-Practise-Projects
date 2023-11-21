#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//Function Prototype's Start Here

void main_menu_list();
void numberlist_mnakr_intro();
void array_size(size_t&);
void numberarray_maker(vector<int>& v, int n);
void printVector(const vector<int>& vec);
void option_choser(char&);
void reinitilize_number_list_intro();
void print_all_numbers(vector <int>& v);
void sub_number_menu();
int add_all_numbers(vector <int>& v);
void ending_sign_line();
double mean_calculater(vector <int> v);
int largest_number(vector <int> v);
int smallest_number(vector <int> v);

//Function Prototype's End's Here
//Main Function Start's Here

int main() {

	size_t count{};
	double numbers{};
	char selection{};
	int sum{};

	vector <int> integers{};

	main_menu_list();

	cout << fixed << setprecision(2) << endl;

	do
	{
		numberlist_mnakr_intro();
		array_size(count);
		if (count == 0) {
			break;
		}
		numberarray_maker(integers, count);
		printVector(integers);
		option_choser(selection);

		switch (selection) {

		case 'P':
		case 'p':
		{
			sub_number_menu();
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				reinitilize_number_list_intro();
				numberlist_mnakr_intro();
				array_size(count);
				if (count == 0) {
					break;
				}
				numberarray_maker(integers, count);
				print_all_numbers(integers);
				ending_sign_line();
			}
			else if (selection == 'N' || selection == 'n')
			{
				print_all_numbers(integers);
				ending_sign_line();
			}
			else {
				cout << "Wrong Input!" << endl;
				ending_sign_line();
			}

		}
		break;

		case 'A':
		case 'a': {

			sub_number_menu();
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				reinitilize_number_list_intro();
				numberlist_mnakr_intro();
				array_size(count);
				if (count == 0) {
					break;
				}
				numberarray_maker(integers, count);
				print_all_numbers(integers);
				cout << "Sum: " << add_all_numbers(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else if (selection == 'N' || selection == 'n') {
				cout << "Sum: " << add_all_numbers(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else {
				cout << "Wrong Input!" << endl;
				ending_sign_line();
			}
		}
				break;

		case 'M' :
		case 'm' :
		{
			sub_number_menu();
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				reinitilize_number_list_intro();
				numberlist_mnakr_intro();
				array_size(count);
				if (count == 0) {
					break;
				}
				numberarray_maker(integers, count);
				print_all_numbers(integers);
				cout << "Mean: " << mean_calculater(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else if (selection == 'N' || selection == 'n') {
				cout << "Mean: " << mean_calculater(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else {
				cout << "Wrong Input!" << endl;
				ending_sign_line();
			}
		}
		break;

		case 'S':
		case 's':
		{
			sub_number_menu();
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				reinitilize_number_list_intro();
				numberlist_mnakr_intro();
				array_size(count);
				if (count == 0) {
					break;
				}
				numberarray_maker(integers, count);
				print_all_numbers(integers);
				cout << "Smallest Number: " << smallest_number(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else if (selection == 'N' || selection == 'n') {
				cout << "Smallest Number: " << smallest_number(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else {
				cout << "Wrong Input!" << endl;
				ending_sign_line();
			}
		}
		break;

		case 'L':
		case 'l':
		{
			sub_number_menu();
			option_choser(selection);

			if (selection == 'C' || selection == 'c') {

				reinitilize_number_list_intro();
				numberlist_mnakr_intro();
				array_size(count);
				if (count == 0) {
					break;
				}
				numberarray_maker(integers, count);
				print_all_numbers(integers);
				cout << "Largest Number: " << largest_number(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else if (selection == 'N' || selection == 'n') {
				cout << "Largest Number: " << largest_number(integers) << endl;
				ending_sign_line();
				cout << endl;
			}
			else {
				cout << "Wrong Input!" << endl;
				ending_sign_line();
			}
		}
		break;

		case 'q' :
		case 'Q': 
		{//leaving it empty to skip everything and just exit loop
		}

		default : {
			cout << "Wrong Input!" << endl;
			ending_sign_line();
		}
				break;
		}

	} while (selection != 'q' && selection != 'Q');
	{
		cout << "\nGoodBye!" << endl;
		ending_sign_line();
	}

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

	cout << "How Many Number's Would You Like In The List(0 To Quit): ";
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

void reinitilize_number_list_intro()
{
	cout << "Let's Go Ahead With Making It Again Then, It's Just A Few Simnple Steps Ahead." << endl;
}

void print_all_numbers(vector <int>& v) {

	cout << "\nHere Is Your Number List: ";

	for (int c : v) {
		cout << c << " ";

	}

	cout << endl;
	cout << endl;
}

void sub_number_menu() {

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

void ending_sign_line() {

	cout << "\n**************END**************\n" << endl;
}

double mean_calculater(vector <int> v) {

	int sum{};

	for (auto c : v) {

		sum += c;
	}

	//using this for mean as it will only chnage in the fuction
	sum = sum / v.size();

	return sum;

}

int largest_number(vector <int> v) {

	//using sum variable to find largest number as it will only chnage in the function itself
	int sum{};

	sum = v.at(0);
	for (auto c : v)
	{
		if (sum < c)
		{
			sum = c;
		}

	}
		
	return sum;
}

int smallest_number(vector <int> v) {

	//using sum variable to find smallest number as it will only chnage in the function itself
	int sum{};

	sum = v.at(0);
	for (auto c : v)
	{
		if (sum > c)
		{
			sum = c;
		}

	}

	return sum;
}

//Fucntion Defination's Ends Here