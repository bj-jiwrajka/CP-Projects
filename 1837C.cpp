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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool chk=0;
        ll n = s.length();
        if (s[0] == '?')
        {
            ll i = 0;
            while (s[i] != '0' and s[i] != '1' and i<n)
            {
                i++;
            }
            if(i==n)
            {
                while (n--)
                {
                    cout<<0;
                }
                chk=1;
                cout<<endl;
                
            }
            s[0] = s[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '?')
            {
                s[i] = s[i - 1];
            }
        }
        if (s[n - 1] == '?')
        {
            s[n - 1] = s[n - 2];
        }
        if(!chk)
        cout << s << endl;

        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }
    }
}