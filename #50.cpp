#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S1 = "My name is Ibrahim i love programing. ";

    cout << S1.length() << endl;

    cout << S1.at(11) << endl;

    S1.append("@Prograimg Advices");
    cout << S1 << endl;

    S1.insert(19," Imad ");
    cout << S1 << endl;

    cout << S1.substr(11,7) << endl;

    S1.push_back('X');
    cout << S1 << endl;

    S1.pop_back();
    cout << S1 << endl;

    cout << S1.find("Imad") << endl;

    cout << S1.find("imad") << endl;

    if (S1.find("imad") == S1.npos)
    {
        cout << "imad is not found\n";
    }

    S1.clear();
    cout << S1 << endl;

    return 0;
}