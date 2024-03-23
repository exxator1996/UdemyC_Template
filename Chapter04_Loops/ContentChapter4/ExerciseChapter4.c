#include <stdio.h>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (j == 0)
            {
                printf("<\t");
            }
            else if (j == 5)
            {
                printf(">\n");
            }
            else if (i == 0)
            {
                printf("  ^\t");
            }
            else if (i == 5)
            {
                printf("  v\t");
            }
            else
            {
                printf("(%d,%d)\t", i, j);
            }
        }
    }

    return 0;
}
