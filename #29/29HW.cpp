#include <iostream>
#include <vector>

using namespace std;

void ReadNumbers(vector <int> &vNumber)
{
    int input;
    char Awnser = ' ';

    do
    {
        cout << "Pleas enter a number\n";

        cin >> input;
        vNumber.push_back(input);

        cout << "Do you want to add more numbers? Y/N\n";
        cin >> Awnser;

    } while (Awnser == 'y' || Awnser == 'Y');
}

void PrintNumbers(vector <int> &vNumbers)
{
    cout << "Vector Numbers : \n\n";
    for (int &Numbers : vNumbers)
    {
        cout << Numbers << endl;
    }
}

int main()
{
    vector <int> vNumbers;

    ReadNumbers(vNumbers);
    PrintNumbers(vNumbers);

    return 0;
}