#include <stdio.h>
#include <stdlib.h>

#include "DynamicArray.h"

/**********************/
/*      FUNCTIONS     */
/**********************/

dynamic_array_t *createDynamicArray()
{
    unsigned int initalLength = 0u;
    unsigned int initalCapacity = 10u;

    dynamic_array_t *dynamicArray = (dynamic_array_t *)malloc(sizeof(dynamic_array_t));

    if (dynamicArray == NULL)
    {
        return NULL;
    }

    dynamicArray->data = (float *)malloc(sizeof(float) * initalCapacity);

    if (dynamicArray->data == NULL)
    {
        free(dynamicArray);
        return NULL;
    }

    dynamicArray->capacity = initalCapacity;
    dynamicArray->length = initalLength;

    return dynamicArray;
}

void *freeDynamicArray(dynamic_array_t *array)
{
    if (array == NULL)
    {
        return NULL;
    }
    free(array);
    return NULL;
}

void expandDynamicArray(dynamic_array_t *array)
{
    float *newDataPtr = NULL;

    newDataPtr = realloc(array->data, (array->capacity + 10u) * sizeof(float));

    if (newDataPtr != NULL)
    {
        array->data = newDataPtr;
        array->capacity += 10u;
    }
}

void shrinkDynamicArray(dynamic_array_t *array)
{
    float *newDataPtr = NULL;
    if (array->capacity > 10u)
    {
        newDataPtr = realloc(array->data, (array->capacity - 10u) * sizeof(float));
    }

    if (newDataPtr != NULL)
    {
        array->data = newDataPtr;
        array->capacity -= 10;
    }
}

void pushValue(dynamic_array_t *array, const float value)
{
    if (array->length == array->capacity)
    {
        expandDynamicArray(array);
    }

    if (array->length < array->capacity)
    {
        array->data[array->length] = value;
        array->length++;
    }
}

float popValue(dynamic_array_t *array)
{
    float outputValue = 0;

    if (array->length > 0)
    {
        outputValue = array->data[array->length - 1];
        array->length--;
    }

    if (array->length <= array->capacity - 10u)
    {
        shrinkDynamicArray(array);
    }

    return outputValue;
}

void clearDynamicArray(dynamic_array_t *array)
{
    if (array->data != NULL)
    {
        free(array->data);
        array->data = NULL;
    }
}

void printDynamicArray(const dynamic_array_t *array)
{
    for (unsigned int i = 0; i < array->length; i++)
    {
        printf("%f \n", array->data[i]);
    }
}
