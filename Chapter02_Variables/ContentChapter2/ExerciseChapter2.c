#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t age, days, hours, minutes, seconds;

    printf("Enter your age in years: ");
    scanf("%lu",&age);

    days = age * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    printf("You are living since %lu days\n", days);
    printf("You are living since %lu hours\n", hours);
    printf("You are living since %lu minutes\n", minutes);
    printf("You are living since %lu seconds\n", seconds);

    return 0;
}
