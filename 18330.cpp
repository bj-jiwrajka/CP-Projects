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
        set<string> st;

        for (int i = 0; i < n-1; i++)
        {
            string p = " ";
            p += s[i];
            p += s[i + 1];
            st.insert(p);
        }
        cout<<st.size()<<endl;


        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }
    }
}