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
if(n==0){
 cout<<3<<" "<<5<<" "<<6<<" "<<7<<endl;
}
else if(n==1){
    cout<<1<<" "<<4<<" "<<3<<" "<<2<<endl;
}
else if(n==5){
cout<<2<<" "<<8<<" "<<1<<" "<<(n^1)<<endl;
}
else if(n==3){
cout<<8<<" "<<4<<" "<<1<<" "<<(n^1)<<endl;
}
else{
cout<<2<<" "<<4<<" "<<1<<" "<<(n^1)<<endl;
}
}
}