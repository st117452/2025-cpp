#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    long long s = (long long)a + b + c;
    printf("%lld", s);
    return 0;
}