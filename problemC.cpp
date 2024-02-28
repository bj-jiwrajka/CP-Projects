// Name - Bijay Jiwrajka
// Scholar ID - 2112055
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
          ll k;
          cin >> k;
          ll ans = 1;
          bool arr[n + 1] = {0};
          for (ll i = 2; i <= k; i++)
          {
               for (ll j = i; j <= n; j += i)
               {
                    arr[j] = 1;
               }
          }
          for (ll i = 1; i <= n; i++)
          {
               if (arr[i] == 0)
                    ans = (ans * i) % md;
          }
          cout << ans % md << endl;
     }
}