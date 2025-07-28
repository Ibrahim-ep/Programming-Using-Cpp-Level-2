#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();

    cout << "Vector Numbers : \n\n";

    for (int & Number : vNumbers)
    {
        cout << Number << endl;
    }

    cout << endl;

    return 0;
}