#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int i, n;
    int *c, *d;
    char a[50], b[50];
    scanf("%d", &n);
    fgetc(stdin); // flush
    for (i = 0; i < n; i++)
    {
        int j, k, x = 0;
        char ch;
        c = (int *)calloc(26, sizeof(int));
        d = (int *)calloc(26, sizeof(int));
        fgets(a, 50, stdin);
        fgets(b, 50, stdin);
        for (j = 0; j < strlen(a); j++)
            if (a[j] >= 'a' && a[j] <= 'z')
                c[(int)a[j] - (int)'a']++;
        for (k = 0; k < strlen(b); k++)
            if (b[k] >= 'a' && b[k] <= 'z')
                d[(int)b[k] - (int)'a']++;
        for (ch = 'a'; ch <= 'z'; ch++)
            x += abs(c[(int)ch - (int)'a'] - d[(int)ch - (int)'a']);
        printf("Case #%d:  %d\n", i + 1, x);
        free(c);
        free(d);
    }
}
