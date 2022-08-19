#include <iostream>
using namespace std;

const int C = 2;
const int W = 7;

int main()
{
    int Temp[C][W];

    cout << "Enter all temperature for a Week of first City and then second City. \n";
	

    for (int i = 0; i < C; ++i)
    {
        for(int j = 0; j < W; ++j)
        {
            cout << "C " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> Temp[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    for (int i = 0; i < C; ++i)
    {
        for(int j = 0; j < W; ++j)
        {
            cout << "C #" << i + 1 << ", Day #" << j + 1 << " = " << Temp[i][j] << endl;
        }
    }

    return 0;
}

