class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int> um;
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++)
        {
            um[nums1[i]]++;
        }
        for(int i = 0;i < nums2.size(); i++)
        {
            if(um.find(nums2[i]) != um.end())
            {
                res.push_back(nums2[i]);
                um.erase(nums2[i]);
            }
        }
        return res;
    }
};