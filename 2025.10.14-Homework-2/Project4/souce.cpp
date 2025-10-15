#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);

    int d1 = n / 100000;
    int d2 = (n / 10000) % 10;
    int d3 = (n / 1000) % 10;
    int d4 = (n / 100) % 10;
    int d5 = (n / 10) % 10;
    int d6 = n % 10;

    int sum_first = d1 + d2 + d3;
    int sum_last = d4 + d5 + d6;

    bool happy = false;

    if (sum_first == sum_last)
    {
        happy = true;
    }

    if (happy)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}