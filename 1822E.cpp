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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 0;
        set<char> st;
        if (n & 1)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                st.insert(s[i]);
            }
            if (st.size() == 1)
            {
                cout << -1 << endl;
            }
            else
            {

                for (int i = 0; i < n / 2; i++)
                {
                    if (s[i] == s[n - 1 - i])
                    {
                        cnt++;
                    }
                }

                cout << (cnt+1) / 2 << endl;
            }
        }
        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }
    }
}