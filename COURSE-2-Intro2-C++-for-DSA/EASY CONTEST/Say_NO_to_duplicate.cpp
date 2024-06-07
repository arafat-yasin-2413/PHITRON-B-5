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

        for (int i = 0; i < n - 1; i++)
        {
            if (i == n - 2)
            {
                cout << ar[i] << " ";
                if (ar[i] != ar[i + 1])
                {
                    cout << ar[i + 1] << " ";
                    break;
                }
            }
            if (ar[i] == ar[i + 1])
            {
                continue;
            }
            else if (ar[i] != ar[i + 1])
            {
                cout << ar[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}