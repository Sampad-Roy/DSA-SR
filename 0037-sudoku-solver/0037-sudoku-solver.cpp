class Solution {
public:

    bool issafe(vector<vector<char>>&board,int row,int col,char dig)
    {
       //H
       for(int j=0; j<9; j++)
       {
        if(board[row][j]==dig)
        {
            return false;
        }
       }

       //V


       for(int i=0; i<9; i++)
       {
        if(board[i][col]==dig)
        {
            return false;
        }
       }


       //Grid
       int srow=(row/3)*3;
       int scol=(col/3)*3;
       for(int i=srow; i<=srow+2; i++)
       {
        for(int j=scol; j<=scol+2; j++)
        {
            if(board[i][j]==dig)
            {
                return false;
            }
        }
       }

       return true;

    }

    
    bool helper(vector<vector<char>>&board,int row,int col)
    {   
       if(row==9) return true;
       int nrow=row,ncol=col+1;
       if(ncol==9)
       {
        nrow=row+1;
        ncol=0;
       }
       
       if(board[row][col] != '.')
       {
            return helper(board,nrow,ncol);
       }

      for(char i='1'; i<='9'; i++)
      {
        if(issafe(board,row,col,i))
        {
            board[row][col]=i;
            if(helper(board,nrow,ncol))
            {
                return true;
            }  

            board[row][col]='.';
        }
      }

       return false;
    }

    
    void solveSudoku(vector<vector<char>>& board) {  

     helper(board,0,0);

         
    }
};