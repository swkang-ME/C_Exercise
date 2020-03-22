#include <stdio.h>

#define N_DATA 10
#define INIT_POINT3D(var, x, y, z) struct Point3D var = {x, y, z}

struct Point3D{
    float x, y, z;
};

int main()
{
    INIT_POINT3D(p1, 1.1f, 2.2f, 3.4f);

    printf("%.1f, %.1f, %.1f, %d\n", p1.x, p1.y, p1.z, N_DATA);
}