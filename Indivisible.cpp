#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while (t--)
{
ll a,b,c;
cin>>a>>b>>c;
for (int i = 1; i < 100; i++)
{
    if (a%i !=0 and b%i!=0 and c %i !=0)
    {
      cout<<i<<endl;
      break;
    }
    
}


}
}