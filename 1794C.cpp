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
        ll cnt = 1;

        ll brr[n];
        brr[0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
            }
        }

   ll i=0;
   while (arr[i]==1)
   {
    cout<<1<<" ";
    i++;
   }
   if (i==0)
   {
   for (int k = 0; k <n; k++)
   {
    cout<<k+1<<" ";
   }
   
   }
   else{
   
   for (int j = i; j < n; j++)
   {
    cout<<j<<" ";
   }
   
   }
//    cout<<i<<endl;
   
        cout << endl;
    }
}