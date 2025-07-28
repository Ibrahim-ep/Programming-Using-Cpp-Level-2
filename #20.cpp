#include <iostream>
using namespace std;

void MyFunc()
{
    static short Number = 1;
    cout << "Vlude of Number: " << Number << "\n";
    Number++;
}

int main()
{
    MyFunc();
    MyFunc();
    MyFunc();

    return 0;
}