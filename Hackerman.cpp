#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = n + m;
        bool pop=1;
        int arr[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        for (int i = 0; i < 11; i++)
        {
            if (ans == arr[i])
            {
                cout << "Alice" << endl;
                   pop=0;
                break;
             
            }
        }
if(pop){
        cout << "Bob" << endl;
    }
    }
}