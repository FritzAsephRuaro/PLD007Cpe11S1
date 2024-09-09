#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float num1, num2, num3;
	cout<<"Enter three numbers:";
	cin >>num1>>num2>>num3;
	
	float sum=num1 + num2 + num3;
	cout<<"Addition:"<<sum<<endl;
	
	float difference= num1 - num2 - num3;
	cout<<"Subtraction:"<<difference<<endl;
	
	float product= num1 * num2 * num3;
	cout<<"Multiplication:"<<product<<endl;
	
	float quotient= num1 / num2 / num3;
	cout<<"Division:"<<quotient<<endl;
	
	return 0;
}
