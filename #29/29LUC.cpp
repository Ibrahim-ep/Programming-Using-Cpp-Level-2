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

    cout << "Vector Numbers : \n\n";

    for (int &Numbers : vNumbers)
    {
        cout << Numbers << endl;
    }

    return 0;
}