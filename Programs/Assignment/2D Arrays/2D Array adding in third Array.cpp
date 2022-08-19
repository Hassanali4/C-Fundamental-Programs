#include <iostream>
using namespace std;

//const int CITY = 2;
//const int WEEK = 7;

int main()
{
    int c,r,c2,r2;

    cout << "\nEnter number of Columns. ";cin>>c;cout << "\nEnter number of Rows. ";cin>>r;
    cout << "\nEnter number of Second Matrix's Columns. ";cin>>c2;cout << "\nEnter number of Second Matrix's Rows. ";cin>>r2;
    int Matrix[c][r],Matrix2[c2][r2],Matrix3[c][r];

    // Inserting the values into the Matrix array
    for (int i = 0; i < c; ++i)
    {
        for(int j = 0; j < r; ++j)
        {
            cout << "Column #" << i + 1 << ", Row #" << j + 1 << " : ";
            cin >> Matrix[i][j];
        }
    }
    
    for (int i = 0; i < c2; ++i)
    {
        for(int j = 0; j < r2; ++j)
        {
            cout << "Column #" << i + 1 << ", Row #" << j + 1 << " : ";
            cin >> Matrix2[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the Newly Entered array
    for (int i = 0; i < c; ++i)
    {cout << "Matrix #"<<i+1<<" = {" ;
        for(int j = 0; j < r; ++j)
        {
            cout<< Matrix[i][j];
        }cout<<"}\n";
    }
     
	    // Accessing the values from the Newly Entered Second array
    for (int i = 0; i < c2; ++i)
    {cout << "Matrix #"<<i+1<<" = {" ;
        for(int j = 0; j < r2; ++j)
        {
            cout<< Matrix2[i][j];
        }cout<<"}\n";
    }

	// Accessing the values from the Both arrays and adding them in the third Array.
	if(c==c2&&r==r2)
	{
		for (int i = 0; i < c; ++i)
	    {cout << "Matrix #"<<i+1<<" = {" ;
	        for(int j = 0; j < r; ++j)
	        {
	        	Matrix3[i][j]=Matrix[i][j]+Matrix2[i][j];
	            cout<< Matrix[i][j];
	        }cout<<"}\n";
	    }
	}else cout<<"ONLY EQUAL MARIX WILL BE ADDED.";
    return 0;
}
