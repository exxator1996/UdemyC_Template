#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

/**********************/
/* DEFINES AND TYPES  */
/**********************/

// ...

typedef struct dynamic_array
{
    unsigned int length;
    unsigned int capacity;
    float *data;
} dynamic_array_t;

/**********************/
/*      FUNCTIONS     */
/**********************/

dynamic_array_t *createDynamicArray();
void *freeDynamicArray(dynamic_array_t *array);

void expandDynamicArray(dynamic_array_t *array);
void shrinkDynamicArray(dynamic_array_t *array);

void pushValue(dynamic_array_t *array, const float value);
float popValue(dynamic_array_t *array);

void clearDynamicArray(dynamic_array_t *array);
void printDynamicArray(const dynamic_array_t *array);

#endif // DYNAMIC_ARRAY_H
