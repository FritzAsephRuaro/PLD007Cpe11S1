#include <iostream>
using namespace std;
int main() {
	
	//1. Create a C/C++ program that will produce accept five numbers and determine the sum of the first  and last number among the five numbers entered using Do..While loop.
	int num1,
		num2,
		num3,
		num4,
		num5;
			
	cout<<"Enter five numbers:";
		cin>>num1>>num2>>num3>>num4>>num5;
	do {
		int sum=num1+num5;
			cout<<"The num of the first and last numbers is: "<<sum<<endl;
			break;
		}
	while(num2,num3,num4);
		cout<<"Here are the three remaining numbers:"<<num2<<","<<num3<<","<<num4<<endl;	
	
	return 0;
}

