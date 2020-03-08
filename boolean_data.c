#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("int의 크기: %d\n", sizeof(int));      // int의 크기: 4: int의 크기는 4바이트
    printf("bool의 크기: %d\n", sizeof(bool));    // bool의 크기: 1: bool의 크기는 1바이트


    printf("%d\n", true && true);      // 1: true AND true는 1
    printf("%d\n", true && false);     // 0: true AND false는 0
    printf("%d\n", false && true);     // 0: false AND true는 0
    printf("%d\n", false && false);    // 0: false AND false는 0
 
    printf("%d\n", true || true);      // 1: true OR true는 1
    printf("%d\n", true || false);     // 1: true OR false는 1
    printf("%d\n", false || true);     // 1: false OR true는 1
    printf("%d\n", false || false);    // 0: false OR false는 0

    bool b1 = true;
    bool b2 = false;
 
    printf(b1 ? "true" : "false");    // b1이 true이므로 true가 출력됨
    printf("\n");
    printf(b2 ? "true" : "false");    // b2가 false이므로 false 출력됨
    printf("\n");
 
    printf("%s\n", b1 ? "true" : "false");    // b1이 true이므로 true가 출력됨
    printf("%s\n", b2 ? "true" : "false");    // b2가 false이므로 false 출력됨
    
    return 0;
}