#include <cstdio>

int main(void)
{
    int n;
    for (scanf("%d", &n); n != 0; scanf("%d", &n))
        printf("%d\n", (n % 9 == 0) ? 9 : n % 9);
}
