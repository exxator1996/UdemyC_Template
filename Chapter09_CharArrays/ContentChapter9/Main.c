#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *join(char *delimiter, char **list)
{
    if (delimiter == NULL || list == NULL)
        return NULL;


    size_t joinStringSize = 0;
    char *joinedString = NULL;

    while (*list != NULL)
    {
        joinStringSize += strlen(*list) + 1;

        if (joinedString == NULL)
        {
            joinedString = (char *)malloc(joinStringSize * sizeof(char));
            joinedString[0] = '\0';
        }

        joinedString = (char *)realloc(joinedString, joinStringSize * sizeof(char));
        strcat(joinedString, *list);

        if (*(list + 1) != NULL)
        {
            joinStringSize += strlen(delimiter) + 1;
            joinedString = (char *)realloc(joinedString, joinStringSize * sizeof(char));
            strcat(joinedString, delimiter);
        }
        list++;
    }

    return joinedString;
}

int main()
{
    char *list1[] = {NULL};
    char *list2[] = {"Clara", NULL};
    char *list3[] = {"Clara", "Florian", NULL};
    char *list4[] = {"Clara", "Florian", "Jan", NULL};
    char *s = NULL;

    s = join(" -> ", list1); // ""
    if (s != NULL)
    {
        printf("List1: %s\n", s);
        free(s);
    }

    s = join(" -> ", list2); // "Clara"
    if (s != NULL)
    {
        printf("List2: %s\n", s);
        free(s);
    }

    s = join(" -> ", list3); // "Clara -> Florian"
    if (s != NULL)
    {
        printf("List3: %s\n", s);
        free(s);
    }

    s = join(" -> ", list4); // "Clara -> Florian -> Jan"
    if (s != NULL)
    {
        printf("List4: %s\n", s);
        free(s);
    }

    return 0;
}
