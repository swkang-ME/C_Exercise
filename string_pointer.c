#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c1 = '!';
    char *s1;
    char s2[] = "world";
    char s3[20];
    char *s4 = malloc(sizeof(char)* 10);
    char s5[40] = "입력된 문자열 :";
    s1 = "Hello";

    printf("문자열을 입력하시오(9자): ");
    scanf("%s", s4);
    printf("\n");

    printf("%p\n", s1);
    printf("%p\n", "Hello");

    strcat(s5, s4);
    printf("%s \n", s5);
    sprintf(s3, "%s %s%c", s1, s2, c1);
    printf("%s \n", s3);

    free(s4);
}