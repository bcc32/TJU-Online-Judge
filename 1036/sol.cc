#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int m;
        for (cin >> m; m != 0; cin >> m)
        {
            queue<int> a, b;
            stack<int> s;
            a.push(m);
            for (int i = 1; i < n; i++)
            {
                int x;
                cin >> x;
                a.push(x);
            }
            for (int i = 1; i <= n; i++)
                b.push(i);
            while (!a.empty())
            {
                if (!s.empty() && s.top() == a.front())
                {
                    a.pop();
                    s.pop();
                }
                else if (!b.empty() && b.front() == a.front())
                {
                    a.pop();
                    b.pop();
                }
                else if (b.empty() && !s.empty())
                    break;
                else
                {
                    s.push(b.front());
                    b.pop();
                }
            }
            if (!a.empty())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        cout << endl;
    }
}
