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
        ll n = s.length();
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            arr[i] = s[i] - 'a' + 1;
        }
        vector<ll> index[26];
        fr(i, n)
        {
            index[arr[i]].pb(i + 1);
        }
        // for(int i=0;i<26; i++)
        // {
        //     for(auto it:index[i])
        //     {
        //         cout<<it<<" ";
        //     }
        // }
        // for(auto it:arr)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        ll sr = arr[0];
        ll d = arr[n - 1];
        sort(arr.begin(), arr.end());
        ll cost = 0;
        ll inds, indd;
        for (ll i = 0; i < n; i++)
        {
            inds = lower_bound(arr.begin(), arr.end(), sr) - arr.begin();
            indd = lower_bound(arr.begin(), arr.end(), d) - arr.begin();
        }
        vector<ll> ans;
        // cout << inds << " " << indd << endl;
        if (inds > indd)
        {
            for (int i = inds; i > 0; i--)
            {
                cost += abs(arr[i] - arr[i - 1]);

                ll k = 0;
                ans.pb(index[arr[i]][k]);
                while (k < index[arr[indd - i]].size())
                {
                    k++;
                }
            }
            ans.pb(index[arr[0]][0]);
        }
        else
        {
            for (int i = 0; i < indd; i++)
            {
                cost += abs(arr[indd - i] - arr[indd - i - 1]);
                ll k = 0;
                ans.pb(index[arr[indd - i]][k]);
                while (k < index[arr[indd - i]].size())
                {
                    k++;
                }
            }
            ans.pb(index[arr[0]][0]);
            reverse(ans.begin(), ans.end());
        }
        cout << cost << " " << ans.size() << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}