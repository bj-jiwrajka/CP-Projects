#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
int arr[t];
long double sum=0;
for (int i = 0; i < t; i++)
{
   cin>>arr[i];
   sum+=arr[i];
}
cout<<fixed<<setprecision(12)<<sum/t<<endl;


}