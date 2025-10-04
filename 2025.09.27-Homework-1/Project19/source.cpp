#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int f = (a % b == 0) || (b % a == 0);
    int r = 2 - f;
    printf("%d\n", r);
    return 0;
}