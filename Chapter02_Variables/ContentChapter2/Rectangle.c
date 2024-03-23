#include <stdio.h>

int main()
{
    double a, h, perimeter, area;

    printf("Please input a\n");
    scanf("%lf", &a);
    printf("Please input h\n");
    scanf("%lf", &h);

    perimeter = 2 * a + 2 * h;
    area = a * h;

    printf("The area is %lf\n", area);
    printf("The perimeter is %lf\n", perimeter);


    return 0;
}
