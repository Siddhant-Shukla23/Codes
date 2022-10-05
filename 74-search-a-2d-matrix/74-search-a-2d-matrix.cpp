class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
//         int s=0;
//         int e=row*col-1;
//         int mid=s+(e-s)/2;
        
//         while(s<=e){
//             int element=matrix[mid/col][mid%col];
            
//             if(element==target){
//                 return 1;
//             }
//             if(element>target){
//                 e=mid-1;
//             }
//             if(element<target){
//                 s=mid+1;
//             }
//             mid=s+(e-s)/2;
//         }
//         return 0;
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