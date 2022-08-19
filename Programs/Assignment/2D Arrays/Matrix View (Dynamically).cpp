#include <iostream>
using namespace std;

int main()
{
    int c,r;

    cout << "\nEnter number of Columns. ";cin>>c;cout << "\nEnter number of Rows. ";cin>>r;
    int Matrix[c][r],;

    // Inserting the values into the temperature array
    for (int i = 0; i < c; ++i)
    {
        for(int j = 0; j < r; ++j)
        {
            cout << "Column # " << i + 1 << ", Row # " << j + 1 << " : ";
            cin >> Matrix[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array
    for (int i = 0; i < c; ++i)
    {cout << "Matrix #"<<i+1<<" = {" ;
        for(int j = 0; j < r; ++j)
        {
        	cout << "Column # " << i + 1 << ", Row # " << j + 1 << " : ";
            cout<< Matrix[i][j];
        }cout<<"}\n";
    }

    return 0;
}
