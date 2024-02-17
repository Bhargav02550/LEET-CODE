class Solution {
public:
    void search(int &c,vector<vector<char>>& board, string word,int i, int j, int n, int m,vector<vector<int>>&vis,int ind){
        if(ind == word.size()){
            c=1;
            return;
        }
        if(i>n-1 or j>m-1 or j<0 or i<0 or board[i][j]!=word[ind])return;
        if(!vis[i][j]){
            vis[i][j]=1;
            search(c,board,word,i,j+1,n,m,vis,ind+1);
            search(c,board,word,i+1,j,n,m,vis,ind+1);
            search(c,board,word,i,j-1,n,m,vis,ind+1);
            search(c,board,word,i-1,j,n,m,vis,ind+1);
            vis[i][j]=0;
        }
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
                search(c,board,word,i,j,n,m,vis,0);
            }
        }
        cout<<c<<" ";
        return c;
    }
};