#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    long long m = 0;
    scanf_s("%lld", &n);
    scanf_s("%lld", &m);
    long long r = (n - 1) * (m - 1) + 1;
    printf("%lld\n", r);
    return 0;
}