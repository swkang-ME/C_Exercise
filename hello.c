#include <stdio.h>

int main()
{
    int num, num1, num2, num3, num4, num5;

    scanf("%d", &num);
    num5 = num % 10;
    num4 = (num/10) % 10;
    num3 = (num/100) % 10;
    num2 = (num/1000) % 10;
    num1 = (num/10000) % 10;
    printf("%d %d %d %d %d\n", num5, num4, num3, num2, num1);

    return 0;
}