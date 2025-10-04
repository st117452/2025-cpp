#include<cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    scanf_s("%lld", &a);
    long long n = a / 10;
    long long r = n * (n + 1) * 100 + 25;
    printf("%lld\n", r);
    return 0;
}