#include <iostream>
using namespace std;

struct stEmployee
{
    string Name;
    float Salary;
};

int main()
{
    stEmployee Employee1 , *ptr;

    Employee1.Name = "Ibrahim Imad";
    Employee1.Salary = 5000;

    ptr = &Employee1;

    cout << ptr->Name << endl;
    cout << ptr->Salary << endl;

    return 0;
}