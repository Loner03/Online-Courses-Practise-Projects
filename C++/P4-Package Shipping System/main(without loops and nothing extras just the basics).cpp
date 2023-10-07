#include <iostream>
using namespace std;

int main() {

	cout << "Welcome, To The Loner03 Package Shipping System!" << endl;
	cout << "------------------------------------------------" << endl;

	string decesion;

	cout << "\nWould You Like To Know More About Us(Yes/No): ";
	cin >> decesion;

	if (decesion == "Yes" || decesion == "YES" || decesion == "yes" || decesion == "y" || decesion == "Y") {

		cout << "\n===================================================================================" << endl;
		cout << "That's Amazing!" << endl;
		cout << "Just Before We Start The Following Are The Current Cost And Shipping Limits: -" << endl;
		cout << "\n*Base Cost = $2.50" << endl;
		cout << "\n*Lenth, Width and Height Indidually Should Not Exceed 10 Inches Each." << endl;
		cout << "\n*A 10% Surcharge Will Be Automatically Applied To The Base Anmount If The Package " << endl;
		cout << "Volume Is More Than 100 Cubic Inches." << endl;
		cout << "\n*A 25% Surcharge Will Be Automatically Applied To The Base Anmount If The Package " << endl;
		cout << "Volume Is More Than 500 Cubic Inches." << endl;
		cout << "===================================================================================" << endl;

		cout << "\nNow, That We Have You Up To Date. Let's Start With The Dimensions OF Your Package." << endl;
		int lenth{}, width{}, height{};
		cout << "Please Input Your Dimensions Of Your Package In The Following Order Lenth-Width-Height In Inches Unit(Example: 10 10 10): ";
		cin >> lenth >> width >> height;

		if ((lenth > 0 && lenth <=10) && (width > 0 && width <= 10) && (height > 0 && height <= 10)) {

			cout << "\nGreat, It Seems Something That We Can Work With!" << endl;
			cout << "\nJust Sit Back And Relax Until We Do The Maths......" << endl;
			cout << "And We Are Done, Here Is The Following Details and Calculated Cost For Your Package:-" << endl;

			cout << "\n===============================\n" << endl;
			cout << "Shipping Cost And Details" << endl;
			cout << "-------------------------" << endl;
			cout << "\n* Lenth -> " << lenth << " Inches" << endl;
			cout << "\n* Width -> " << width << " Inches" << endl;
			cout << "\n* Height -> " << height << " Inches" << endl;

			int volume{ lenth * width * height };

			cout << "\n* Volume -> " << volume << " Cubic Inches" << endl;

			if (volume <= 100) {

				double cost{ volume * 2.5 };
				cout << "\n* Cost(PreTax) -> $ " << cost << endl;
			}
			
			else if (volume > 100 && volume <= 500)
			{
				double cost{ volume * 2.5 };
				double surchangerdCost{cost}; 
				surchangerdCost += cost*0.10;
				cout << "\n* Cost(PreTax) -> $ " << surchangerdCost << endl;
			}

			else
			{
				double cost{ volume * 2.5 };
				double surchangerdCost{cost}; 
				surchangerdCost += cost * 0.25;
				cout << "\n* Cost(PreTax) -> $ " << surchangerdCost << endl;
			}

			cout << "\n* Validity -> OCT 15, 2023" << endl;
			cout << "\n===============================\n" << endl;

			cout << "Thanks For Using Loner03 Package Shipping System!" << endl;
			cout << "-------------------------------------------------" << endl;

		}

		else {
			cout << "\nSorry Either it Exceeds Our Shipping Capacity or Values Are Not Valid." << endl;
			cout << "Please Try Again In Future." << endl;

			cout << "\nThanks For Using Loner03 Package Shipping System!" << endl;
			cout << "-------------------------------------------------" << endl;
		}


	}
	else if (decesion == "No" || decesion == "NO" || decesion == "no" || decesion == "n" || decesion == "N") {
		cout << "\nNo Worries But Make Sure To Try It Later." << endl;
		cout << "We Will Always Be Here To Help You!" << endl;
	}
	else
	{
		cout << "\nSorry, '" << decesion << "' Is A Invalid Respose." << endl;
		cout << "Please Input A Valid Response To Continue." << endl;

		cout << "\n============================================================" << endl;
		cout << "\nIn Case It Is Still Not Working, Try Following These Steps:-" << endl;
		cout << "\n*Try Being Case Sensitive(Yes/yes/YES/Y/y) or (No/no/NO/N/n)" << endl;
		cout << "\n*Email Support At <itsjustaporxyemail@fakeemail.com>" << endl;
		cout << "\n============================================================" << endl;

		cout << "\nThanks For Using Loner03 Package Shipping System!" << endl;
		cout << "-------------------------------------------------" << endl;

	}

	cout << endl;
	return 0;
}
