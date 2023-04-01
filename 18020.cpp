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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

ll pn=0; 
ll nn=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>0)
    {
       pn++;
    }
    else
    {
        nn++;
    }
    
    
}
for (int i = 0; i <pn; i++)
{
cout<<i+1<<" ";
}
ll i=pn-1;
ll nunum=nn;
while(nunum--)
{
cout<<i<<" ";
i--;
}
cout<<endl;

for (int i = 0; i < nn; i++)
{
    cout<<1<<" "<<0<<" ";
}
for (int i = 0; i < n-2*nn; i++)
{
    cout<<i+1<<" ";
}

cout<<endl;



}
}