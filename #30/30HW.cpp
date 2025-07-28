#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    float Salary;
};

void ReadEmployeesInfo(vector <stEmployee> & Info)
{
    char Awnser = ' ';
    stEmployee tempEmployeeInfo;

    do
    {
        cout << "Pleas enter employee information\n";

        cout << "First name : ";
        cin >> tempEmployeeInfo.FirstName;
        cout << "Last name  : ";
        cin >> tempEmployeeInfo.LastName;
        cout << "Salary     : ";
        cin >> tempEmployeeInfo.Salary;
        Info.push_back(tempEmployeeInfo);

        cout << "\nDo you want to add more employees? Y/N?";
        cin >> Awnser;
    } while (Awnser == 'y' || Awnser == 'Y');
}

void PrintEmployeesInfo(vector <stEmployee> & Info)
{
    for (stEmployee &EmpolyeeInfo : Info)
    {
        cout << "\nFirst name : " << EmpolyeeInfo.FirstName << endl;
        cout << "Last name  : " << EmpolyeeInfo.LastName << endl;
        cout << "Salary     : " << EmpolyeeInfo.Salary << endl;
    }
}

int main()
{
    vector <stEmployee> vInfo;

    ReadEmployeesInfo(vInfo);
    PrintEmployeesInfo(vInfo);

    return 0;
}