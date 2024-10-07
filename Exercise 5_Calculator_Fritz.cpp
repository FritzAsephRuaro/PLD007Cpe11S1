#include <iostream>
using namespace std;
int main() 
{
	
	// case switch
	//Caluculator
	
	char n;
	cout<<"Enter a basic operation: ";
	cin>>n;
	
	switch(n)
	{
		case'+':
			cout<<"Addition";
		break;
		
		case'-':
			cout<<"Subtraction";
		break;
		
		case '/':
			cout<<"Division";	
		break;
		
		case '*':
			cout<<"Multiplication";
		break;
		
		default:
			cout<<"+,-,*,/ are the only basic operations";
		break;
	}

	
	
	
	
	return 0;
}
