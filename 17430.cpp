#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
        cin>>arr[i];
        }
        int m=10-n;
        cout<<3*m*(m-1)<<endl;
        
    }
    return 0;
}