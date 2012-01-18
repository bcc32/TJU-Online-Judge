#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.size() > b.size() || (a.size() >= b.size() && a >= b))
            cout << "MMM BRAINS" << endl;
        else
            cout << "NO BRAINS" << endl;
    }
}
