#include <iostream>
#include <cstdio>

int main()
{
    short page = 1, Totalpages = 10;

    printf("page number is %d \n",page);
    printf("You ate in page %d of %d \n",page,Totalpages);

    printf("the page number = %0*d \n",2,page);
    printf("the page number = %0*d \n",3,page);
    printf("the page number = %0*d \n",4,page);
    printf("the page number = %0*d \n",5,page);

    return 0;
}