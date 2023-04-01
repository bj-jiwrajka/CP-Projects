#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,p,q;
	    cin>>a>>b>>p>>q;
        if(p%a!=0 || q%b!=0)
        cout<<"NO"<<endl;
        else
        {
            long long ans1=p/a;
            long long ans2=q/b;
            if(abs(ans1-ans2)<=1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
	}
	return 0;
}