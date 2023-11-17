#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void main_intro();
void print();
double add (vector <double> numbers);
double mean(vector <double> numbers);
double smallest(vector <double> numbers);
double largest(vector <double> numbers);

int main() {

	cout << fixed << setprecision(2) << endl;
	main_intro();

	do
	{
		print();

	} while (true);

	return 0;
}

void main_intro() {

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

}

void print() {


}

double add (vector <double> numbers) {

	for (double s : numbers) {

		double added_sum{};
		added_sum += s;
		return added_sum;
	}

}

double mean(vector<double> numbers)
{
	return 0.0;
}

double smallest(vector<double> numbers)
{
	return 0.0;
}

double largest(vector<double> numbers)
{
	return 0.0;
}
