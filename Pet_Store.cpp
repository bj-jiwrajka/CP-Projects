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
        bool ans = 1;
        ll brr[101] = {0};
        for (int i = 0; i < n; i++)
        {
            brr[arr[i]]++;
        }
        // for (int i = 0; i < 101; i++)
        // {
        //     cout<<brr[i]<<" ";
        // }
        // cout<<endl;

        for (int i = 0; i < 101; i++)
        {
            if (brr[i] % 2 != 0)
            {
                ans = 0;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}