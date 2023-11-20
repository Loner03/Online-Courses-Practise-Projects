
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
