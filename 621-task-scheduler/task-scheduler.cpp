class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<char,int>m;
        int maxOccur=0,ans=tasks.size();
        for(auto x:tasks){
            m[x]++;
            maxOccur=max(maxOccur,m[x]);
        }
        int totalSpaces=n*(maxOccur-1);
        bool foundMax=false;
        for(auto&x:m){
            if(x.second==maxOccur && foundMax){
                totalSpaces-=(maxOccur-1);
            }else if(x.second!=maxOccur){
                totalSpaces-=x.second;
            }
              
            if(x.second==maxOccur){
                foundMax=true;
            }
        }
        ans+=(totalSpaces>0)?totalSpaces:0;
        return ans;

    }
};
        

