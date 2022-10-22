//class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int startingrow=0;
//         int startingcol=0;
//         int r=matrix.size();
//         int c=matrix[0].size();
//         int endingrow=r-1;
//         int endingcol=c-1;
//         int total=r*c;
//         int counter=0;
//         vector<int>spiralview;
//         while(counter<total){
//             for(int index=startingcol; counter<total && index<=endingcol;index++){
//                 spiralview.push_back(matrix[startingrow][index]);
//                 counter++;
//             }
//             startingrow++;
            
//             for(int index=startingrow; counter<total && index<=endingrow;index++){
//                 spiralview.push_back(matrix[index][endingcol]);
//                 counter++;
//             }
//             endingcol--;
//             for(int index=endingcol;counter<total && index>=startingcol;index--){
//                 spiralview.push_back(matrix[endingrow][index]);
//                 counter++;
//             }
//             endingrow--;
//             for(int index=endingrow;counter<total && index>=startingrow;index--){
//                 spiralview.push_back(matrix[index][startingcol]);
//                 counter++;
//             }
//             startingcol++;
            
//         }
//         return spiralview;
//     }
//     vector<vector<int>> generateMatrix(int n) {
//          vector<vector<int>>matrix(n,vector<int>(n,0));
//         int k=1;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=k++;
//             }
//         }
//         vector<int>ans=spiralOrder(matrix);
        
//         k=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=ans[k++];
//             }
//         }
        
//         return matrix;
//     }
// };
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startingrow=0;
        int startingcol=0;
        
        int endingrow=n-1;
        int endingcol=n-1;
        int total=n*n;
        int counter=0;
        vector<vector<int>>matrix(n,vector<int>(n,0)); 
        int k=1;
        while(counter<total){
            for(int index=startingcol; counter<total && index<=endingcol;index++){
                matrix[startingrow][index]=k++;
                counter++;
            }
            startingrow++;
            
            for(int index=startingrow; counter<total && index<=endingrow;index++){
               matrix[index][endingcol]=k++;
                counter++;
            }
            endingcol--;
            for(int index=endingcol;counter<total && index>=startingcol;index--){
                matrix[endingrow][index]=k++;
                counter++;
            }
            endingrow--;
            for(int index=endingrow;counter<total && index>=startingrow;index--){
                matrix[index][startingcol]=k++;
                counter++;
            }
            startingcol++;
            
        }
        return matrix;
    }
};
