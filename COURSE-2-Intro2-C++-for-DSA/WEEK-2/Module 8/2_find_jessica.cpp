#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // cout << s << endl;

    int position = s.find("Jessica");
    // cout << position << endl;

    int flag = 0;
    if (position != -1)
    {
        if (s[position - 1] == ' ' && s[position + 7] == ' ')
        {
            flag = 1;
        }
    }
    else
    {
        flag = 0;
    }

    // cout << flag << endl;
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