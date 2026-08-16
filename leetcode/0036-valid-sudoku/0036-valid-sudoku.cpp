class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_set<char> st;
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                if(!st.insert(board[i][j]).second){
                    return false;
                }
            }
        }
        for(int i=0; i<9; i++){
            unordered_set<char> st;
            for(int j=0; j<9; j++){
                if(board[j][i]=='.') continue;
                if(!st.insert(board[j][i]).second){
                    return false;
                }
            }
        }

        for(int row=0; row<9; row+=3){
            for(int col=0; col<9; col+=3){

                unordered_set<char>st;

                for(int i=row; i<row+3; i++){
                    for(int j=col; j<col+3; j++){
                        if(board[i][j]=='.') continue;
                        if(!st.insert(board[i][j]).second){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};