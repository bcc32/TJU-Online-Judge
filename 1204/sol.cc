#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    int m, n;
    cin >> m >> n;
    cin.ignore(1, '\n');
    vector<string> v(m);
    for (int i = 0; i < m; i++)
        getline(cin, v[i]);
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    int d = 1;
    char ch;
    for (cin >> ch; ch != 'Q'; cin >> ch)
    {
        if (ch == 'R')
            d = (d + 3) % 4;
        else if (ch == 'L')
            d = (d + 1) % 4;
        else if (ch == 'F')
            switch (d)
            {
            case 0:
                if (y < v[x].size() - 1 && v[x][y + 1] == ' ')
                    y++;
                break;
            case 1:
                if (x > 0 && v[x - 1][y] == ' ')
                    x--;
                break;
            case 2:
                if (y > 0 && v[x][y - 1] == ' ')
                    y--;
                break;
            case 3:
                if (x < v.size() - 1 && v[x + 1][y] == ' ')
                    x++;
                break;
            }
    }
    cout << x + 1 << " " << y + 1 << " " <<
        (d < 2 ? (d == 0 ? 'E' : 'N') : (d == 2 ? 'W' : 'S')) << endl;
}
