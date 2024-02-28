// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
typedef long double lld;

pair<ll, ll> func(vector<string> words, int n) {
    ll hard = 0, easy = 0;
    for (auto s : words)
    {
        bool chk = 0;
        int m = s.size();
        int v = 0, c = 0;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'o' or s[i] == 'u' or s[i] == 'i')
                v++;
            else
                c++;
        }
        if (c > v)
        {
            chk = 1;
        } else {
            int cnt = 0;
            for (int j = 0; j < m; j++)
            {
                if (s[j] != 'a' and s[j] != 'e' and s[j] != 'o' and s[j] != 'u' and s[j] != 'i')
                    cnt++;
                else
                    cnt = 0;
                if (cnt == 3)
                {
                    cnt=0;
                    chk = 1;
                    break;
                }
            }
        }
        
        if (chk)
            hard++;
        else
            easy++;
    }
    return {hard, easy};
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<string> words = {};
    string word = "";
    int size = 0;
    while (size<n) {
        cin >> word;
        words.push_back(word);
        size += word.size()+1;
    }

    // for (char c : s)
    // {
    //     if (c == ' ')
    //     {
    //         if (word.size() > 0)
    //         {
    //             words.push_back(word);
    //         }
    //         word = "";
    //     } else
    //         {
    //             word += c;
    //         }
    // }
    // if (word.size() > 0) {
    //     words.push_back(word);
    // }

    // for(auto it:words)
    // cout<<it<<" ";
    int hard = 0, easy = 0;

    pair<ll, ll> temp = func(words, n);
    hard = temp.first;
    easy = temp.second;    
    cout << hard << " " << easy << endl;
    cout << (5 * hard - 2 * easy) << endl;
}