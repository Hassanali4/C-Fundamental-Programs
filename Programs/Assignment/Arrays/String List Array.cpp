#include<iostream>
using namespace std;
int main()
{
	int w,c,v,d=0;char s[150];
	cout<<"Enter '!' Character to exit.";
	for(int i=0;i<=150;i++)
	{
		cout<<"Enter your String of Character No:"<<i<<"";cin>>s[i];
		if(s[i]=='!')
			break;
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
        {
            v++;
        }
        if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
        {
            c++;
        }
        if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        if(s[i]==' ')
        {
            w++;
        }
    }
	cout << "Vowels entered by you: " << v <<"\n";
    cout << "Consonants entered by you: " << c<< "\n";
    cout << "Digits entered by you: " << d << "\n";
    cout << "Spaces entered by you: " << w << "\n";
		
}
