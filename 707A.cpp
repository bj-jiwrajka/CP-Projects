#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n, m;
cin>>n>>m;
char arr[n*m];
for (int i = 0; i <n*m; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <n *m; i++)
{
    if (arr[i]=='C' or arr[i]=='M' or arr[i]=='Y')
    {
        cout<<"#Color"<<endl;
       return 0;
    }
    
}

cout<<"#Black&White"<<endl;
}