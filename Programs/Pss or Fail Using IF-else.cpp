#include<iostream>
using namespace std;
int main()
{
	int m ,s,f,total;
	cout<<"enter mid-term number\n";
	cin>>m;
	cout<<"enter sessional number\n";
	cin>>s;
	cout<<"enter final-term number\n";
	cin>>f;
	total=m+f+s;
	if (total<60)
		cout<<"fail\n";
	else
		cout<<"pass\n";
	return 0;
}
