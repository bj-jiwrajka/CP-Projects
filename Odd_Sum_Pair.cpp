#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if ((a%2==0 and b%2==0 and c%2==0) || (a%2!=0 and b%2!=0 and c%2!=0))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }
    return 0;
    
    }