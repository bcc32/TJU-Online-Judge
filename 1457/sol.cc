#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s, d;
        cin >> s >> d;
        if (s > d && (s - d) % 2 == 0)
            cout << (s + d) / 2 << " " << (s - d) / 2 << endl;
        else
            cout << "impossible" << endl;
    }
}
