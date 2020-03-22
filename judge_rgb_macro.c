#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RGB(r, g, b) ((b)<<16) | ((g)<<8) | (r)
#define DEBUG // DEBUG 정의안하면 조건부내부 코드 컴파일 안됨

int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
 
    printf("#%06X\n", RGB(r, g, b));
    printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));
#ifdef DEBUG
    printf("%d\n", 1);
#endif
    return 0;

}