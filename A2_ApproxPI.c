// A2_ApproxPI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Look for a better approximation of PI as a fraction than 22 / 7
// https://tomroelandts.com/articles/fractional-approximations-of-pi

int main()
{
    int a, b;
    int i;
    float result;

    while (1)
    {
        printf("Enter a fraction: ");
        i = scanf("%d / %d", &a, &b);
        if (i != 2)
        {
            printf("Please, correct the fraction!");
            continue;
        }
        result = (float)a / b;
        printf("The difference between %f and PI is %f ...", result, fabs(result - PI));

        if (fabs(result - PI) < 0.0001)
            break;
        else
            printf(" try again.\n");
    }

    printf("\n");
}
