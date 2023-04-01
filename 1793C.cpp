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
        ll i = 0, j = n - 1, mn = 1, mx = n;
        while (i < j and mn < mx)
        {
            if (arr[i] == mn)
            {
                i++;
                mn++;
            }
            else if (arr[i] == mx)
            {
                mx--;
                i++;
            }
            else if (arr[j] == mn)
            {
                j--;
                mn++;
            }
            else if (arr[j] == mx)
            {
                j--;
                mx--;
            }
            else
            {
                break;
            }
        }
        if (i==j)
        {
           cout<<-1<<endl;
        }
        else{
        cout<<i+1<<" "<<j+1<<endl;
        }
    }
}