// Let's begin
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
        ll k;
        cin >> k;
        string s, p;
        cin >> s >> p;
        ll ind = 0;
        fr(i, n)
        {
            if (s[i] != p[i])
            {
                ind = i;
                break;
            }
        }
        set<char> st;
        vector<ll> arr(26, 0);

        while (k  and ind < n and s[ind] != p[ind] )
        {
            arr[s[ind] - 'a']++;
            ind++;
            if (arr[s[ind] - 'a'] <2)
            {
                k--;
            }
        }
        
        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }
    }
}