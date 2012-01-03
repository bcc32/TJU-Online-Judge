#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        for (int j = 0; j < n; j++)
        {
            char x, y;
            cin >> x >> y;
            if ((x == 'R' && y == 'S') || (x == 'S' && y == 'P') ||
                (x == 'P' && y == 'R'))
                a++;
            else if ((y == 'R' && x == 'S') || (y == 'S' && x == 'P') ||
                (y == 'P' && x == 'R'))
                b++;
        }
        if (a > b)
            cout << "Player 1" << endl;
        else if (a < b)
            cout << "Player 2" << endl;
        else
            cout << "TIE" << endl;
    }
}
