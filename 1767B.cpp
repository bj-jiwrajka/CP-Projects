#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + n);
        {
            ll sum = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > sum)
                {
                    sum = (sum + arr[i] + 1) / 2;
                }
            }
            cout << sum << endl;
        }
    }
}

// 10.128.0.2
// 35.232.194.53