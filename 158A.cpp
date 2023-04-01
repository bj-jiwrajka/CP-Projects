#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n, k;
cin>>n>>k;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int target=arr[k-1];
int cnt=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>=target and arr[i]>0)
    {
       cnt++;
    }
    
}

cout<<cnt<<endl;
return 0;
}
