#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while (t--)
{

     ll n, m;
     cin>>n>>m;
     vector<ll> v(n), h(m);
  for (int i = 0; i < n; i++)
  {
    /* code */
    cin>>v[i];
  }
    for (int i = 0; i < m; i++)
  {
    /* code */
    cin>>h[i];
  }
     priority_queue<ll, vector<ll>, greater<ll> > pq;
     for(auto i: v){
          pq.push(i);
     }
     for(auto i: h){
          pq.pop();
          pq.push(i);
     }
     ll sum=0;
     for(int i=0;i<n;i++){
            sum+=pq.top();
            pq.pop();
    }
     cout<<sum<<endl;


}
}