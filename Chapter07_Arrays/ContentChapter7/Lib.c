#include <stdio.h>

#include "Lib.h"

float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}

int maxArray(int *array, unsigned int length)
{
    int max = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (max < array[i])
            max = array[i];
    }

    return max;
}

int minArray(int *array, unsigned int length)
{
    int min = array[0];

    for (unsigned int i = 1; i < length; i++)
    {
        if (min > array[i])
            min = array[i];
    }

    return min;
}
