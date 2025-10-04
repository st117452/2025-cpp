#include <cstdio>

int main() {
    int n;
    scanf_s("%d", &n);
    int sum = n / 100 + (n / 10) % 10 + n % 10;
    printf("%d\n", sum);
    return 0;
}