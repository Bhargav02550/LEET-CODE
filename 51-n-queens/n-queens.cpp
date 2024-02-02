class Solution {
public:
    bool Safe(int row,int col,vector<string>&ds,int n){
        int dupr=row;
        int dupc=col;
        while(row>=0 and col>=0){
            if(ds[row][col]=='Q')return false;
            row--;
            col--;
        }

        row=dupr;
        col=dupc;
        while(col>=0){
            if(ds[row][col]=='Q')return false;
            col--;
        }

        row=dupr;
        col=dupc;

        while(row<n and col>=0){
            if(ds[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void helper(vector<vector<string>>&ans,vector<string>&ds,int n,int col){
        if(col==n){
            ans.push_back(ds);
            return;
        }
        for(int row=0;row<n;row++){
            if(Safe(row,col,ds,n)){
                ds[row][col]='Q';
                helper(ans,ds,n,col+1);
                ds[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> ds(n, string(n, '.'));
        helper(ans,ds,n,0);
        return ans;
    }
};