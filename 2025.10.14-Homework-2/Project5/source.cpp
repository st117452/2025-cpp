#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    int cuts = 0;

    if (n == 1)
    {
        cuts = 0;
    }
    else if (n % 2 == 0)
    {
        cuts = n / 2;
    }
    else
    {
        cuts = n;
    }

    printf("%d\n", cuts);

    return 0;
}