#include <iostream>
using namespace std;

void display(int n[4][3]);

int main()
{
    int num[4][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9},
	{10, 12, 13}
	};
    display(num);

    return 0;
}

void display(int n[4][3])
{

    cout << "Displaying Values: " << endl;
    for(int i = 0;  i < 4; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << n[i][j] << " ";
        }cout<<"\n";
    }
}
