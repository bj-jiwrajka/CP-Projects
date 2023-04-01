// ------------PENDING------------------
#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main(){

int n;
cin>>n;
ll arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<int> v;
// int k=arr[0];
for (int i = 1; i < n; i++)
{
    if (arr[i]<arr[i-1])
    {
      v.push_back(arr[i-1]);
    }
    else
    {
        break;
    }
    
}
v.push_back(arr[i])



}
