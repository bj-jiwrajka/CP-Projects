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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll t;
cin>>t;
while (t--)
{
ll n;
cin>>n;
ll arr[n];
for (ll i = 0; i < n; i++)
{
cin>>arr[i];
}
for (ll i = 0; i < n; i++)
{
    arr[i]=arr[i]^(i+1);
}
map<ll, ll> mp;
for (ll i = 0; i < n; i++)
{
mp[arr[i]]++;
}
ll sum=0;
for (ll i = 0; i < mp.size(); i++)
{
   sum+=(mp[i]*(mp[i]-1))/2;
}
cout<<sum<<endl;
}
}