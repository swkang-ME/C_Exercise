#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sizeRow, sizeCol;
    printf("2차원 배열 사이즈 입력:");
    scanf("%d %d", &sizeRow, &sizeCol);

    int numArr[sizeRow][sizeCol]; // only for gcc compiler --> int (*numArr)[sizeRow] = malloc(sizeof(int *)*sizeCol);
    
    
    int **m;
    m = malloc(sizeof(int *) * sizeRow);
    for (int i = 0; i < sizeRow; i++)
    {
        m[i] = malloc(sizeof(int) * sizeCol);
    }

    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j <sizeCol; j++)
        {
            m[i][j] = i + j;
            numArr[i][j] = i + j;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < sizeRow; i++)
    {
        free(m[i]);
    }

    free(m);
    return 0;
    
    
}