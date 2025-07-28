#include <iostream>

using namespace std;

int main()
{
    short Array1[] {1,2,3,4,5};

    for (short n : Array1)
    {
        cout << n << endl;
    }

    return 0;
}