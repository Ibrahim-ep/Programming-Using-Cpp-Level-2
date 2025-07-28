#include <iostream>
using namespace std;

int main()
{
    int numOfStudent;

    cout << "Pleas enter number of students : ";
    cin >> numOfStudent;

    float *ptr;

    ptr = new float[numOfStudent];

    cout << "\nEnter grade of students : \n";

    for (int i = 0; i < numOfStudent; ++i)
    {
        cout << "Student " << i + 1 << " : ";
        cin >> *(ptr + i);
    }

    cout << "\nStudents grades : \n\n";

    for (int i = 0; i < numOfStudent; ++i)
    {
        cout << "Student " << i + 1 << " grade : " << *(ptr + i) << endl;
    }

    delete[] ptr;

    return 0;
}