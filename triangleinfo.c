#include <stdio.h>
#include <math.h>

int main()
{
    int sides[3];

    printf("Enter side 1: ");
    scanf("%i", &sides[0]);
    printf("Enter side 2: ");
    scanf("%i", &sides[1]);
    printf("Enter side 3: ");
    scanf("%i", &sides[2]);

    // is a triangle
    if (sides[0] + sides[1] > sides[2] && sides[1] + sides[2] > sides[0] && sides[0] + sides[2] > sides[1])
    {
        // equilateral
        if (sides[0] == sides[1] && sides[1] == sides[2] && sides[0] == sides[2])
        {
            printf("equilateral\n");
        }

        // isosceles
        if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2])
        {
            printf("isosceles\n");
        }

        // scalene
        if (!(sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2]))
        {
            printf("scalene\n");
        }

        // compute and print area
        double s = 0.5 * (sides[0] + sides[1] + sides[2]);
        double area = sqrt(s * (s - sides[0]) * (s - sides[1]) * (s - sides[2]));

        printf("area: %lf", area);

        return 0;
    }

    // not a triangle
    printf("impossible");

    return 0;
}