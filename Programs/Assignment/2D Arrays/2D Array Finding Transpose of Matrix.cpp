#include <iostream>
using namespace std;
int main()
{
    int Matrix[10][10], trans[10][10];int r, c, i, j;

    cout << "Enter Rows of Matrix: ";cin >> r;
	cout << "Enter Columns of Matrix: ";cin >> c;
	
    // Storing Array a[][] Element of Matrix Entered by User .
    cout << "\n" << "Enter elements of matrix: " << "\n";
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
	    {
	        cout << "Enter First Rows First Element" << i + 1 << "Enter First Rows First Element"<< j + 1 << ": ";
	        cin >> Matrix[i][j];
	    }

    // Displaying the Arrays Elements Entered By User in a[][]
    cout << "\n" << "Entered Matrix: " << "\n";
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        	{
            	cout << " " << Matrix[i][j];
            	if(j == c - 1)
                cout << "\n" << "\n";
        	}

    // Storing a[][]'s Element and Storing it in array transpose[][].
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        	{
            	transpose[j][i]=Matrix[i][j];
        	}

    // Displaying the transpose and Displaying Array transpose[][].
    cout << "\n" << "Transpose of Matrix: " << "\n";
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        	{
            	cout << " " << trans[i][j];
            	if(j == r - 1)
                cout << "\n" << "\n";
        	}
    return 0;
}
