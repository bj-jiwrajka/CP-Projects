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
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll t;
cin>>t;
while (t--)
{
ll n;
cin>>n;
string s;
cin>>s;
 string p="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
 int ans= isSubstring(s,p);
 if (ans!=-1)
 {
     cout<<"YES"<<endl;
 }
 else
 {
     cout<<"NO"<<endl;
 }

}
}