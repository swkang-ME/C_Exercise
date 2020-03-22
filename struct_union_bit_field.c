#include <stdio.h>

struct Message {
    union {
        struct {
            unsigned short signalA : 3;
            unsigned short signalB : 2;
            unsigned short signalC : 7;
            unsigned short signalD : 4;
        };

        unsigned short Massage;
    };
};

int main()
{
    struct Message Msg = {0, };

    Msg.signalA = 4;
    Msg.signalB = 2;
    Msg.signalC = 80;
    Msg.signalD = 15;

    printf("%u\n", Msg.Massage);
    return 0;
    
}