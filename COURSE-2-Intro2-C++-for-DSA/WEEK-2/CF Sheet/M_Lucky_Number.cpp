#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()

{
    // number input
    // convert the number into a string
    // iterate over the string if(4 or 7 then Lucky)

    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        int n = i;
        // cin >> n;

        string st;
        while (n != 0)
        {
            int d = n % 10;
            n = n / 10;
            char x = '0' + d;
            st += x;
        }

        // cout << st << endl;

        int flag = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] - '0' == 4 || st[i] - '0' == 7)
            {
                continue;
            }

            else
            {
                flag = 1;
            }
        }

        // cout << flag << endl;
        if (flag == 1)
        {
            count++;
            continue;
        }

        else
        {
            cout << st << " ";
        }
    }

    // cout<<"Loop cholse = "<<b-a+1 <<" times "<<endl;
    // cout<<"count = "<<count<<endl;

    if (count == b - a + 1)
    {
        cout << -1 << endl;
    }

    return 0;
}