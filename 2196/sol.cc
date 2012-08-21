#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

bool cmp(string a, string b);

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        priority_queue< int, vector<int>, greater<int> > q;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == 'B')
            {
                int x;
                cin >> x;
                q.push(x);
            }
            else if (c == 'G')
            {
                cout << q.top() << endl;
                q.pop();
            }
        }
    }
}
