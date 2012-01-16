#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        queue<int> q;
        int x;
        cin >> x;
        for (int j = 0; x > 0; j++)
        {
            if (x % 2 > 0)
                q.push(j);
            x /= 2;
        }
        while (q.size() > 1)
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << q.front() << endl;
    }
}
