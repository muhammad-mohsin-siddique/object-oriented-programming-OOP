#include <iostream>

#include <string>

using namespace std;

int main() 
{
    string inputString;
    int key;
    char flag;

    do {
        cout << "\n\nPlease enter a string: ";
        getline(cin, inputString);

        cout << "\n\nPlease enter a Key: ";
        cin >> key;

        // Consume the newline character left in the input buffer
        cin.ignore();

        cout << "\nYou entered String: " << inputString << "\n";
        cout << "\nYou entered Key: " << key << "\n";

        string encryptString = "";

        for (int i = 0; i < inputString.length(); i++) {
            char ch = inputString[i];
            encryptString += ch + key;
        }

        cout << "\nYou Encrypted String is : " << encryptString << endl;

        cout << "\nDo you want to Decrypt It or not  [y/n]: ";
        cin >> flag;

        string decryptString = "";

        if (flag == 'y' || flag == 'Y') {
            for (int i = 0; i < encryptString.length(); i++) {
                char ch = encryptString[i];
                decryptString += ch - key;
            }

            cout << "\nYour decrypted String is : " << decryptString << endl;
        } else {
            break;
        }

        cout << "\nDo you want to continue  [y/n]: ";
        cin >> flag;

        if (flag != 'y' && flag != 'Y') {
            break;
        }
    } while (true);

    return 0;
}
