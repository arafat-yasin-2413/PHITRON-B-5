#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // cout<<s<<endl;

    int flag = 0;

    int position = s.find("Jessica");
    int idx_of_last_a = position + 6;
    // cout << "Position = " << position << endl;

    // dui pashei space
    if (s[position - 1] == ' ' && s[position + 7] == ' ')
    {
        // cout << "dui pashei space paisi" << endl;
        flag = 1;
    }

    // shudhu baame space and Jessica diye sesh
    else if (s[position - 1] == ' ' && s[idx_of_last_a + 1] == '\0')
    {
        // cout << "baame space r daane null char paisi r Jessica diyei sesh" << endl;
        // cout << "Jessica er last a = " << idx_of_last_a << endl;
        // cout << "s er length = " << s.size() << endl;
        flag = 1;
    }

    // shudhu daane space and Jessica diyei shuru
    else if (s[0] == 'J' && s[position + 7] == ' ')
    {
        // cout << "Shudhu daane space paisi. Jessica diye shuru hoise" << endl;
        flag = 1;
    }

    // dui pashei no space
    else if (s.size() == 7)
    {
        // cout << "Only Jessica paisi" << endl;
        flag = 1;
    }

    else
    {
        // cout << "kichui pai nai" << endl;
        flag = 0;
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