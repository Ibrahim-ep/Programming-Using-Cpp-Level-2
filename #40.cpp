#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {10,20,30,40};
    int *ptr = arr;

    for (int i = 0; i <= 3; i++)
    {
        cout << ptr + i << endl;
    }

    cout << endl;

    for (int i = 0; i <= 3; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}