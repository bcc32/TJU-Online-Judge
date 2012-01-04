#include <iostream>
using namespace std;

void tri(int h);
void par(int w, int h);
void rec(int w, int h);

int main(void)
{
    int n;
    for (cin >> n; n != -1; cin >> n)
    {
        int h, w;
        if (n == 1)
        {
            cin >> h;
            tri(h);
        }
        else
        {
            cin >> w >> h;
            if (n == 2)
                par(w, h);
            else
                rec(w, h);
        }
        cout << endl;
    }
}

void tri(int h)
{
    for (int i = h - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * h - 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}

void par(int w, int h)
{
    for (int i = h - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < w; j++)
            cout << "*";
        cout << endl;
    }
}

void rec(int w, int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cout << "*";
        cout << endl;
    }
}
