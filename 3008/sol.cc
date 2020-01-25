#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> moves;
vector<int> v;

int search(int);
int flip(int);
void negate(int &);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        v.clear();
        int m;
        cin >> m;
        v.resize(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
    }
}

int search(int);

int flip(int n)
{
    reverse(v.begin(), v.begin() + n);
    for_each(v.begin(), v.begin() + n, negate);
}

void negate(int &n)
{
    n = -n;
}
