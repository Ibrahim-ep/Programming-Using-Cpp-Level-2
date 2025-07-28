#include <iostream>
using namespace std;

int main()
{
    int * ptrX;
    float * ptrY;

    ptrX = new int;
    ptrY = new float;

    *ptrX = 10;
    *ptrY = 40.33;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    delete ptrX;
    delete ptrY;

    return 0;
}