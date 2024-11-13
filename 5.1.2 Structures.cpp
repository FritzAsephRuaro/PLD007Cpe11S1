#include <iostream>
using namespace std;

bool isMultiple(int num, int x) {
    return num % x == 0;
}

int main() {
    int num, x;

    cout << "Enter an integer: ";
    	cin >> num;

    cout << "Enter a divisor: ";
    	cin >> x;

    if (isMultiple(num, x)) {
        cout << num << " is a multiple of " << x << endl;
    } else {
        cout << num << " is not a multiple of " << x << endl;
    }

    return 0;
}
