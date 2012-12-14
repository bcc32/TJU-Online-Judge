#include <stdio.h>
#include <stdlib.h>

char grid[3][3];

int valid();

int main(void)
{
    int n, _n, i, j;
    scanf("%d", &n);
    for (_n = 0; _n < n; _n++)
    {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                scanf(" %c", &grid[i][j]);
        if (valid())
            printf("yes\n");
        else
            printf("no\n");
    }
}

int valid()
{
    int c = 0, x = 0, o = 0, i, j;
    if (grid[0][0] == grid[1][0] && grid[0][0] == grid[2][0] &&
            grid[0][0] != '.')
        c++;
    if (grid[0][1] == grid[1][1] && grid[0][1] == grid[2][1] &&
            grid[0][1] != '.')
        c++;
    if (grid[0][2] == grid[1][2] && grid[0][2] == grid[2][2] &&
            grid[0][2] != '.')
        c++;
    if (grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2] &&
            grid[0][0] != '.')
        c++;
    if (grid[1][0] == grid[1][1] && grid[1][0] == grid[1][2] &&
            grid[1][0] != '.')
        c++;
    if (grid[2][0] == grid[2][1] && grid[2][0] == grid[2][2] &&
            grid[2][0] != '.')
        c++;
    if (grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2] &&
            grid[0][0] != '.')
        c++;
    if (grid[2][0] == grid[1][1] && grid[2][0] == grid[0][2] &&
            grid[2][0] != '.')
        c++;
    if (c > 1)
        return 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (grid[i][j] == 'X')
                x++;
            else if (grid[i][j] == 'O')
                o++;
    if (o > x)
        return 0;

    return 1;
}
