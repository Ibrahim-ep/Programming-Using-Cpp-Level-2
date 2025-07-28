#include <iostream>
#include <vector>

using namespace std;

struct stEmploye
{
    string FiristName;
    string LastName;
    float Salary;
};

int main()
{
    vector <stEmploye> vEmployees;

    stEmploye tempEmployees;

    tempEmployees.FiristName = "Mohammed";
    tempEmployees.LastName = "Abo-Hadhoud";
    tempEmployees.Salary = 5000;
    vEmployees.push_back(tempEmployees);

    tempEmployees.FiristName = "Ali";
    tempEmployees.LastName = "Abo jasem";
    tempEmployees.Salary = 500;
    vEmployees.push_back(tempEmployees);

    tempEmployees.FiristName = "zaid";
    tempEmployees.LastName = "slman";
    tempEmployees.Salary = 300;
    vEmployees.push_back(tempEmployees);
    
    for (stEmploye &Employee : vEmployees)
    {
        cout << "First name : " << Employee.FiristName << endl;
        cout << "Last name  : " << Employee.LastName << endl;
        cout << "Salary     : " << Employee.Salary << endl;
        cout << endl;
    }

    return 0;
}