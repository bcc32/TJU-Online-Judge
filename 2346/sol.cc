#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long s = 0;
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            s += j;
        cout << s << endl;
    }
}
