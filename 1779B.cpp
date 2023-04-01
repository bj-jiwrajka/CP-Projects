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
if (n==3)
{
   cout<<"NO"<<endl;
}
else if(n&1){
    cout<<"YES"<<endl;

    for (int i = 0; i < n/2; i++)
    {
       cout<<n/2-1<<" "<<-(n/2)<<" ";
    }
    cout<<n/2 -1<<endl;
    
}
else
{
    cout<<"YES"<<endl;
    for (int i = 0; i < n/2; i++)
    {
       cout<<"-1"<<" "<<1<<" ";
    }
    cout<<endl;
    
}


}
}