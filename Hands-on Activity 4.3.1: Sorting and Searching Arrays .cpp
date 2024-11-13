#include <iostream>
using namespace std;
int main() {
    int dayIndex;

    while (true) {
        cout << "Enter a day index (0-6, or -1 to quit): ";
        cin >> dayIndex;

        if (dayIndex == -1) {
            break;
        }

        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        if (dayIndex >= 0 && dayIndex <= 6) {
            cout << days[dayIndex] << endl;
        } else {
            cout << "Error, no such day." << endl;
        }
    }

    return 0;
}
