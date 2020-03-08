#include <stdio.h>

int main()
{
    int dec_num;
    int idx = 0;
    int bin_num[sizeof(int)*8] = {0, };

    printf("양의 정수를 입력: ");
    scanf("%d", &dec_num);
    
    while(1)
    {
        bin_num[idx] = dec_num % 2;
        dec_num = dec_num/2;
        idx++;

        if (dec_num == 0) break;
    }

    for (int i = idx - 1; i >= 0; i--)
    {
        printf("%d",bin_num[i]);
    }
    printf("\n");
 
}