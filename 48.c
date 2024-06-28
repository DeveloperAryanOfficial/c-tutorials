#include <stdio.h>
#include "40.c"
#define PI 3.14
#define SQUARE(r) r*r

int main ()
{
    float var = PI;
    printf("This is me %f",var);

    int r = 4;
    printf("The area of this circle is : %f",PI * SQUARE(r));



    return 0;
}