#include <iostream>
using namespace std;

void display(int n[][],int ,int );

int main()
{
    int num[4][3],c,r;
	cout<<"Enter No Columns:";cin>>c;
	cout<<"Enter No Rows:";cin>>r;
    display(num[][],c,r);

    return 0;
}
void display(int n[][],int c,int r)
{

    cout << "Displaying Values: " << endl;
    for(int i = 0;  i < c; ++i)
    {
        for(int j = 0; j < r; ++j)
        {
            cout << n[i][j] << " ";
        }cout<<"\n";
    }
}
