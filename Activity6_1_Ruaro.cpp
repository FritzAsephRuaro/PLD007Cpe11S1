#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	
	//Using conditional statements (if-else statements), write a program  that asks a user for a number and prints out if it is an even or an odd number.
	
	int user_input = 0;
		cout<<"Enter a number";
			cin>>user_input;
	int EvenorOdd = user_input%2;
		if(EvenorOdd==0){
			cout<<"The number is even";
		}
		else if(EvenorOdd != 0){
			cout<<"The number is Odd";
		}
		
	return 0;
}
