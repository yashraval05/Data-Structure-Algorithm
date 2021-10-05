//link to problem https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        int row = matrix.size();
        int column = matrix[0].size();
        int low =0;
        int high = (row*column)-1;
        while (low<=high){
            int mid = (low + (high-low)/2) ;
            if (matrix[mid/column][mid%column]== target)
                return true;
            if (matrix[mid/column][mid%column]< target)
                low = mid +1;
            else
                high = mid -1;
        }
        return false;
    }
};
