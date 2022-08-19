#include <iostream>
using namespace std;

int main()
{
    int Matrix[10][10], Matrix2[10][10], mult[10][10];
	 int c,r,c2,r2, i, j, k;

    cout << "Enter Columns for first Matrix: ";cin >> c;cout << "Enter rows and Row for first Matrix: ";cin >> r;
    cout << "Enter rows and columns for second matrix: ";cin >> c2;cout << "Enter Columns for Second Matrix: ";cin >> c2;

    while (c!=r2)
    {
        cout << "(Error!) Column of first matrix not equal to Row of second.";

        cout << "Enter Columns for First matrix: ";cin >> c;cout << "Enter Columns for Second Matrix: ";cin >> r;

        cout << "Enter Columns for Second Matrix: ";cin >> c2;cout << "Enter Columns for Second Matrix: ";cin >> r2;
    }

    cout << "\n" << "Enter Elements of First Matrix :" << "\n";
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
        	cout << "Column #" << i + 1 << ", Row #" << j + 1 << " : ";
            cin >> Matrix[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> Matrix2[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c; ++k)
            {
                mult[i][j] += Matrix[i][k] * Matrix2[k][j];
            }

    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r; ++i)
	    for(j = 0; j < c2; ++j)
	    {
	        cout << " " << mult[i][j];
	        if(j == c2-1)
	            cout << endl;
	    }

    return 0;
}
