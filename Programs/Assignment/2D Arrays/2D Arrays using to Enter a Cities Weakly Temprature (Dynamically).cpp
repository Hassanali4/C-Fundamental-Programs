#include <iostream>
using namespace std;

const int W = 7;

int main()
{
    int c,r;

    cout << "\nEnter number of Columns. ";cin>>c;
    float Temp[c][W],a,t;

    for (int i = 0; i < c; ++i)
    {
        for(int j = 0; j < W; ++j)
        {
            cout << "C " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> Temp[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    for (int i = 0; i < c; ++i)
    {
        for(int j = 0; j < W; ++j)
        {
            cout << "C " << i + 1 << ", Day " << j + 1 << " = " << Temp[i][j] << endl;t+=Temp[i][j];
        }a=t/7;cout<<" Average Income for C no # "<<i+1<<" is :"<<a;cout<<" \nTotal Income for C no # "<<i+1<<" is :"<<t;
    }

    return 0;
}

