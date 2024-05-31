#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // cout << s << endl;

    // int position = s.find(" Jessica ");
    // cout << position << endl;

    int flag = 0;
    // if (position != -1)
    // {
    //     flag = 1;
    // }
    if (s.size() == 7)
    {
        int position = s.find("Jessica");
        if (position != -1)
        {
            flag = 1;
        }
    }

    else if (s[0] == 'J')
    {
        int position = s.find("Jessica ");
        if (position != -1)
        {
            flag = 1;
        }
    }

    else
    {
        int temp_pos = s.find("Jessica");

        if (s[temp_pos - 1] == ' ' && s[s.size() - 1] == '\0') // Ratul Rahat Jessica
        {
            int position = s.find(" Jessica");
            if (position != -1)
            {
                flag = 1;
            }
        }

        else if (s[temp_pos - 1] == ' ' && s[temp_pos + 7] == ' ') // Ratul Jessica Rahat
        {
            int position = s.find(" Jessica ");
            if (position != -1)
            {
                flag = 1;
            }
        }

        else // Ratul Jessicabcd Munna
        {
            flag = 0;
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}