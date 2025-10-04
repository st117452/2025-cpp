#include<cstdio>

int main(int argc, char** argv)
{
    long long v = 0;
    long long t = 0;
    scanf_s("%lld", &v);
    scanf_s("%lld", &t);
    const long long l = 109;
    long long d = v * t;
    long long p = ((d % l) + l) % l;
    printf("%lld\n", p + 1);
    return 0;
}