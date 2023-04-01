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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll maxa=*max_element(arr, arr+n);
        ll mina=*min_element(arr, arr+n);

        if (n == 1 or maxa==mina)
        {
            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
            vector<ll> p;
            vector<ll> ne;
            for (int i = 0; i < n; i++)
            {

                if (arr[i] < 0)
                {
                    ne.push_back(arr[i]);
                }
                else
                {
                    p.push_back(arr[i]);
                }
            }
            ll sum = 0;
            vector<ll> v;
            ll l = 0, r = 0;
            ll k=0;
            sort(p.begin(), p.end());
            sort(ne.begin(), ne.end());
            while (1)
            {
                if (l == p.size() || r == ne.size())
                    break;

                if (sum < 0)
                {
                    v.push_back(p[l]);
                    sum += v[k++];
                    l++;
                }
             else
                {
                    v.push_back(ne[r]);
                    sum += v[k++];
                    r++;
                }
            }
            if (r != ne.size())
            {
                while (r != ne.size()){
                    v.pb(ne[r]);
                    r++;
                }
            }
            if (l != p.size())
            {
                while (l != p.size()){
                    v.pb(p[l]);
                    l++;
                }
            }

            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}