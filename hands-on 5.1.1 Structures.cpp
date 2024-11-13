#include <iostream>
#include <bitset>

using namespace std;

template <typename T>
void reverseBits(T n) {
    T reverse = 0;
    int numBits = sizeof(T) * 8;

    for (int i = 0; i < numBits; ++i) {
        if (n & (1 << i)) {
            reverse |= 1 << (numBits - 1 - i);
        }
    }

    cout << "Original binary representation: " << bitset<sizeof(T) * 8>(n) << endl;
    cout << "Reversed binary representation: " << bitset<sizeof(T) * 8>(reverse) << endl;
}

int main() {
    unsigned int num;

    	cout << "Enter an unsigned integer: ";
    		cin >> num;

    	reverseBits(num);

return 0;
} 
