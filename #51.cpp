#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char x = 'a';
    char y = 'A';

    x = toupper('a');
    y = tolower('A');

    cout << "Converting a to A : " << x << endl;
    cout << "Converting A to a : " << y << endl; 

    cout << "Is A upper : " << isupper('A') << endl;
    cout << "Is a lower : " << islower('a') << endl;
    cout << "Is digit : " << isdigit('9') << endl;
    cout << "Is punct : " << ispunct(';') << endl;

    return 0;
}