#include<iostream>
#include<cmath>
using namespace std;
int BC(int n);
 
int main()
{
   long double n,D;
   cout<<"Enter a decimal number:";
   cin>>n;
   D = BC(n);
   cout<<"The binary equivalent of"<<n<<" is "<<D;
}
 
int BC(int n)
{
	double i=n,r,d;
    if (n== 0)
    {
        return 0;
    }
    else
    {
    	while (n!=0)
    	{
	        r = n%10;
	        n /= 10;
	        d += r*pow(2,i);
	        ++i;
    	}
    }
}
