#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if(j==0)
                printf("<");
            else if(j==5)
                printf("\t>\n");
            else if (i == 0)
                printf("\t  ^\t");
            else if (i == 5)
                printf("\t  v\t");
            else
                printf("\t(%i,%i)\t",i,j);

        }

    }

    return 0;
}
