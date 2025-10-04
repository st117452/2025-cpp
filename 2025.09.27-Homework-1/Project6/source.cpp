#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int total = a + b - 1;
    int c = total - a;
    int d = total - b;
    printf("%d %d", c, d);
    return 0;
}