#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifndef NDEBUG
#define DEBUG
#endif

int comp(const void *elem1, const void *elem2)
{
    int l = *((int *)elem1);
    int r = *((int *)elem2);

    if (l > r)
        return 1;
    if (r > l)
        return -1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    #ifdef DEBUG
        char input_filename[] = "Data.txt";
        int inputLength = 34;
    #endif
    #ifdef NDEBUG
        if (argc < 3)
        {
            printf("Argumente\n");
            return -1;
        }
        char *input_filename = argv[1];
        printf("%s\n",input_filename);
        int inputLength = atoi(argv[2]);
    #endif
    char input_filepath[200] = "/mnt/c/Users/niklas/Documents/CLernen/UdemyC_Template/Chapter12_Advanced1/ContentChapter12/";

    strncat(input_filepath, input_filename, 50);
    int input_values[inputLength];

    char line[20];

    FILE *fp = fopen(input_filepath,"r");
    if (fp == NULL)
    {
        printf("file input open failed\n");
        return -1;
    }

    for (int valueIdx = 0; valueIdx < inputLength; valueIdx++)
    {
        fgets(line,19,fp);
        input_values[valueIdx] = atoi(line);
    }

    fclose(fp);

    qsort(&input_values,(long unsigned int)inputLength,sizeof(int),comp);

    fp = fopen(input_filepath,"w");
    if (fp == NULL)
    {
        printf("file output open failed\n");
        return -1;
    }
    for (int valueIdx = 0; valueIdx < inputLength; valueIdx++)
    {
        fprintf(fp,"%i\n",input_values[valueIdx]);
    }

    fclose(fp);



}
