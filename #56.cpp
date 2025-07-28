#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;

    MyFile.open("Myfile.txt", ios::out);

    if (MyFile.is_open())
    {
        for (string & Line : vFileContent)
        {
           if (Line != "")
           {
             MyFile << Line << endl;
           }
        }
        MyFile.close();
    }
}

int main()
{
    vector <string> vFileContent = {"Ali","Shadi","Maher","Fadi"};

    SaveVectorToFile("MyFile.txt",vFileContent);

    return 0;
}