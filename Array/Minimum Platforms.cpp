//link to problem https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&sortBy=submissions&query=category[]Arraysdifficulty[]1page1sortBysubmissionscategory[]Arrays

    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
    	// Your code here
    	int result=1;
    	int platform=1;
    	int i=1,j=0;
    	while (i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        platform--;
    	        j++;
    	    }
            if (platform > result)
                result = platform;
    	}
    	return result;
    }
