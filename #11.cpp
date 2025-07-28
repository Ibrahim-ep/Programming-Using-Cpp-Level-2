#include <iostream>

using namespace std;

int ReadNumber()
{
    int num;

    cout << "Pleas enter a number\n";
    cin >> num;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid number, pleas enter a valid number\n";
        cin >> num;
    }

    return num;
}

int main()
{
    cout << "Your number is : " << ReadNumber();

    return 0;
}