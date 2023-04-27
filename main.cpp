// // Let's begin
// #include <bits/stdc++.h>
// // #include<appiness.h>
// using namespace std;
// #define md 1000000007
// #define pb push_back
// #define ll long long
// #define fr(i, n) for (ll i = 0; i < n; i++)
// #define inp(v)
// #define all(x) (x).begin(), (x).end()
// typedef long double lld;
// int main()
// {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//       ll n;
//       cin >> n;
//       ll k;
//       cin >> k;
//       vector<ll> v;
//       for (int i = 0; i < n; i++)
//       {
//          ll sum = ((n - 1 - i) * (n - i)) / 2;
//          ll sum2 = (i*(i-1))/2;
//          v.push_back(sum + sum2);
//          // cout<<sum<<" "<<sum2<<endl;
//       }
//       // cout << "vector is: ";
//       // for (auto it : v)
//       // {
//       //    cout << it << " ";
//       // }
//       bool chk = 1;
//       for (int i = 0; i < n; i++)
//       {
//          if (v[i] == k)
//          {
//             cout << "YES" << endl;
//             for (int m = 0; m < i; m++)
//             {
//                cout << -1 << " ";
//             }
//             for (int v = 0; v < n - i; v++)
//             {
//                cout << 1 << " ";
//             }
//             cout << endl;
//             chk = 0;
//             break;
//          }
//       }
//       if (chk)
//       {
//          cout << "NO" << endl;
//       }
//    }
// }

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
      vector<ll> arr(n, 0);
      fr(i, n)
      {
         cin >> arr[i];
      }
      ll prod = 1;
      for (int i = 0; i < n; i++)
      {
         prod *= arr[i];
      }
      vector<int> v;
      while (prod % 2 == 0)
      {
         v.push_back(2);
         n = n / 2;
      }
      for (int i = 3; i <= sqrt(prod); i = i + 2)
      {
         while (prod % i == 0)
         {
            v.push_back(i);
            n = n / i;
         }
      }
      v.push_back(n);
      vector<int> ans(1e7, 0);
      ll sum = 0;
      for (int i = 0; i < v.size(); i++)
      {
         ans[v[i]]++;
      }

      for (int i = 0; i < v.size(); i++)
      {
         sum+=ans[i]/2;
      }
      cout<<sum+1<<endl;
   }
}