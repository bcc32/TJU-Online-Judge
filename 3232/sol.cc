#include <iostream>
#include <vector>
using namespace std;

bool validq(vector<int> v);
void move(vector<int> &v);

int main(void)
{
    int a, b, c, n;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    for (n = 0; validq(v); n++)
        move(v);
    cout << n << endl;
}

bool validq(vector<int> v)
{
    return v[2] - v[1] != 1 || v[1] - v[0] != 1;
}

void move(vector<int> &v)
{
    int t = v[1];
    if (v[2] - v[1] > v[1] - v[0])
    {
        v[1] = v[2] - 1;
        v[0] = t;
    }
    else
    {
        v[1] = v[0] + 1;
        v[2] = t;
    }
}
