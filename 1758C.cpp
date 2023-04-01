// --------------PENDING--------------
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
int n,x;
cin>>n>>x;
int arr[n];
if (n%x==0)
{
    cout<<x<<" ";
   for (int i = 2; i <n; i++)
   {
    arr[i]=i;
   }


   
   for (int i = 2; i <n; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<1<<endl;

   
}

else
{
    cout<<-1<<endl;
}


}
}