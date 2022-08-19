#include<iostream>
using namespace std;
int main()
{
	int y,c1,c2,c3;
	cout<<"Enter any Yaer:";
	cin>>y;
	c1=y%400;
	c2=y%4;
	c3=y%100;
	if(c1==0)
		cout<<"It's a Leap Year.";
	else
		cout<<"It's not a Leap Year.";
	if(c2==0)
		cout<<"It's a Leap Year.";
	else
		cout<<"It's not a Leap Year.";
	if(c3==0)
		cout<<"It's not a Leap Year.";
	else
		cout<<"It's a Leap Year.";
}
