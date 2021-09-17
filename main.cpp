#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <txlib.h>

const int Inf = -1;

int SolveLinear(double a, double b, double *root)
{
    if (a == 0)
    {
        return Inf;
    }
    else
    {
        *root = -b / a;

        return 1;
    }
}
int SolveQuadratic(double a, double b, double c, double *root1, double *root2)
{
    if (a == 0)
    {
        int RN = SolveLinear(b, c, root1);
        *root2 = *root1;
        return RN;
    }
    else
    {
        double d = b * b - 4 * a * c;
    if (d < 0)
        {
            return 0;
        }
        else if (d == 0)
        {
            *root1 = -b / (2 * a);

            return 1;
        }
        else
        {
            *root1 = (-b + sqrt(d)) / (2 * a);
            *root2 = (-b - sqrt(d)) / (2 * a);

            return 2;
        }
    }

}
int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);

    double root = 0, root1 = 0, root2 = 0;
    int RN = 0;
    RN = SolveQuadratic(a, b, c, &root1, &root2);
    switch(RN)
    {
        case Inf:
            printf("Infinity Roots");
            break;
        case 0:
            printf("No roots");
            break;
        case 1:
            printf("root1: %lf, number root: %d", root1, RN);
            break;
        case 2:
            printf("root1: %lf, root2: %lf, number root: %d", root1, root2, RN);
            break;

     }

    return 0;

}





    /*double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = b * b - 4 * a * c;
    double x = 0, x1 = 0, x2 = 0;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Нет уравнения.");
        }
        else
        {
            x = -c / b;
            printf("x = %lf", x);
        }
    }
    else
    {
        if (d < 0)
        {
            printf("Корней нет.");
        }
        else if (d == 0)
        {
            x = -b / (2 * a);
            printf("Корни совпадают. x1 = x2 = %lf", x);

        }
        else
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %lf x2 = %lf", x1, x2);
        }
    }
    return 0;*/


     /*if (a == 0){

    int q = SolveLinear(b, c, &root);
    printf("root: %lf, number root: %lf", root, q);

    }
    else
    {
    int q = SolveQuadratic(a, b, c, &root1, &root2);
    printf("root1: %lf, root2: %lf, number root: %lf", root1, root2, q);
    }   */

