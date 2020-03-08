#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1 = '!';
    char *s1;
    char s2[] = "world";
    char s3[10];
    //char *s3 = malloc(sizeof(char)* 10);
    s1 = "Hello";

    printf("문자열을 입력하시오(9자): ");
    scanf("%s", s3);
    printf("\n");

    printf("%s\n",s3);
    printf("%s %s%c\n", s1, s2, c1);

    printf("%p\n", s1);
    printf("%p\n", "Hello");

    //free(s3);
}