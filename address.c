#include <stdio.h>

int main()
{
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;


    printf("%p\n", &num1);
    printf("%p\n", numPtr);
    printf("%d\n", *numPtr);

    *numPtr = 20;
    printf("%d\n", *numPtr);
    return 0;
}