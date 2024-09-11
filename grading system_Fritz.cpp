#include <iostream>

using namespace std;

int main() {
	//initialization of grades
float grade;
	
	cout<<"GRADING SYSTEM"<<endl;
	
		cout<<"Input grade"<<endl;
			cin>>grade;
			
	//process	in/output	
if ((grade >= 94)&&(grade <= 100))
{	
	cout<<" 1.00 Excellent"<<endl;	
}
else if((grade >= 88.5) && (grade <= 93.99))
{	
	cout<<"1.25 Superior"<<endl;
}
else if((grade >= 83) && (grade <= 88.49)){
			
	cout<<"1.50	Meritorious"<<endl;
}
else if((grade >= 77.5) && (grade <= 82.99)){
			
	cout<<"1.75 Very Good"<<endl;
}
else if((grade >= 72) && (grade <= 77.99)){
			
	cout<<"2.00 Good"<<endl;
}
else if((grade >= 65.5) && (grade <=71.99 )){
			
	cout<<"2.25 Very Satisfactory"<<endl;
}
else if((grade >= 61) && (grade <= 65.49)){
			
	cout<<"2.50 Satisfactory"<<endl;
}
else if((grade >= 55.5) && (grade <= 60.99)){
			
	cout<<"2.75 Fair"<<endl;
}
else if((grade >= 50) && (grade <= 55.49)){
			
	cout<<"3.00 Passing"<<endl;
}
else if((grade >= 1) && (grade <= 40.99)){
			
	cout<<"4.00 Incomplete"<<endl;
}
else if((grade >= 0) && (grade <= 0)){
			
	cout<<"5.00 Failed"<<endl;
}
	return 0;
}
