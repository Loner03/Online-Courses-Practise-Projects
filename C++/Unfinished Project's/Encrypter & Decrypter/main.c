#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <iostream>

using namespace std;

    int main() {

        string alphabet{ "[abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
        string key{ " [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

        string secret_message{};

        cout << "Secret Message: ";
        getline(cin, secret_message);

        string encrypted_messsage{};

        for (char c : secret_message)

        {

            size_t position = alphabet.find(c);

            if (position != string::npos) {

                char new_char{ key.at(position) };
                encrypted_messsage += new_char;

            }
            else
            {
                encrypted_messsage += c;
            }

        }



        cout << "\nEncrypted Message: " << encrypted_messsage << endl;


        string decrypted_message{};
        
        for (char c : encrypted_messsage) {

            size_t position = key.find(c);

            if (position != string::npos) {

                char new_char{ alphabet.at(position) };
                decrypted_message += new_char;
            }
            else
            {
                decrypted_message += c;
            }
        }

        cout << "\nDecrypted Message: " << decrypted_message;





        cout << endl;
        return 0;
    }
