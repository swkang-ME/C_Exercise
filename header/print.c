#include <stdio.h>
#include "print.h"

void print(CALC_DATA *data)
{
    printf("%d %c %d = %d\n",
    data->operand1,
    data->operator1,
    data->operand2,
    data->result
    );
}