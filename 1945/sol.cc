#include <cstdio>
#define cube(x) ((x) * (x) * (x))

int main(void)
{
    for (int a = 2; a <= 200; a++)
        for (int b = 2; b < a; b++)
            for (int c = b; c < a; c++)
            {
                if (cube(a) < cube(b) + cube(c))
                    break;
                for (int d = c; d < a; d++)
                {
                    int x = cube(a) - cube(b) - cube(c) - cube(d);
                    if (x == 0)
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                    else if (x < 0)
                        break;
                }
            }
}
