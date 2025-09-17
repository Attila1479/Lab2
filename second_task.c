#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables<-- These are comments, you can remove them if you want to
    float x1, y1, x2, y2;

    // get user input
    printf("Give me the coordinates of the first point: ");
    scanf("%f %f", &x1, &y1);
    printf("Give me the coordinates of the second point: ");
    scanf("%f %f", &x2, &y2);
    // calculate the length
    float l = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    // print the result
    printf("The distance is: %f", l);

    return 0;
}