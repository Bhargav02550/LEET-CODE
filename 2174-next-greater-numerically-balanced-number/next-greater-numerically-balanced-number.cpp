class Solution {
public:
    bool check(int n){
        map<int,int>mp;
        while(n!=0){
            int r=n%10;
            mp[r]++;
            n/=10;
        }
        for(auto it:mp){
            if(it.first!=it.second){
                return false;
            }
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        int ans=0;
        for(int i=n+1;;i++){
            if(check(i)){
                ans=i;
                break;
            }
        }
        return ans;
    }
};