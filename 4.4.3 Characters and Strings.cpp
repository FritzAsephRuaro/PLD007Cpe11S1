#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str1, str2, str3, str4;
    int num1, num2, num3, num4, total;

    cout << "Enter four integers as strings: "<<"\n";
    cin >> str1 >> str2 >> str3 >> str4;

    // Convert strings to integers using stringstream
    stringstream ss1(str1);
    ss1 >> num1;

    stringstream ss2(str2);
    ss2 >> num2;

    stringstream ss3(str3);
    ss3 >> num3;

    stringstream ss4(str4);
    ss4 >> num4;

    // Calculate the total
    total = num1 + num2 + num3 + num4;

    cout << "The total is: " << total << endl;

    return 0;
}

