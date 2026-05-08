class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        for(int n:nums)
        {
            cnt[n]++;
        }

        vector<pair<int,int>> a;
        for(const auto& p:cnt)
        {
            a.push_back({p.second, p.first});
        }
        sort(a.rbegin(),a.rend());
        vector<int> res;
        for(int i=0;i<k;++i)
        {
            res.push_back(a[i].second);
        }
        return res;
    }
};
