class Solution {
public:
bool isValid(int currCol , int currRow , vector<vector<int>>& board){
    for(int i = currRow -1; i>=0 ;i--){
        if(board[i][currCol] == 1 ) return false;
    }
    for(int i = currCol -1; i>=0 ;i--){
        if(board[currRow][i] == 1) return false;


    }

    for(int i= currRow-1 ,  j =currCol -1; i>=0 && j>=0 ; i-- , j--) if(board[i][j] == 1) return false;

    for(int i = currRow-1 ,j = currCol +1; i>=0 && j<board.size() ; i-- , j++){
        if(board[i][j] == 1) return false;
    }
    return true;
}
    void solve(int n , vector<vector<int>>& board ,int currRow  , int &ans){
        if(currRow >= n) {
            ans++;

            return ;
        }

        for(int i =0 ; i<n; i++){
            if(isValid(i , currRow , board )) {
                board[currRow][i] = 1;
                solve(n , board , currRow +1 , ans);
                board[currRow][i] = 0;
            }
        }

        return ;
    }
    int totalNQueens(int n) {
        int ans = 0;

        vector<vector<int>>board(n, vector<int>(n, 0));


        solve(n , board , 0 , ans);
        return ans;
    }
};
