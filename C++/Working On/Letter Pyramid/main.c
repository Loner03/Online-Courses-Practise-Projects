#define _CRT_SECURE_NO_WARNINGS_

#include <iostream>
#include <string>

using namespace std;

int main()

{
    string original{};

    cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(cin, original);

    size_t lenth = original.length();

    int position{ 0 };


    for (char c : original) {

        size_t num_spaces = lenth - position;
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces;
        }

        for (size_t j = 0; j < position; j++) {
            cout << original.at(j);
        }

        cout << c;


        for (int j = position - 1; j >= 0; --j) {

            auto k = static_cast<size_t>(j);
            cout << original.at(k);
        }

        cout << endl;

        ++position;
    }

    return 0;
}