#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "a value : " << a << endl;
    cout << "a address : " << &a << endl;

    int * p = &a;

    cout << "pointer value : " << p << endl;

    return 0;
}