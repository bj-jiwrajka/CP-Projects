#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while (t--)
{
int a,b,c;
cin>>a>>b>>c;
if(a+b==c or b+c==a or c+a==b)
cout<<"YES"<<endl;
else
{
    cout<<"NO"<<endl;
}

}
}