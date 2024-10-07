#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	/*Using conditional statements, write a program that computes for 10 percent fare discount of a senior citizen and 8 percent fare discount of a student. 
	There will be no discount if not a senior citizen and not a student. The user will be asked to enter age. The minimum fare is 9 pesos.*/
	
	int	age=0;
		cout<<"Enter your age: ";
			cin>>age;
	
	if (age<21){
		float discount1=9*0.92;
			cout<<"you're a student, you will pay: "<<discount1<<endl;  
	}
	else if (age>21 && age<60){
		float discount2=9;
			cout<<"Pay "<<discount2;
	}
	else if (age>60){
		float discount3=9*0.90;
			cout<<"you're a senior, Pay "<<discount3;
	}
	return 0;
}
