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
        // jodi shurutei Jessica thake
        if (s[0] == 'J') // Jessica Rifat
        {
            if (s.size() > 7) // Jessica Rifat
            {
                if (s[position + 7] == ' ')
                {
                    flag = 1;
                    // cout<<"Jessica paisi"<<endl;
                    // cout << "eikhane aschi 1" << endl;
                }
            }
            else if (s.size() == 7) // Jessica
            {
                if (s == "Jessica")
                {
                    flag = 1;
                    // cout<<"Paisi"<<endl;
                    // cout << "eikhane aschi 2" << endl;
                }
            }
        }

        // jodi ekdom seshe Jessica thake
        else if (s[position + 6] == 'a')
        {
            // char x3 = s[position + 6];
            if (position + 6 == s.size() - 1)
            {
                flag = 1;
                // cout << "eikhane aschi 3" << endl;
            }
        }

        // Jessicar ashe pashe jodi kichu thake
        else if (s[position - 1] == ' ' && s[position + 7] == ' ')
        {
            flag = 1;
            // cout << "eikhane aschi 4" << endl;
        }

        else if (s[position - 1] != ' ' && s[position + 7] != ' ')
        {
            char x1 = s[position - 1];
            char x2 = s[position + 7];
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
            // cout << "eikhane aschi 5" << endl;
            if ((x1 >= 'a' && x1 <= 'z') or (x1 >= 'A' && x2 <= 'Z'))
            {
                flag = 0;
                // cout << "eikhane aschi 6" << endl;
            }
        }
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