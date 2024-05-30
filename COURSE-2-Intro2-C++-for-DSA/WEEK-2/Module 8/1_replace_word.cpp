#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, x;
        cin >> s;
        cin >> x;
        getchar();
        // cout << s << endl
        //      << x << endl;

        while (s.find(x) != -1)
        {
            int len_of_x = x.size();
            s.replace(s.find(x), len_of_x, "#");
        }
        // cout << s << endl
        //      << x << endl;
        cout << s << endl;
    }

    return 0;
}