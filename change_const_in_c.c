#include <stdio.h>
//in c it is possible but in cpp it is not possible 
int main()
{
    const int a = 10;


    // *(int *)&a = 13;
    // OR
    // int *ptr = (int *)&a;
    // *ptr = 13;


    printf("%d",a);
    return 0;
}