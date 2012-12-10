// TODO FIX 6-stone issue
#include <iostream>
using namespace std;

int main(void)
{
    const int LEN = 19;
    int n;
    cin >> n;
    for (int _n = 0; _n < n; _n++)
    {
        int v[LEN][LEN];
        int winner = 0;
        int x = -1, y = -1;
        for (int i = 0; i < LEN; i++)
            for (int j = 0; j < LEN; j++)
                cin >> v[i][j];
        for (int i = 0; i < LEN; i++)
            for (int j = 0; j < LEN - 4; j++)
                if (v[i][j] > 0 && v[i][j] == v[i][j + 1] &&
                        v[i][j] == v[i][j + 2] && v[i][j] == v[i][j + 3] &&
                        v[i][j] == v[i][j + 4])
                {
                    winner = v[i][j];
                    x = i;
                    y = j;
                    goto done;
                }
        for (int i = 0; i < LEN - 4; i++)
            for (int j = 0; j < LEN; j++)
                if (v[i][j] > 0 && v[i][j] == v[i + 1][j] &&
                        v[i][j] == v[i + 2][j] && v[i][j] == v[i + 3][j] &&
                        v[i][j] == v[i + 4][j])
                {
                    winner = v[i][j];
                    x = i;
                    y = j;
                    goto done;
                }
        for (int i = 0; i < LEN - 4; i++)
            for (int j = 0; j < LEN - 4; j++)
                if (v[i][j] > 0 && v[i][j] == v[i + 1][j + 1] &&
                        v[i][j] == v[i + 2][j + 2] &&
                        v[i][j] == v[i + 3][j + 3] &&
                        v[i][j] == v[i + 4][j + 4])
                {
                    winner = v[i][j];
                    x = i;
                    y = j;
                    goto done;
                }
        for (int i = 0; i < LEN - 4; i++)
            for (int j = 4; j < LEN; j++)
                if (v[i][j] > 0 && v[i][j] == v[i + 1][j - 1] &&
                    v[i][j] == v[i + 2][j - 2] &&
                    v[i][j] == v[i + 3][j - 3] &&
                    v[i][j] == v[i + 4][j - 4])
                {
                    winner = v[i + 4][j - 4];
                    x = i + 4;
                    y = j - 4;
                    goto done;
                }

        done:
        cout << winner << endl;
        if (winner > 0)
            cout << x + 1 << " " << y + 1 << endl;
    }
}
