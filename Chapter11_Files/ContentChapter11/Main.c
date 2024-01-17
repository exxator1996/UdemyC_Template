#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char PROJECT_DIR[] = "/mnt/c/Users/niklas/Documents/CLernen/UdemyC_Template/";
char text[10][100];

int main()
{
    int i = 0;
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/ContentChapter11/Exercise/InputData.txt", 60);

    FILE *fp = fopen(output_filepath,"r");
    if (fp == NULL)
    {
        return 1;
    }

    while (fgets(text[i],100,fp) != NULL)
    {
        i++;
    }



    return 0;
}
