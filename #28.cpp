#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers = {10, 20, 30, 40, 50};

    for (int &Number : vNumbers)
    {
        cout << Number << " ";
    }

    cout << endl;

    return 0;
}