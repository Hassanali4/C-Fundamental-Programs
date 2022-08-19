#include <iostream>
using namespace std;

const int WEEK = 7;

int main()
{
    int shops;

    cout << "Enter all Income for a week of first Shop and then second Shop. \n";cout<<"Enter No. of Shops: ";cin>>shops;
    
	float [shops][WEEK],a,t;
    // Inserting the values into the Shop array
    for (int i = 0; i < shops; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Shop #" << i + 1 << ", Day #" << j + 1 << " : ";
            cin >> Stores[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the Shop array
    for (int i = 0; i < shops; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Shop #" << i + 1 << ", Day #" << j + 1 << " = " << Stores[i][j] << endl;t+=Stores[i][j];
        }a=t/7;cout<<" Average Income for City no # "<<i+1<<" is :"<<a;cout<<" \nTotal Income for City no # "<<i+1<<" is :"<<t;
    }

    return 0;
}
