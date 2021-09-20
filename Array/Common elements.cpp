//link to problem https://practice.geeksforgeeks.org/problems/common-elements1132/1

  vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector <int> common;
            int i=0,j=0,k=0;
            int element;
            while ( i<n1 && j<n2 && k<n3 ){
            if (A[i]==B[j] && B[j]==C[k]){
                common.push_back(A[i]);
                element = A[i];
                while (i<n1 && A[i]==element)
                    i++;
                while (j<n2 && B[j]==element)    
                    j++;
                while (k<n3 && C[k]==element)
                    k++;
            }
            else if (A[i]<B[j])
                    i++;
            else if (B[j]<C[k])
                    j++;
            else 
                    k++;
        }
            
            return common;
        }
