class Solution {
public:
   bool issafe(vector<vector<char>>&board,int row,int col,int dig)
   {
     //H
     
     for(int i=0; i<9; i++)
     {
        if(board[row][i]==dig)
        {
            return false;
        }
     }

     //V

     for(int j=0; j<9; j++)
     {
        if(board[j][col]==dig)
        {
            return false;
        }
     }


     int srt_r=(row/3)*3;
     int srt_c=(col/3)*3;

     for(int k=srt_r; k<=srt_r+2; k++)
     {
        for(int k1=srt_c; k1<=srt_c+2; k1++)
        {
            if(board[k][k1]==dig)
            {
                return false;
            }
        }
     }



     return true;


   }
   

    bool helper(vector<vector<char>>&board,int row,int col)
    {
        
        if(row==9)
        {
            return true;
        }
        int nxtr=row,nxtc=col+1;
        if(nxtc==9)
        {
            nxtr=row+1;
            nxtc=0;
        }

        if(board[row][col]!='.')
        {
            return helper(board,nxtr,nxtc);
        }

        for(char dig='1'; dig<='9'; dig++)
        {
            if(issafe(board,row,col,dig))
            {
                board[row][col]=dig;
                if(helper(board,nxtr,nxtc))
                {
                    return true;
                }
                board[row][col]='.';
            }
        }

        return false;


        return false;



    }

    void solveSudoku(vector<vector<char>>& board) { 


        helper(board,0,0);
        
    }
};