#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    long long k = 0;
    scanf_s("%lld", &n);
    scanf_s("%lld", &k);
    long long e = k / n;
    long long b = k % n;
    long long o = (n - b) * (b != 0);
    printf("%lld %lld %lld\n", e, b, o);
    return 0;
}