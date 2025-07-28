#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num = {1,2,3,4,5};

    for (const int &i : num)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int &i : num)
    {
        i = 20;
        cout << i << " ";
    }

    cout << endl;

    num.at(0) = 40;
    num[2] = 55;
    num[4] = 90;

    for (int i : num)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}