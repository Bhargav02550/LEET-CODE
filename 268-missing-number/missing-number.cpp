class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        sum = accumulate(nums.begin(),nums.end(),0);
        int osum = n*(n+1)/2;
        return osum-sum;
    }
};