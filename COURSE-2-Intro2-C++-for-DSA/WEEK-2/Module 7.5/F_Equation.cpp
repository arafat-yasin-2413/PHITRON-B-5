#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, n;
    cin >> x >> n;

    

    double result = 0;

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            double power=i;
            result += pow(x, power);
        }
    }
    cout << result << endl;

    return 0;
}