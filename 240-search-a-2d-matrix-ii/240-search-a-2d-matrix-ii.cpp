class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        int row=0;
        int col=cols-1;
        while(row<rows && col>-1){
            if(matrix[row][col]==target) return 1;
            else if(matrix[row][col]<target) row++;
            else col--;
        }
        return 0;
    }
};