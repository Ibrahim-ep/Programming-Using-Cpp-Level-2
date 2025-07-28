#include <iostream>

using namespace std;

int main()
{
    short mark;
    string result;

    cout << "Pleas enter a number \n";
    cin >> mark;

    result = (mark == 0) ? "Number is Zero" : result = (mark > 0) ? "Number is Positive" : "Number is negative";
    cout << result << endl;

    return 0;

}