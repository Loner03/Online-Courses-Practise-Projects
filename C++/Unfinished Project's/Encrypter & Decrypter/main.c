#include <iostream>
#include <string>

using namespace std;

int main() {

	string pre_phrase{};
	string post_phrase{};
	string decrypted_phrase{};


	cout << "Welcome, To The Loner03 Encrytion System!" << endl;
	cout << "-----------------------------------------" << endl;

	char dec{};

	do {

		cout << "Would Your Like To Encrpyt Or Decrypt(E/D) Or Or Press (E) to Exit: ";
		cin >> dec;

		cout << "\nWould You Like Tou Use Your Own Encrytion Key(Y/N) ";
		cin >> dec;

		if (dec == 'Y' || dec == 'y')
		{

			string characters{};
			string key{};

			cout << "\nKey Construction Rules: " << endl;
			cout << "-----------------------\n";
			cout << "1: Make Sure There Are No Repeated Charcters In The Key\n2: Make Sure Both The Key And Solution Has Same Number Of Characters" << endl;

			int number{};
			char original{};
			char rep_original{};

			cout << "\nHow Many Characters Are Present In Your Key: ";
			cin >> number;

			for (size_t i{}; i < number; ++i) {

				cout << "\nEnter Your OriginaL Character: ";
				cin >> original;
				cout << "Enter It's Replacement: ";
				cin >> rep_original;

				characters += original;
				key += rep_original;

				cout << endl;

				cout << original << " Will Be Replaced By " << rep_original << " After Encrytion." << endl;

				cout << endl;


			}

			cout << "\nFollowing Encryption Key Has Been Contstructed: ";
			cout << "\n----------------------------------\n" << endl;

			for (size_t i{}; i < characters.length(); ++i)
			{
				cout << characters.at(i) << " Is Replaced By " << key.at(i) << endl;
			}
			cout << "\n----------------------------------" << endl;

			cout << "\nPlease Enter The Phrase You Would Like To Encrpt: ";
			cin.ignore();
			getline(cin, pre_phrase);

			for (char c : pre_phrase)

			{
				size_t place = characters.find(c);

				if (place != string::npos) {

					char replacement = key.at(place);
					post_phrase += replacement;
				}

				else
				{
					post_phrase += c;
				}

			}

			for (char c : post_phrase)
			{
				size_t place = key.find(c);

				if (place != string::npos) {

					char replacement = characters.at(place);
					decrypted_phrase += replacement;

				}
				else
				{
					decrypted_phrase += c;
				}

			}


			cout << "\nOriginal Phrase: " << pre_phrase << endl;
			cout << "Encrypted Phrase: " << post_phrase << endl;
			cout << "Decrypted Phrase: " << decrypted_phrase << endl;


		}

		else if (dec == 'N' or dec == 'n')


		{

			string characters{ "1234567890qwertyuioplkjhgfdsazxcvbnm!@#$ %^&*()_+=-~<>?:" };
			string key{ "mnbvcxz123asdfghjkl098qwepoi56ertyui-=+_{}<>/|][47~$%^&*" };


			cout << "\nDefault Encryption Key Used Is The Following: ";
			cout << "\n----------------------------------\n" << endl;

			for (size_t i{}; i < characters.length(); ++i)
			{
				cout << characters.at(i) << " Is Replaced By " << key.at(i) << endl;
			}
			cout << "\n----------------------------------" << endl;

			cout << "Please Enter The Phrase You Would Like To Encrpt: ";
			cin.ignore();
			getline(cin, pre_phrase);


			for (char c : pre_phrase)

			{
				size_t place = characters.find(c);

				if (place != string::npos) {

					char replacement = key.at(place);
					post_phrase += replacement;
				}

				else
				{
					post_phrase += c;
				}

			}

			for (char c : post_phrase)
			{
				size_t place = key.find(c);

				if (place != string::npos) {

					char replacement = characters.at(place);
					decrypted_phrase += replacement;

				}
				else
				{
					decrypted_phrase += c;
				}

			}


			cout << "\nOriginal Phrase: " << pre_phrase << endl;
			cout << "Encrypted Phrase: " << post_phrase << endl;
			cout << "Decrypted Phrase: " << decrypted_phrase << endl;
		}

		else if (dec == 'E' || dec == 'e')
		{

			cout << "\nThanks For Using Loner03 Encryption System!" << endl;
			cout << "--------------------------------------------" << endl;
		}

		else
		{
			cout << "\nInvalid Repsonse, Please Try Again!\n";
		}

	} while (dec != 'E' && dec != 'e');

	cout << endl;
	return 0;
}