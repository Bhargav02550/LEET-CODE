class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int c=0;
        for(int i=0;i<nums.size();i++){
            int p = 1;
            for(int j=i;j<nums.size();j++){
                p*=nums[j];
                if(p<k){
                    c++;
                }
                else{
                    break;
                }
            }
        }
        return c;

    }
};