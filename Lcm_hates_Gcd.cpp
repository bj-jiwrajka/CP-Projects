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
ll t;
cin>>t;
while (t--)
{
ll a,b;
cin>>a>>b;
 ll c=__gcd(a,b);
cout<<a-c<<endl;
}
}