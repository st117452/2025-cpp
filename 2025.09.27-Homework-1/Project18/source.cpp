#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);
    long long a = (n + 9) / 10;
    printf("%lld\n", a);
    return 0;
}