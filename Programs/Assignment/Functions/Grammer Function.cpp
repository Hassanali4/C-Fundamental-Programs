#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int c=0;char s[500];
	cout<<"Enter '!' Character to exit.";
	for(int i=0;i<=500;i++)
	{
		cout<<"Enter your String of Character No:"<<i<<"";cin>>s[i];
		if(s[i]=='a' ||s[i]=='b'||s[i]=='c'||s[i]=='d'|| s[i]=='e' ||s[i]=='f'||s[i]=='g'||s[i]=='h'||
		 s[i]=='i' ||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='p'||
		 s[i]=='q' ||s[i]=='r'||s[i]=='s'||s[i]=='t'|| s[i]=='u' ||s[i]=='v'||s[i]=='w'||s[i]=='x'|| 
		 s[i]=='y'||s[i]=='z'|| s[i]=='A' ||s[i]=='B'||s[i]=='C'|| s[i]=='E' ||s[i]=='F'||s[i]=='G'||s[i]=='H'||
		 s[i]=='I' ||s[i]=='J'||s[i]=='K'||s[i]=='L'||s[i]=='M'||s[i]=='N'||s[i]=='O'||s[i]=='P'||
		 s[i]=='Q' ||s[i]=='R'||s[i]=='S'||s[i]=='T'|| s[i]=='U' ||s[i]=='V'||s[i]=='W'||s[i]=='X'|| 
		 s[i]=='Y'||s[i]=='Z')
		 c++;
		if(s[i]=='!')
		 break;
	}
	cout<<"The number of character's entered are:"<<c;
		
}
