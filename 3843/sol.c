#include <stdio.h>
#include <stdlib.h>

int *v;

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int m, n, i, x, c;
    while (scanf("%d%d", &m, &n) == 2)
    {
        c = 0;
        v = (int *)malloc(m * sizeof(int));
        for (i = 0; i < m; i++)
            scanf("%d", v + i);
        qsort(v, m, sizeof(int), cmp);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (bsearch(&x, v, m, sizeof(int), cmp) != NULL)
                c++;
        }
        printf("%d\n", c);
        free(v);
    }
}
