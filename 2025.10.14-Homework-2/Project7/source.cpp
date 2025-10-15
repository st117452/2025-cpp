#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf_s("%d %d %d", &a, &b, &c);

    bool printed = false;

    if (a != 0)
    {
        printf("%d", a);
        printed = true;
    }

    if (b != 0)
    {
        if (printed && b > 0)
        {
            printf("+");
        }
        if (b == 1)
        {
            printf("x");
        }
        else if (b == -1)
        {
            printf("-x");
        }
        else
        {
            printf("%dx", b);
        }
        printed = true;
    }

    if (c != 0)
    {
        if (printed && c > 0)
        {
            printf("+");
        }
        if (c == 1)
        {
            printf("y");
        }
        else if (c == -1)
        {
            printf("-y");
        }
        else
        {
            printf("%dy", c);
        }
        printed = true;
    }

    if (!printed)
    {
        printf("0");
    }

    printf("\n");

    return 0;
}