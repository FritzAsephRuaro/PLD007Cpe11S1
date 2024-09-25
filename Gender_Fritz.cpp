#include <iostream>
using namespace std;
int main() {
	
	char g;
	cout<<"What is your gender?";
	cin>>g;
	
	switch(g)
	{
		case'm':
			cout<<"Male";
		break;
		
		case'M':
			cout<<"Male";
		break;
		
		case'f':
			cout<<"Female";
		break;
		
		case'F':
			cout<<"Female";
		break;
		
		default:
			cout<<"m or f only";
		break;
	}
	
	return 0;
}
