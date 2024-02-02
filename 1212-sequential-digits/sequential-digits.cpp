class Solution {
public:
    int len(int n){
        int c=0;
        while(n!=0){
            n/=10;
            c++;
        }
        return c;
    }
    vector<int> sequentialDigits(int low, int high) {
        int l1=len(low);
        int l2=len(high);
        int f1=0;
        vector<int>res;
        vector<int>v={1,2,3,4,5,6,7,8,9};
        for(int i=l1;i<=l2;i++){
            for(int j=0;j<=9-i;j++){
                int s=0;
                for(int k=j;k<j+i;k++){
                    s=s*10+v[k];
                }
                if(s>high){
                    f1=1;
                    break;
                }
                if(s>=low){
                    res.emplace_back(s);
                }
            }
            if(f1==1)break;
        }
        return res;
    }
};