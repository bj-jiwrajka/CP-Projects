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
        ll sum = 0, ans;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        ll c = 0, p = 0;
        if (sum == n)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 2)
                {
                    c++;
                }
            }
            if (c % 2 == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == 2)
                    {
                        p++;
                        if (p == c / 2)
                        {
                            ans = i;
                        }
                    }
                }
                cout << ans + 1 << endl;
            }
            else
            {
                cout<<-1<<endl;
            }
            
        }
    }
}