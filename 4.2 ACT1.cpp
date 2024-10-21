#include <iostream>
using namespace std;
int main() {
    int arr[] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Element\tValue\tHistogram" << endl;

    for (int i = 0; i < size; i++) {
        cout << i << "\t" << arr[i] << "\t";

        for (int j = 0; j < arr[i]; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
