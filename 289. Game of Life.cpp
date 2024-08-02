class Solution {
public:
    bool isValid(int x, int y, vector<vector<int>>& board){
        int n = board.size(), m = board[0].size();
        return (x>=0 && x<n && y>=0 && y<m);
    }
    void gameOfLife(vector<vector<int>>& board) {
        int dx[8] = {0,1,1,1,0,-1,-1,-1};
        int dy[8] = {1,1,0,-1,-1,-1,0,1};
        int n = board.size(), m = board[0].size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                int cnt = 0;
                for(int k = 0; k<8; k++){
                    int r = i+dx[k];
                    int c = j+dy[k];
                    if(isValid(r,c,board) && abs(board[r][c]) == 1) cnt++;
                }
                if(board[i][j] == 1 && (cnt<2 || cnt>3)) board[i][j] = -1;
                if(board[i][j] == 0 && (cnt == 3)) board[i][j] = 2;
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(board[i][j]>=1) board[i][j] = 1;
                else board[i][j] = 0;
            }
        }
    }
};
