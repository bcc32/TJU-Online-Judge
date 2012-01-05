#include <cstdio>
using namespace std;

int f91(int n);

int main(void)
{
    int n;
    for (scanf("%d", &n); n != 0; scanf("%d", &n))
        printf("f91(%d) = %d\n", n, f91(n));
}

int f91(int n)
{
    return n <= 100 ? f91(f91(n + 11)) : n - 10;
}
