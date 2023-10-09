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
        priority_queue<ll> pq;
        vector<ll> arr(n, 0);
        vector<ll> o;
        fr(i, n)
        {
            cin >> arr[i];
            if (i % 2 == 0)
                pq.push(arr[i]);
            else
                o.pb(arr[i]);
        }
        ll even = n / 2;
        vector<ll> v;
        ll nn = even;
        while (nn--)
        {
            ll x = pq.top();
            if (x > 0)
            {
                v.pb(x);
                pq.pop();
            }
        }
        vector<ll> bacha;
        while (pq.size())
        {
            ll x = pq.top();
            bacha.pb(x);
            pq.pop();
        }

        ll ans = 0;
        for (auto it : v)
        {
            // if (it > 0)
            // {
            even--;
            ans += it;
            // }
        }
        sort(all(bacha));
        reverse(all(bacha));
        ll odd = n - even;
        sort(all(o));
        reverse(all(o));
        vector<ll> oo;
        ll kkk = o.size() / 2;
        for (ll i = 0; i < o.size(); i++)
        {
            if (o[i] > 0 and kkk)
            {
                kkk--;
                ans += o[i];
            }
            else
                oo.pb(o[i]);
        }
        // for(auto it: oo) cout<<it<<" ";
        // cout<<endl;
        // for (auto it : bacha)
        //     cout << it << " ";

        for (ll i = 0; i < min(oo.size(), bacha.size()); i++)
        {
            if (oo[i] + bacha[i] > 0)
                ans += (oo[i] + bacha[i]);
        }
        cout << ans << endl;
    }
}