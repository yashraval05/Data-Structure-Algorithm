//link to problem https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
    int j = m-1;
    while(j>=0 && arr[0][j]==1){
        j--;
    }
    int row = 0;
    
    for(int i=1;i<n;i++){
        
        while(j>=0 && arr[i][j]==1){
            j--;
            row = i;
        }
    }
    return j==m-1 ? -1 : row;
	}
};
