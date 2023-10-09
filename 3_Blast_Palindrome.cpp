// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> arr[26];
        vector<ll> brr[26];
        if (n % 3 == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0)
                arr[s[i] - 'a'].push_back(i);
            if ((n - 1 - i) % 3 == 0)
                brr[s[i] - 'a'].push_back(i);
        }
        bool chk = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i].size() and brr[i].size())
            {
                fr(j, arr[i].size())
                {
                    for (int k = brr[i].size() - 1; k >= 0; k--)
                    {
                        if (brr[i][k] <= arr[i][j])
                            break;
                        if ((n - 1 - brr[i][k]) % 3 == 0 and arr[i][j] % 3 == 0)
                        {
                            cout << "YES" << endl;
                            chk = 1;
                            break;
                        }
                    }
                    if (chk)
                        break;
                }
            }
            if (chk)
                break;
        }
        if (!chk)
        {
            cout << "NO" << endl;
        }
    }
}