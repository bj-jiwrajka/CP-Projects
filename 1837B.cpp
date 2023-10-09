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
        stack<char> st;
        ll sz = 0;
        for (ll i = 0; i < n; i++)
        {

            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (s[i] == st.top())
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
            sz = st.size();

            // mx = max(mx, sz);
            // cout << sz << " ";
        }
        ll mx = 1;
        ll cnt = 1;
        fr(i, n)
        {
            if (s[i] == s[i + 1])
                cnt++;
            mx = max(mx, cnt);

           if(s[i] != s[i + 1])
                cnt = 1;
        }
        cout << mx+1 << endl;
        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }
    }
}