#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    cin>>t;
    while (t--)
    {
       cin>>n;
     
       for (int i = 1; i <=n; i++)
       {
        if (i&1)
        {
           cout<<i+1<<" ";
        }
        else if (i%2==0 and n%2==0)
        {
            cout<<n-i+1<<" ";
        }
        else
        {
            cout<<n-i+2<<" ";
        }
        
       }
       cout<<endl;
       
    }
    
}