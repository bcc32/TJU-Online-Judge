#include <cstdio>
#include <vector>
using namespace std;

int min(vector<int>::iterator f, vector<int>::iterator b);
int max(vector<int>::iterator f, vector<int>::iterator b);

int main(void)
{
    int n, q;
    scanf("%d%d", &n, &q);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (int i = 0; i < q; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", max(v.begin() + a - 1, v.begin() + b) - 
            min(v.begin() + a - 1, v.begin() + b));
    }
}

int min(vector<int>::iterator a, vector<int>::iterator b)
{
    int m = *a;
    for (vector<int>::iterator it = a + 1; it < b; it++)
        if (*it < m)
            m = *it;
    return m;
}

int max(vector<int>::iterator a, vector<int>::iterator b)
{
    int m = *a;
    for (vector<int>::iterator it = a + 1; it < b; it++)
        if (*it > m)
            m = *it;
    return m;
}
