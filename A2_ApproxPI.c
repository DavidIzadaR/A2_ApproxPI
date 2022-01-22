// A2_ApproxPI.c
//

#include <stdio.h>
#include <math.h>

// PI as double precision
double PI = 3.1415926535898;

// Macro for calculating the difference between
// PI and the fraction n / d
#define Diff(n, d) fabs((double)n / d - PI)

// Look for better num/den approximations of PI than 22 / 7
// https://tomroelandts.com/articles/fractional-approximations-of-pi

int main()
{
    int     num = 22;
    int     den = 7;
    double  error = fabs((double)num / den - PI);

    printf("22 / 7 => error %E\n", error);
    for (den = 8; den < 10000; den++)
    {
        num = (int)floor(den * PI);

        if ((Diff(num, den) < error) || (Diff(++num, den) < error))
        {
            error = Diff(num, den);
            printf("%d / %d => error %E\n", num, den, error);
        }
    }
}
