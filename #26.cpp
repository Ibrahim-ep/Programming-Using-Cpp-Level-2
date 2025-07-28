#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "  Code   |               Name             |  Mark   |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;

    cout << left << setw(9) << "C101" << "|" << left << setw(32) << "Introduction to programing 1" << "|" << left << setw(9) << "95" << "|" << endl;
    cout << left << setw(9) << "C102" << "|" << left << setw(32) << "Computer Hardware" << "|" << left << setw(9) << "88" << "|" << endl;
    cout << left << setw(9) << "C1035243" << "|" << left << setw(32) << "Network" << "|" << left << setw(9) << "75" << "|" << endl;

    cout << "---------|--------------------------------|---------|" << endl;

    return 0;
}