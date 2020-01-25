#include <stdio.h>
#include <stdlib.h>

const int LIM = 10000000;

typedef struct
{
    short n, d;
} frac;

frac *set;
int c = 0;

void init();
void mark(int, int);

int main(void)
{
    set = (frac *)malloc(LIM * sizeof(frac));
    init();

    int n;
    while (scanf("%d", &n) == 1)
        printf("TERM %d IS %d/%d\n", n, set[n - 1].n, set[n - 1].d);

    free(set);
}

void init()
{
    int i, j;
    for (i = 1; i * (i + 1) / 2 <= LIM; i++)
        if (i % 2 == 0)
            for (j = 1; j <= i; j++)
                mark(j, i + 1 - j);
        else
            for (j = i; j >= 1; j--)
                mark(j, i + 1 - j);
}

void mark(int n, int d)
{
    set[c].n = n;
    set[c].d = d;
    c++;
}
