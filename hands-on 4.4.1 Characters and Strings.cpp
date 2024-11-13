#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch;

    cout << "According to islower:\n";
    ch = 'p';
    cout << ch << " is a lowercase letter\n";
    ch = 'P';
    cout << ch << " is not a lowercase letter\n";
    ch = '5';
    cout << ch << " is not a lowercase letter\n";
    ch = '!';
    cout << ch << " is not a lowercase letter\n\n";

    cout << "According to isupper:\n";
    ch = 'D';
    cout << ch << " is an uppercase letter\n";
    ch = 'd';
    cout << ch << " is not an uppercase letter\n";
    ch = '8';
    cout << ch << " is not an uppercase letter\n";
    ch = '&';
    cout << ch << " is not an uppercase letter\n\n";

    ch = 'u';
    cout << "u converted to uppercase is ";
    if (ch >= 'a' && ch <= 'z') {
	        cout << char(ch - 32) << endl; 								// Convert lowercase to uppercase
	    } else {
        cout << ch << endl; 											// Print the original character
    }

    ch = '7';
    cout << "7 converted to uppercase is " << ch << endl; 				// Digit remains unchanged

    ch = '$';
    cout << "$ converted to uppercase is " << ch << endl; 				// Symbol remains unchanged

    ch = 'L';
    cout << "L converted to lowercase is ";
    if (ch >= 'A' && ch <= 'Z') {
        cout << char(ch + 32) << endl; 									// Convert uppercase to lowercase
    } else {
        cout << ch << endl; 											// Print the original character
    }

    return 0;
}


