#include <bits/stdc++.h>
using namespace std;

int main()
{
    // WA on Test 3
    
    int x, y, t;
    cin >> x >> y >> t;

    int flag = 0;
    if (t % x == 0 or t % y == 0)
    {
        flag = 1;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else if (flag == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}