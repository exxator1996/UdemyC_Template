#include <stdio.h>

int main()
{
    __uint32_t dividend;

    printf("Please enter a valid unsigned integer!\n");
    scanf("%u", &dividend);

    if(dividend % 3 != 0)
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder of the operation is: %u\n", dividend % 3);
    }
    else
    {
        printf("The number you entered is div. by 3!\n");
    }

    return 0;
}
