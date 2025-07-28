#include <iostream>
#include <fstream>

using namespace std;

void PrintFileContent(string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in); // Read mode

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

int main()
{
    PrintFileContent("MyFile.txt");

    return 0;
}