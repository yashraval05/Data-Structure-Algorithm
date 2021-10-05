//link to problem https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#

    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
    int top = 0;
    int bottom = r-1;
    int left = 0;
    int right = c-1;
    vector<int> result;
    int i;
    
    while (top<=bottom && left<=right){
        for ( i = left;i<=right;i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        for (i = top; i<=bottom;i++)
            result.push_back(matrix[i][right]);
        right--;
        if (top <= bottom){
        for (i=right;i>=left;i--)
            result.push_back(matrix[bottom][i]);
        bottom--;
        }
        if (left<=right){
        for (i=bottom;i>=top;i--)
            result.push_back(matrix[i][left]);
        left++;
        }
    }
    return result;
    }
