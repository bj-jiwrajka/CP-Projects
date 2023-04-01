#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin>>t;
while (t--)
{
 long long int n,k;
cin>>n>>k;
long long int arr[n];
for (int i = 1; i <= n; i++)
{
    cin>>arr[i];
}
if (n==1)
{
   if(arr[1]==k){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }
   continue;
}

bool ans=0;
for (int i = 1; i < n; i++)
{
    if (arr[i]==k)
    {
        cout<<"Yes"<<endl;
        ans=1;
        break;
        
    }
    
}
if (!ans)
{
    cout<<"No"<<endl;
}

}
return 0;
}