#include <iostream>
#include <cstdio>

void FillArray(int arr[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
           arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

void PrintArray(int arr[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%0*d ",2,arr[i][j]);
        }
        std::cout << std::endl;
    }
}

int main()
{
    int Array[10][10];

    FillArray(Array);
    PrintArray(Array);

    return 0;
}