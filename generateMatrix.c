#include <stdio.h>
#include <stdlib.h>

void allocMatrix(void ***ptr, int rowSize, int colSize, int elemSize)
{
    **ptr = malloc(sizeof(void *)* rowSize);

    for (int i = 0; i < rowSize; i++)
    {
        (*ptr)[i] = malloc(elemSize * colSize);
    }
}

void freeMatrix(void ***ptr, int rowSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        free((*ptr)[i]);
    }
    free(**ptr);

}

int main()
{
    short **matrix;
    allocMatrix(&matrix, 4, 3, sizeof(short));

    matrix[0][2] = 10;
    matrix[3][1] = 20;

    printf("%d %d \n", matrix[0][2], matrix[3][1]);

    freeMatrix(&matrix, 4);

}