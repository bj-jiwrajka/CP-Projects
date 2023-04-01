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
        ll st = (2 * n )- 2;
        string s;
        vector<string> v;
        for (int i = 0; i < st; i++)
        {
           cin>>s;
           v.push_back(s);
        }
        ll cnt = 0;
        for (int i = 0; i < st; i++)
        {
            for (int j = i+1; j < st; j++)
            {
                if (v[i].size() == v[j].size())
                {
                    reverse(v[i].begin(), v[i].end());
                    if (v[i] == v[j])
                    {
                        cnt++;
                    }
                }
            }
        }
// cout<<cnt<<endl;
        if (cnt==st/2)
        {
           cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}