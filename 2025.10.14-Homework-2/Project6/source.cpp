#include <cstdio>

int main(int argc, char** argv)
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    scanf_s("%d %d %d", &a1, &b1, &c1);
    scanf_s("%d %d %d", &a2, &b2, &c2);

    int x1 = a1;
    int y1 = b1;
    int z1 = c1;

    if (x1 > y1)
    {
        int temp = x1;
        x1 = y1;
        y1 = temp;
    }
    if (x1 > z1)
    {
        int temp = x1;
        x1 = z1;
        z1 = temp;
    }
    if (y1 > z1)
    {
        int temp = y1;
        y1 = z1;
        z1 = temp;
    }

    int x2 = a2;
    int y2 = b2;
    int z2 = c2;

    if (x2 > y2)
    {
        int temp = x2;
        x2 = y2;
        y2 = temp;
    }
    if (x2 > z2)
    {
        int temp = x2;
        x2 = z2;
        z2 = temp;
    }
    if (y2 > z2)
    {
        int temp = y2;
        y2 = z2;
        z2 = temp;
    }

    if (x1 == x2 && y1 == y2 && z1 == z2)
    {
        printf("Boxes are equal\n");
    }
    else if (x1 <= x2 && y1 <= y2 && z1 <= z2)
    {
        printf("The first box is smaller than the second one\n");
    }
    else if (x2 <= x1 && y2 <= y1 && z2 <= z1)
    {
        printf("The first box is larger than the second one\n");
    }
    else
    {
        printf("Boxes are incomparable\n");
    }

    return 0;
}