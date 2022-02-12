//link to problem https://leetcode.com/problems/reshape-the-matrix/submissions/

class Solution {

public:

    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        vector<vector<int>> res(r,vector<int>(c));

        if(mat.size()*mat[0].size()!=r*c)

            return mat;

        int row=0,col=0;

        for(int i=0;i<mat.size();i++){

            for (int j=0;j<mat[0].size();j++) {

                res[row][col]=mat[i][j];

                col++;

                if(col==c){

                    col=0;

                    row++;

                }

            }

        }

        

        return res;

        

    }

};
