#include <iostream>
using namespace std;

int main()
{
    void * ptr;
    float f1 = 10.5;
    int d1 = 50;

    ptr = & f1;

    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = & d1;

    cout << ptr << endl;
    cout << *(static_cast<int*>(ptr)) << endl;

    return 0;
}