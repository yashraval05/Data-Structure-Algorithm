//link to problem https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1#

	int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
        // code here
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
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
    return result[k-1];
    }
