#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar, ar + n);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ar[i] << " ";
        // }
        // cout << endl;

        int second_last = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] == ar[i + 1])
            {
                continue;
            }

            else if (ar[i] != ar[i + 1])
            {
                if (i == n - 2)
                {
                    cout << ar[i] << " ";
                    second_last = ar[i];
                }
                else
                {
                    cout << ar[i] << " ";
                }
            }
        }
        if (ar[n - 1] != second_last)
        {
            cout << ar[n - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}