#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while (t--)
{
int n;
cin>>n;
ll arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
ll ans=1;
{
    for (int i = 0; i <n; i++)
    {
        ans*=arr[i];
    }
    cout<<2022*(ans+n-1)<<endl;
}



}
}