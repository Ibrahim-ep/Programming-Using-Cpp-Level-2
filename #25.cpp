#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char name[] = "Ibrahim imad";
    char SchoolName[] = "Programing Advice";

    printf("\nDear %s, How are you?\n",name);
    printf("Welcom to %s school\n\n",SchoolName);

    char c = 'S';

    printf("The width of c is : %*c\n",1,c);
    printf("The width of c is : %*c\n",2,c);
    printf("The width of c is : %*c\n",3,c);
    printf("The width of c is : %*c\n",4,c);

    return 0;
}