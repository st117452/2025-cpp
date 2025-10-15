#include <cstdio>

int main(int argc, char** argv)
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    int abs_dx = (dx > 0) ? dx : -dx;
    int abs_dy = (dy > 0) ? dy : -dy;

    bool queen_move = false;

    if (dx == 0 || dy == 0 || abs_dx == abs_dy)
    {
        queen_move = true;
    }

    if (queen_move)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}