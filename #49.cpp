#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num = {1,2,3,4,5};

    try
    {
        cout << num.at(5);
    }
    catch(const std::exception& e)
    {
       cout << "out of bound";
    }

    return 0;
}