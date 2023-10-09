class Solution {
public:
       
    int findagain(vector<vector < int>> &offers, int idx, const int &n)
    {
        int lo = idx + 1, hi = n - 1, ans = n;
        while (lo <= hi)
        {
            int mid = (lo + hi)/ 2;
            if (offers[idx][1] < offers[mid][0])
            {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return ans;
    }
    unordered_map<int, int> mp;
    int maxProfit(vector<vector < int>> &offers, int idx, const int &n)
    {
        if (idx == n) return 0;

        if (mp.find(idx) != mp.end()) return mp[idx];

        int next = findagain(offers, idx, n);	
        int incl = offers[idx][2] + maxProfit(offers, next, n);
        int lv = maxProfit(offers, idx + 1, n);

        return mp[idx] = max(incl, lv);
    }
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
       
        sort(offers.begin(), offers.end());
        return maxProfit(offers, 0, offers.size());
    }
};