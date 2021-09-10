#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <txlib.h>

int main()
{
    double a = 0, b = 0, c = 0;
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
            x = -b/2*a;
            printf("Корни совпадают. x1 = x2 = %lf", x);

        }
        else
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %lf x2 = %lf", x1, x2);
        }
    }
    return 0;
}
