#include <stdio.h>

int main()
{
    unsigned int dividend, rest;

    printf("Please enter a valid unsigned integer!\n");
    scanf("%u", &dividend);

    rest = dividend % 3;

    if (rest == 0)
    {
        printf("The number you entered is divisible by 3!\n");
    }
    else
    {
        printf("The number you entered is not divisible by 3!\n");
        printf("The remainder of the operation is: %d\n", rest);
    }


    return 0;
}
