class Solution {
public:
    bool solve(vector<vector<char>>& board, string &word, int i, int j, int x){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()) return false;
        if(board[i][j] != word[x] || board[i][j] == '#') return false;
        if(x == word.length()-1) return true;
        char ch = board[i][j];
        board[i][j] = '#';
        bool ans = solve(board, word, i-1, j, x+1) || solve(board, word, i+1, j, x+1) || 
        solve(board, word, i, j-1, x+1) || solve(board, word, i, j+1, x+1);
        board[i][j] = ch;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string &word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(solve(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
