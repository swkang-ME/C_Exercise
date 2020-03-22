#include "calc.h"

void add(CALC_DATA *data)
{
    data->operator1 = '+';

    data->result = data->operand1 + data->operand2;

}

void sub(CALC_DATA *data)
{
    data->operator1 = '-';

    data->result = data->operand1 - data->operand2;
}