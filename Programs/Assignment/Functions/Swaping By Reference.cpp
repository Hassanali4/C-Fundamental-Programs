#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a,int &s);
int main()
{
	int a,s;
	cout<<"Enter value of first Variable:";cin>>a;
	cout<<"Enter value of Second Variable:";cin>>s;
	cout<<"\nBefore Swaping";
	swap(a,s);
	cout<<"\nThe value of first Variable:"<<a;
	cout<<"\nThe value of Second Variable:"<<s;
	cout<<"\n\nAfter Swaping";
}
void swap(int &a,int &s)
{
	a=a+s;
	s=a-s;
	a=a-s;
}
