#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out); //Write mode

    if (MyFile.is_open())
    {
        MyFile << "Hi, this is my first line\n";
        MyFile << "Hi, this is my second line\n";
        MyFile << "Hi, this is my third line\n";

        MyFile.close();
    }

    return 0;
}