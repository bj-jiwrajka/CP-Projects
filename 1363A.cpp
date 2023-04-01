#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cntodd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] & 1)
            {
                cntodd++;
            }
        }
        if (cntodd == 0 or ( cntodd % 2 == 0 and x==n) or (cntodd==n and x%2==0))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}