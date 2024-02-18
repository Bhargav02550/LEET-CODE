class Solution {
public:
    bool search(int &c,vector<vector<char>>& board, string word,int i, int j,vector<vector<int>>&vis,int ind){
        if(ind == word.size()){
            return true;
        }
        int n = board.size();
        int m = board[0].size();
        if(i>=n or j>=m or j<0 or i<0 or vis[i][j]!=0 or board[i][j]!=word[ind] or c)return false;
        vis[i][j]=1;
        bool found=search(c,board,word,i,j+1,vis,ind+1) or
            search(c,board,word,i+1,j,vis,ind+1) or
            search(c,board,word,i,j-1,vis,ind+1) or
            search(c,board,word,i-1,j,vis,ind+1);
        vis[i][j]=0;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        string s="";
        int c=0;
        //cout<<n<<" "<<m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(search(c,board,word,i,j,vis,0)){
                    return true;
                }
            }
        }
        return false;
    }
};