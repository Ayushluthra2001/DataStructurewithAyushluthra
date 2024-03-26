class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    int row=i;
                    int col=j;
                    for(int k=0;k<matrix[0].size();k++){
                        if(matrix[row][k]!=0)
                        matrix[row][k]=1232233;
                    }
                    for(int k=0;k<matrix.size();k++){
                        if(matrix[k][col]!=0)
                        matrix[k][col]=1232233;
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1232233) matrix[i][j]=0;
            }
        }
        return ;
    }
};
