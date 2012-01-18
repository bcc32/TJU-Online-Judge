#include <cstdio>

int gcd(int a, int b);

int main(void)
{
    int a, b;
    for (scanf("%d%d", &a, &b); !feof(stdin); scanf("%d%d", &a, &b))
        if (gcd(a, b) == 1)
            printf("%10d%10d    Good Choice\n\n", a, b);
        else
            printf("%10d%10d    Bad Choice\n\n", a, b);
}

int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    while (a % b > 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return b;
}
