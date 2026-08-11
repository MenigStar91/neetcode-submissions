class Solution {
public:
    // using bitmasking

    int row[9]={};
    int col[9]={};
    int box[9]={};

    int getBox(int row, int col){
        return row/3*3 + col/3;
    }

    bool valid(int r, int c, int value){
        // place as well
        int p = getBox(r,c);
        if( (row[r] & 1<<(value-1)) || (col[c] & 1<<(value-1)) || (box[p] & 1<<(value-1)) ){
            return false;
        } 

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // 9x9 is given
        bool ans = true;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]>'0' && board[i][j]<='9'){
                    int val = board[i][j] - '0';
                    if(!valid(i,j,val))
                        return false;

                    row[i] = row[i] | (1<<(val-1));
                    col[j] = col[j] | (1<<(val-1));
                    int p = getBox(i,j);
                    box[p] = box[p] | (1<<(val-1));
                }
            }
        }

        return true;
    }
};
