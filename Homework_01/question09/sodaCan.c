#include <stdio.h>
#define PI 3.1415

void main()
{
        float radius_in_inches = 2.5;
        int height_in_inches = 6;
        float surface_area_of_can = 2 * PI * radius_in_inches * radius_in_inches + 2 * PI * radius_in_inches * height_in_inches;
        printf("%f", surface_area_of_can);
        return;
}

