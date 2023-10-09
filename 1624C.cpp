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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            while (arr[i] > n)
            {
                arr[i] /= 2;
            }
        }
        set<int> s;
        fr(i,n)
        {
            if(s.find(arr[i])==s.end())
            {
                s.insert(arr[i]);
            }
            else
            {
                while (arr[i]>0 && s.find(arr[i])!=s.end())
                {
                    arr[i]/=2;
                }
                if(arr[i]>0)
                {
                    s.insert(arr[i]);
                }
            }
        }
        if(s.size()!=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool chk=1;
        int cnt=1;
        for(auto i:s)
        {
            if(i!=cnt)
            {
                chk=0;
                break;
            }
            else
            {
                cnt++;
            }
        }
        if(chk)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}