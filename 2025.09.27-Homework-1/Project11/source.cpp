#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);
    long long h = (n + 1) / 2;
    long long r = h * h;
    printf("%lld", r);
    return 0;
}