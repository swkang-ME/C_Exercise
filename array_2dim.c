#include <stdio.h>

int main()
{
    int numArr[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 110, 121, 132}
    };

    int (*numPtr)[4] = numArr;

    printf("%d\n", sizeof(numArr));

    int col = sizeof(numArr[0])/sizeof(int);
    int row = sizeof(numArr)/sizeof(numArr[0]);
    printf("row: %d, col: %d\n", row, col);
    printf("%d\n", numPtr[2][1]);

    printf("%p\n", *numArr);
    printf("%p\n", *numPtr);

    printf("%d %d \n",sizeof(numArr), sizeof(numPtr));

    return 0;


}