#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Point2D;

int main()
{
    Point2D p1[3];
    Point2D *p2[3];

    for (int i = 0; i < sizeof(p2) / sizeof(Point2D); i++)
    {
        p2[i] = malloc(sizeof(Point2D));
    }

    for (int i = 0; i < 3; i++)
    {
        p1[i].x = (i+1)*10;
        p1[i].y = (i+2)*10;
        p2[i] -> x = (i+1)*10;
        p2[i] -> y = (i+2)*10;

     }
    for (int i = 0; i <3; i++)
    {
        printf("p1[%d]: (%d, %d)\n", i, p1[i].x, p1[i].y);
        printf("p2[%d]: (%d, %d)\n",i, p2[i] -> x, p2[i] -> y);
    }
    
    for (int i = 0; i < sizeof(p2) / sizeof(Point2D); i++)
    {
        free(p2[i]);
    }

}