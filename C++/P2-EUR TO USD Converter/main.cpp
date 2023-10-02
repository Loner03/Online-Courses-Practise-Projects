#include <iostream>
using namespace std;

int main() {

	const double usd_per_euro{ 1.05 };

	cout << "Welcome To EUR To USD Converter" << endl;
	cout << "_______________________________\n" << endl;

	cout << "Based On Market Rate(2023-10-02)" << endl;
	cout << "________________________________________________" << endl;
	cout << "***Currenly Valued A EUR is Eqaul To " << usd_per_euro << " USD***" << endl;
	cout << "------------------------------------------------\n" << endl;

	cout << "EUR: ";
	
	double euros(0.0);
	double dollars(0.0);

  cin >> euros;
	
	dollars = euros * usd_per_euro;

	cout << "\nUSD: " << dollars;

	cout << "\n\nThanks For Using Loner03 Services!" << endl;
	cout << "__________________________________" << endl;

	cout << endl;
return 0;
}
