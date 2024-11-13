/*#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Character: " << ch << endl;

    // Test islower
    if (islower(ch)) {
        cout << ch << " is a lowercase letter.\n";
    } else {
        cout << ch << " is not a lowercase letter.\n";
    }

    // Test isupper
    if (isupper(ch)) {
        cout << ch << " is an uppercase letter.\n";
    } else {
        cout << ch << " is not an uppercase letter.\n";
    }

    // Test isalpha
    if (isalpha(ch)) {
        cout << ch << " is an alphabetic character.\n";
    } else {
        cout << ch << " is not an alphabetic character.\n";
    }

    // Test isdigit
    if (isdigit(ch)) {
        cout << ch << " is a digit.\n";
    } else {
        cout << ch << " is not a digit.\n";
    }

    // Test isalnum
    if (isalnum(ch)) {
        cout << ch << " is an alphanumeric character.\n";
    } else {
        cout << ch << " is not an alphanumeric character.\n";
    }

    // Test isspace
    if (isspace(ch)) {
        cout << ch << " is a whitespace character.\n";
    } else {
        cout << ch << " is not a whitespace character.\n";
    }

    // Test ispunct
    if (ispunct(ch)) {
        cout << ch << " is a punctuation character.\n";
    } else {
        cout << ch << " is not a punctuation character.\n";
    }

    // Test tolower and toupper
    cout << "Converted to lowercase: " << tolower(ch) << endl;
    cout << "Converted to uppercase: " << toupper(ch) << endl;

    return 0;
}*/

/*#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Character: " << ch << endl;

    // ... (rest of the code remains the same)

    // Test tolower and toupper
    cout << "Converted to lowercase: ";
    if (isupper(ch)) {
        cout << char(ch + 32) << endl; // Convert uppercase to lowercase
    } else {
        cout << ch << endl; // Print the original character
    }

    cout << "Converted to uppercase: ";
    if (islower(ch)) {
        cout << char(ch - 32) << endl; // Convert lowercase to uppercase
    } else {
        cout << ch << endl; // Print the original character
    }

    return 0;
}*/

#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;

    cout << "Enter a character: ";
   		cin >> ch;

    	cout << "Character: " << ch << endl;

    
    cout << "Converted to lowercase: ";
    	if (isupper(ch)) {
        	cout << char(ch + 32) << endl;
    	} 
		else {
        	cout << ch << endl;
   		}

    
    cout << "Converted to uppercase: ";
    	if (islower(ch)) {
        	cout << char(ch - 32) << endl;
    	} 
		else {
        	cout << ch << endl;
    	}
return 0;
}

