// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> M;

        for (int i = 0; i<n; i++)
        {

            if (M.find(arr[i]) == M.end())
            {
                M[arr[i]] = 1;
            }

            else
            {
                M[arr[i]]++;
            }
        }

        bool check = 0;
        for (auto it : M)
        {
            if (it.second & 1)
            {
                cout << "Marichka" << endl;
                check = 1;
                break;
            }
        }
        if (!check)
        {
            cout << "Zenyk" << endl;
        }

        // set<int> s;
        // for (int i = 0; i < n; i++)
        // {
        //     s.insert(arr[i]);
        // }

        // ll ans = arr[0];

        // for (int i = 1; i < n; i++)
        // {
        //     ans ^= arr[i];
        // }
    }
}