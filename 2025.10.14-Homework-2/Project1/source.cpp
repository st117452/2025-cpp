#include <cstdio>

int main(int argc, char** argv)
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);

    bool pawn_move = false;

    if (x1 == x2)
    {
        if (y1 == 2 && y2 == 3)
        {
            pawn_move = true;
        }
        else if (y1 == 2 && y2 == 4)
        {
            pawn_move = true;
        }
        else if (y1 >= 3 && y2 == y1 + 1)
        {
            pawn_move = true;
        }
    }

    if (pawn_move)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}