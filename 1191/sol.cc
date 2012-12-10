#include <iostream>
#include <cstdio>
#include <deque>
#include <vector>
#include <utility>
using namespace std;

deque< pair<int, int> > pos(20);

bool collide(pair<int, int>);
void init();

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        bool runoff = false;
        bool itself = false;
        int index = -1;
        init();
        vector<char> v(n);
        for (int i = 0; i < n; i++)
            scanf(" %c", &v[i]);
        for (vector<char>::iterator it = v.begin(); it != v.end(); ++it)
        {
            switch (*it)
            {
            case 'N':
                if (pos.back().first <= 1)
                {
                    runoff = true;
                    index = it - v.begin();
                    goto done;
                }
                if (collide(make_pair(pos.back().first - 1, pos.back().second)))
                {
                    itself = true;
                    index = it - v.begin();
                    goto done;
                }
                pos.pop_front();
                pos.push_back(make_pair(pos.back().first - 1,
                    pos.back().second));
                break;
            case 'E':
                if (pos.back().second >= 50)
                {
                    runoff = true;
                    index = it - v.begin();
                    goto done;
                }
                if (collide(make_pair(pos.back().first, pos.back().second + 1)))
                {
                    itself = true;
                    index = it - v.begin();
                    goto done;
                }
                pos.pop_front();
                pos.push_back(make_pair(pos.back().first,
                    pos.back().second + 1));
                break;
            case 'S':
                if (pos.back().first >= 50)
                {
                    runoff = true;
                    index = it - v.begin();
                    goto done;
                }
                if (collide(make_pair(pos.back().first + 1, pos.back().second)))
                {
                    itself = true;
                    index = it - v.begin();
                    goto done;
                }
                pos.pop_front();
                pos.push_back(make_pair(pos.back().first + 1,
                    pos.back().second));
                break;
            case 'W':
                if (pos.back().second <= 1)
                {
                    runoff = true;
                    index = it - v.begin();
                    goto done;
                }
                if (collide(make_pair(pos.back().first, pos.back().second - 1)))
                {
                    itself = true;
                    index = it - v.begin();
                    goto done;
                }
                pos.pop_front();
                pos.push_back(make_pair(pos.back().first,
                    pos.back().second - 1));
                break;
            }
        }

        done:
            if (runoff)
                printf("The worm ran off the board on move %d.\n", index + 1);
            else if (itself)
                printf("The worm ran into itself on move %d.\n", index + 1);
            else
                printf("The worm successfully made all %lu moves.\n", v.size());
        ;
    }
}

bool collide(pair<int, int> p)
{
    for (deque< pair<int, int> >::iterator it = pos.begin() + 1;
            it != pos.end(); ++it)
        if (*it == p)
            return true;
    return false;
}

void init()
{
    int i = 11;
    for (deque< pair<int, int> >::iterator it = pos.begin(); it != pos.end();
            ++it)
        *it = make_pair(25, i++);
}
