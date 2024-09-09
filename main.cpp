#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	double num1, num2, num3;
	cout<<"Enter three numbers:";
	cin >>num1>>num2>>num3;
	
	double sum=num1 + num2 + num3;
	cout<<"Addition:"<<sum<<endl;
	
	double difference= num1 - num2 - num3;
	cout<<"Subtraction:"<<difference<<endl;
	
	double product= num1 * num2 * num3;
	cout<<"Multiplication:"<<product<<endl;
	
	double quotient= num1 / num2 / num3;
	cout<<"Division:"<<quotient<<endl;
	
	return 0;
}
