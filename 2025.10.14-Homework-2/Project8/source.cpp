#include <cstdio>
#include <cmath>

int main(int argc, char** argv)
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0.0)
    {
        if (b == 0.0)
        {
            if (c == 0.0)
            {
                printf("-1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            double x = -c / b;
            printf("1\n%.6lf\n", x);
        }
    }
    else
    {
        double d = b * b - 4.0 * a * c;

        if (d < 0.0)
        {
            printf("0\n");
        }
        else if (d == 0.0)
        {
            double x = -b / (2.0 * a);
            printf("1\n%.6lf\n", x);
        }
        else
        {
            double sqrt_d = sqrt(d);
            double x1 = (-b + sqrt_d) / (2.0 * a);
            double x2 = (-b - sqrt_d) / (2.0 * a);

            if (x1 > x2)
            {
                double temp = x1;
                x1 = x2;
                x2 = temp;
            }

            printf("2\n%.6lf\n%.6lf\n", x1, x2);
        }
    }

    return 0;
}