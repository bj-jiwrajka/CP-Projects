// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
     ll a;      \
     cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

     ll n;
     cin >> n;
     ll k;
     cin >> k;
     vector<ll> arr(n, 0);
     fr(i, n)
     {
          cin >> arr[i];
     }
     vector<int> brr(n, 0);
     fr(i, n)
     {
          cin >> brr[i];
     }
     ll ind;
     ll mn = *min_element(all(arr));
     fr(i, n)
     {
          if (arr[i] == mn)
          {
               ind = i;
               break;
          }
     }
     ll nu = k;
     ll ku = k;
     ll ans = 1e9;
     fr(j, n)
     {
          k = nu;
          fr(i, n)
          {
               if (i != j)
               {
                    if ((k >= 2100 and brr[i] == 0) or (k < 1900 and brr[i] == 1))
                    {
                         continue;
                    }
                    else
                    {
                         ll b = (arr[i] - k) / 4;
                         k += b;
                    }
               }
          }
          ans = min(ans, nu - k);
     }
     fr(i, n)
     {
          if ((ku >= 2100 and brr[i] == 0) or (ku < 1900 and brr[i] == 1))
          {
               continue;
          }
          else
          {
               ll b = (arr[i] - ku) / 4;
               ku += b;
          }
     }
     cout << min(ans, nu - ku) << endl;
}