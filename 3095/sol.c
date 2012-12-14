#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long x;
    int y;
    scanf("%lld %d", &x, &y);
    if (x < (1LL << y + 1))
        printf("yes\n");
    else
        printf("no\n");
}
