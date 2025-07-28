#include <iostream>
#include <fstream>
#include <vector>

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

void LoadDataFromFileToVector(string FileName, vector <string> & vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in); // Read mode

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
           vFileContent.push_back(Line);
        }

        MyFile.close();
    }
}

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

void DeleteRecordFromFile(string FileName, string Record, string UpdateTo)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector("MyFile.txt",vFileContent);

    for (string &Line : vFileContent)
    {
        if (Line == Record)
        {
            Line = UpdateTo;
        }
    }
    SaveVectorToFile("MyFile.txt",vFileContent);
}

int main()
{
    vector <string> vFileContent;

    cout << "File content befor deleting record : \n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt","Ali","Omar");

    cout << "File content after deleting record : \n";
    PrintFileContent("MyFile.txt");

    return 0;
}