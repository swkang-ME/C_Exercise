#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 }; 
    int *numPtr = numArr;

    for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
    {
        printf("%d\n", numArr[i]);
    }
    
    numArr[3] = 10;
    printf("%d\n",numArr[3]);
    printf("%d\n", *numPtr);
}