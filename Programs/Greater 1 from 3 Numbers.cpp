#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter three Numbers:";
	cin >> a >> b >> c;
	if ((a >= b) && (a >= c))
	{
		if (b> c)
		{
			cout << "a is largest";
			cout << "Ascending Order is:" << a << b << c;
		}
		if (c>b)
		{
			cout << "a is largest";
			cout << "Ascending Oder is" << c << a << b;
		}
	}
	if ((b>=a)&&(b>=c))
		{
			if (a>c)
			{
				cout << "b is largest";
				cout << "Ascending Order is :" << b << a << c;
			}
			if (c>a)
			{
				cout << "b is largest";
				cout << "Acending Order is:" << b << c << a;
		}
	if ((c > a)&&(c > b))
		{
			if (a>b)
			{
				cout << "c is largest";
				cout << "Ascending Order is :" <<c << a <<b;
			}
			if (b>a)
			{
				cout << "b is largest";
				cout << "Acending Order is:" << c << b << a;
			}

		}
	system("pause");
	return 0;
	}
}
