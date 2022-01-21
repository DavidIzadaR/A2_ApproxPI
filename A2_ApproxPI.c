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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
