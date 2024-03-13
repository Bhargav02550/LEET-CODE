class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> results;
        int m = mat.size();
        if(m==0) return results;
        int n = mat[0].size();
        if(n==0) return results;
        bool up = true;
        int x=0, y=0;
        while(true) {
            results.push_back(mat[x][y]);
            if(x==m-1 && y==n-1) break; 
            if(up) {x=x-1;y=y+1;}
            else {x=x+1;y=y-1;}

            if(y>n-1){ y=n-1; x+=2; up=!up;}
            else if(x>m-1){ x=m-1; y+=2; up=!up;}
            else if(y<0){ y+=1;up=!up;}
            else if(x<0){ x+=1;up=!up;};
        }
        return results;
    }
};