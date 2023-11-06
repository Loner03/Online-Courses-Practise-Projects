#define _CRT_SECURE_NO_WARNINGS_

#include <iostream>
#include <string>

using namespace std;

int main() {

	string pre_phrase{};
	string post_phrase{};
	string decrypted_phrase{};
	string characters{};
	string key{};
	string original{};
	string rep_original{};
	char dec{};
	int number{};
	int dec_2{};


	cout << "Welcome, To The Loner03 Encrytion System!" << endl;
	cout << "-----------------------------------------" << endl;

	do {

		cout << "\nWould Your Like To Encrpyt Or Decrypt(E/D) Or Or Press (Q) to Exit: ";
		cin >> dec;

		if (dec == 'E' || dec == 'e')

		{

			cout << "\nWould You Like Tou Use Your Own Encrytion Key(Y/N): ";
			cin >> dec;

			if (dec == 'Y' || dec == 'y')
			{

				cout << "\nKey Construction Rules: " << endl;
				cout << "-----------------------\n";
				cout << "1: Make Sure There Are No Repeated Charcters In The Key(If Not, It May Cause Problems In Running As Intended)\n2: Make Sure Both The Key And Solution Has Same Number Of Characters(If Not, It May Cause Problems In Running As Intended)" << endl;


				cout << "\nKey Construction Demo: " << endl;
				cout << "----------------------" << endl;

				cout << "\nMethod-1:" << endl;
				cout << "---------" << endl;

				cout << "\nEnter Your OriginaL Character: a" << endl;
				cout << "Enter It's Replacement: b" << endl;
				cout << "a Will Be Replaced By b After Encrytion." << endl;

				cout << "\nFollowing Encryption Key Has Been Contstructed: ";
				cout << "\n----------------------------------\n" << endl;
				cout << "a Will Be Replaced By b After Encrytion." << endl;
				cout << "\n----------------------------------\n" << endl;

				cout << "\nMethod-2:" << endl;
				cout << "---------" << endl;

				cout << "\nEnter Your OriginaL Character's: abc" << endl;
				cout << "Enter It's Replacement: bcd" << endl;

				cout << "\nFollowing Encryption Key Has Been Contstructed: ";
				cout << "\n----------------------------------\n" << endl;
				cout << "a Will Be Replaced By b After Encrytion." << endl;
				cout << "b Will Be Replaced By c After Encrytion." << endl;
				cout << "c Will Be Replaced By d After Encrytion." << endl;
				cout << "\n----------------------------------\n" << endl;

				cout << "Which Method Would You Like To Enter Key With(1/2): ";
				cin >> dec_2;

				switch (dec_2) {

				case 1:
				{

					pre_phrase.clear();
					post_phrase.clear();
					decrypted_phrase.clear();
					characters.clear();
					key.clear();
					original.clear();
					 rep_original.clear();

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

						cout << characters.at(i) << " Will Be Replaced By " << key.at(i) << " After Encrytion." << endl;
					}


					cout << "\nFollowing Encryption Key Has Been Contstructed: ";
					cout << "\n----------------------------------\n" << endl;

					for (char c : characters)


					{
						size_t new_pos = characters.find(c);

						if (new_pos != string::npos && new_pos < key.length())
						{
							cout << characters.at(new_pos) << " Will Be Replaced By " << key.at(new_pos) << " After Encrytion." << endl;

						}

						else
						{
							cout << characters.at(new_pos) << " Dosen't Have A Replacement." << endl;
						}


					}

					cout << "\n----------------------------------\n" << endl;


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
				break;


				case 2:

				{
					pre_phrase.clear();
					post_phrase.clear();
					decrypted_phrase.clear();
					characters.clear();
					key.clear();
					original.clear();
					rep_original.clear();
					

					cout << "\nEnter Your OriginaL Character's: ";
					cin.ignore();
					getline(cin, original);

					cout << "Enter It's Replacement's: ";
					getline(cin, rep_original);

					characters += original;
					key += rep_original;

					cout << endl;


					for (char c : characters)


					{
						size_t new_pos = characters.find(c);

						if (new_pos != string::npos && new_pos < key.length())
						{
							cout << characters.at(new_pos) << " Will Be Replaced By " << key.at(new_pos) << " After Encrytion." << endl;

						}

						else
						{
							cout << characters.at(new_pos) << " Dosen't Have A Replacement." << endl;
						}


					}

					cout << endl;

					cout << "\nFollowing Encryption Key Has Been Contstructed: ";
					cout << "\n----------------------------------\n" << endl;

					for (size_t i{}; i < characters.length(); ++i)
					{
						cout << characters.at(i) << " Is Replaced By " << key.at(i) << endl;
					}
					cout << "\n----------------------------------" << endl;

					
					cout << "\nPlease Enter The Phrase You Would Like To Encrpt: ";
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

				break;

				default:
					cout << "Invlid Response, Please Try Again" << endl;
				}
			}

			else if (dec == 'N' or dec == 'n')


			{

				pre_phrase.clear();
				post_phrase.clear();
				decrypted_phrase.clear();
				characters.clear();
				key.clear();
				original.clear();
				rep_original.clear();

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

			else
			{
				cout << "\nInvalid Repsonse, Please Try Again!\n";
			}

		}

		else if (dec == 'D' || dec == 'd')

		{


			cout << "\nWould You Like Tou Use Your Own Encrytion Key(Y/N): ";
			cin >> dec;

			if (dec == 'Y' || dec == 'y')
			{

				cout << "\nKey Construction Rules: " << endl;
				cout << "-----------------------\n";
				cout << "1: Make Sure There Are No Repeated Charcters In The Key(If Not, It May Cause Problems In Running As Intended)\n2: Make Sure Both The Key And Solution Has Same Number Of Characters(If Not, It May Cause Problems In Running As Intended)" << endl;


				cout << "\nKey Construction Demo: " << endl;
				cout << "----------------------" << endl;

				cout << "\nMethod-1:" << endl;
				cout << "---------" << endl;

				cout << "\nEnter Your OriginaL Character: a" << endl;
				cout << "Enter It's Replacement: b" << endl;
				cout << "a Will Be Replaced By b After Encrytion." << endl;

				cout << "\nFollowing Decryption Key Has Been Contstructed: ";
				cout << "\n----------------------------------\n" << endl;
				cout << "a Will Be Replaced By b After Encrytion." << endl;
				cout << "\n----------------------------------\n" << endl;

				cout << "\nMethod-2:" << endl;
				cout << "---------" << endl;

				cout << "\nEnter Your OriginaL Character's: abc" << endl;
				cout << "Enter It's Replacement: bcd" << endl;

				cout << "\nFollowing Decryption Key Has Been Contstructed: ";
				cout << "\n----------------------------------\n" << endl;
				cout << "a Will Be Replaced By b After Encrytion." << endl;
				cout << "b Will Be Replaced By c After Encrytion." << endl;
				cout << "c Will Be Replaced By d After Encrytion." << endl;
				cout << "\n----------------------------------\n" << endl;

				cout << "Which Method Would You Like To Enter Key With(1/2): ";
				cin >> dec_2;

				switch (dec_2) {

				case 1:
				{

					pre_phrase.clear();
					post_phrase.clear();
					decrypted_phrase.clear();
					characters.clear();
					key.clear();
					original.clear();
					rep_original.clear();

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

						cout << characters.at(i) << " Will Be Replaced By " << key.at(i) << " After Encrytion." << endl;
					}


					cout << "\nFollowing Decryption Key Has Been Contstructed: ";
					cout << "\n----------------------------------\n" << endl;

					for (char c : characters)


					{
						size_t new_pos = characters.find(c);

						if (new_pos != string::npos && new_pos < key.length())
						{
							cout << characters.at(new_pos) << " Will Be Replaced By " << key.at(new_pos) << " After Encrytion." << endl;

						}

						else
						{
							cout << characters.at(new_pos) << " Dosen't Have A Replacement." << endl;
						}


					}

					cout << "\n----------------------------------\n" << endl;


					cout << "\nPlease Enter The Phrase You Would Like To Decrypt: ";
					cin.ignore();
					getline(cin, pre_phrase);

					for (char c : pre_phrase)

					{
						size_t place = key.find(c);

						if (place != string::npos) {

							char replacement = characters.at(place);
							post_phrase += replacement;
						}

						else
						{
							post_phrase += c;
						}

					}


					cout << "\nOriginal Phrase(Encrypted): " << pre_phrase << endl;
					cout << "Decrypted Phrase: " << post_phrase << endl;
				}
				break;


				case 2:

				{

					pre_phrase.clear();
					post_phrase.clear();
					decrypted_phrase.clear();
					characters.clear();
					key.clear();
					original.clear();
					rep_original.clear();

					cout << "\nEnter Your OriginaL Character's: ";
					cin.ignore();
					getline(cin, original);

					cout << "Enter It's Replacement's: ";
					getline(cin, rep_original);

					characters += original;
					key += rep_original;

					cout << endl;


					for (char c : characters)


					{
						size_t new_pos = characters.find(c);

						if (new_pos != string::npos && new_pos < key.length())
						{
							cout << characters.at(new_pos) << " Will Be Replaced By " << key.at(new_pos) << " After Encrytion." << endl;

						}

						else
						{
							cout << characters.at(new_pos) << " Dosen't Have A Replacement." << endl;
						}


					}

					cout << endl;

					cout << "\nFollowing Decryption Key Has Been Contstructed: ";
					cout << "\n----------------------------------\n" << endl;

					for (size_t i{}; i < characters.length(); ++i)
					{
						cout << characters.at(i) << " Is Replaced By " << key.at(i) << endl;
					}
					cout << "\n----------------------------------" << endl;


					cout << "\nPlease Enter The Phrase You Would Like To Decrpyt: ";
					getline(cin, pre_phrase);

					for (char c : pre_phrase)

					{
						size_t place = key.find(c);

						if (place != string::npos) {

							char replacement = characters.at(place);
							post_phrase += replacement;
						}

						else
						{
							post_phrase += c;
						}

					}

					cout << "\nOriginal Phrase(Encrypted): " << pre_phrase << endl;
					cout << "Decrypted Phrase: " << post_phrase << endl;

				}

				break;

				default:
					cout << "Invlid Response, Please Try Again" << endl;
				}
			}

			else if (dec == 'N' or dec == 'n')


			{

				pre_phrase.clear();
				post_phrase.clear();
				decrypted_phrase.clear();
				characters.clear();
				key.clear();
				original.clear();
				rep_original.clear();

				string characters{ "1234567890qwertyuioplkjhgfdsazxcvbnm!@#$ %^&*()_+=-~<>?:" };
				string key{ "mnbvcxz123asdfghjkl098qwepoi56ertyui-=+_{}<>/|][47~$%^&*" };


				cout << "\nDefault Encryption Key Used Is The Following: ";
				cout << "\n----------------------------------\n" << endl;

				for (size_t i{}; i < characters.length(); ++i)
				{
					cout << characters.at(i) << " Is Replaced By " << key.at(i) << endl;
				}
				cout << "\n----------------------------------" << endl;

				cout << "Please Enter The Phrase You Would Like To Decrpyt: ";
				cin.ignore();
				getline(cin, pre_phrase);


				for (char c : pre_phrase)

				{
					size_t place = key.find(c);

					if (place != string::npos) {

						char replacement = characters.at(place);
						post_phrase += replacement;
					}

					else
					{
						post_phrase += c;
					}

				}


				cout << "\nOriginal Phrase(Encrypted): " << pre_phrase << endl;
				cout << "Decrypted Phrase: " << post_phrase << endl;
			}

			else
			{
				cout << "\nInvalid Repsonse, Please Try Again!\n";
			}

			}

			else if (dec == 'Q' || dec == 'q')
			{
				cout << "\nThanks For Using Loner03 Encryption\Decryption System!" << endl;
				cout << "--------------------------------------------" << endl;

				}

			else
			{
				cout << "\nInvalid Repsonse, Please Try Again!\n";
			}


	} while (dec != 'Q' && dec != 'q');



	cout << endl;
	return 0;

}