#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ind,last;
    for(int i=0;i<N;i++)
    {
        if(arr[i]<=k)
        {
            ind=i;
            break;
        }
    }
     for(int i=0;i<N;i++)
    {
        if(arr[i]<=k)
        {
            last=i;
        }
    }
    return last-ind+1;
}