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
        ll m;
        cin >> m;

        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }

        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] += i;
        }

        ll ind=-2;
        ll maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= m)
            {
                if (brr[i] >= maxi)
                {
                    maxi = brr[i];
                    ind = i;
                }
            }
        }

        cout<<ind+1<<endl;
    }
}