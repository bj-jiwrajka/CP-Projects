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
ll n;
cin>>n;
string s;
cin>>s;
set<char> sc;
for (int i = 0; i < n; i++)
{
    sc.insert(s[i]);
}
if (sc.size()==n)
{
    cout<<-1<<endl;
}
else
{
    cout<<n-2<<endl;
}


}
}