#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num = {1,2,3,4,5};

    cout << "\n\nusing at.()\n\n";
    cout << "Number at index 0 = " << num.at(0) << endl;
    cout << "Number at index 2 = " << num.at(2) << endl;
    cout << "Number at index 4 = " << num.at(4) << endl;

    cout << "\nusing []\n\n";
    cout << "Number at index 0 = " << num[0] << endl;
    cout << "Number at index 2 = " << num[2] << endl;
    cout << "Number at index 4 = " << num[4] << endl;

    return 0;
}