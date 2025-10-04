#include<cstdio>

int main(int argc, char** argv)
{
    int k = 0;
    int n = 0;
    scanf_s("%d", &k);
    scanf_s("%d", &n);
    int p = (n - 1) / k + 1;
    int l = (n - 1) % k + 1;
    printf("%d %d\n", p, l);
    return 0;
}