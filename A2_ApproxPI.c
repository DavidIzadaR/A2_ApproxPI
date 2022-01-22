// A2_ApproxPI.c
//

#include <stdio.h>
#include <math.h>

double PI = 3.1415926535898;

// Look for better num/den approximations of PI than 22 / 7
// https://tomroelandts.com/articles/fractional-approximations-of-pi

int main()
{
    int     num = 22;
    int     den = 7;
    double  error = fabs((double)num / den - PI);

    printf("22 / 7 => error %E\n", error);
    do
    {
        den++;
        num = (int)floor(den * PI);

        if ((fabs((double)num / den - PI) < error) || (fabs((double)++num / den - PI) < error))
        {
            error = fabs((double)num / den - PI);
            printf("%d / %d => error %E\n", num, den, error);
        }
    } while (den < 10000);
}
