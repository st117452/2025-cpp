#include<cstdio>

int main(int argc, char** argv)
{
    int k = 0;
    scanf_s("%d", &k);
    int s = (k - 1) * 5 * (k > 1);
    printf("%d", s);
    return 0;
}