#include <iostream>
using namespace std;

int main()
{
    int student,subj;

    cout << "Enter all subjects numbers for a  of first Student and then second Student. \n";cout<<"Enter No. of Student: ";cin>>student;
    cout<<"Enter No. of Subjects: ";cin>>subj;
	float Class[student][subj],a,t;
    // Inserting the values into the Shop array
    for (int i = 0; i < student; ++i)
    {
        for(int j = 0; j < subj; ++j)
        {
            cout << "Student #" << i + 1 << ", Subject #" << j + 1 << " : ";
            cin >> Class[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the Shop array
    for (int i = 0; i < student; ++i)
    {
        for(int j = 0; j < subj; ++j)
        {
            cout << "\nStudent #" << i + 1 << ", Subject #" << j + 1 << " : "<<Class[i][j];t+=Class[i][j];
        }a=t/subj;cout<<"\n Average Marks for Student no # "<<i+1<<" is :"<<a;cout<<" \nTotal Marks for Student no # "<<i+1<<" is :"<<t;
    }

    return 0;
}
