#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, t;
    cin >> x >> y >> t;

    int flag = 0;
    if (t >= x && t >= y)
    {
        if (t % x == 0)
        {
            flag = 1;
        }

        if (t % y == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}