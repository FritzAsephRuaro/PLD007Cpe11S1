#include <iostream>
#include <iomanip>

double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    using namespace std;
       cout << std::fixed << std::setprecision(2);

    cout << "Celsius to Fahrenheit \n";
   		for (int c = 0; c <= 3; ++c) {
        cout << c << "\t\t" << fahrenheit(c) << "\n";
    }

    cout << "\nFahrenheit to Celsius\n";
    	for (int f = 32; f <= 34; ++f) {
        cout << f << "\t\t" << celsius(f) << "\n";
    }
return 0;
}
