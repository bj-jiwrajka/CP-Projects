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
ll cntodd=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]&1)
    {
      cntodd++;
    }
    
}
if(cntodd%2==0 and cntodd!=0){
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}



}
}