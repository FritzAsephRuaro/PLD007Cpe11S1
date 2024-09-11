#include<iostream>
using namespace std;

int main()
{
int x;
int y;
//comment initiation of variables 
	cout<<"Input two integers:"<<endl;
	
		cout<<"Input the value of x";
	cin>>x;
		cout <<"Input three value of y";
	cin>>y;

	if (x<y){
		cout<<"x is less than y"<<endl;
}
	else if(x>y){
		cout<<"x is greater than y"<<endl;
}
	else{
		cout<<"x is equal to y"<<endl;
	}
return 0;
}
