//Link to problem https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
//Time complexity O(n) but least number of comparison
// Compare in pairs.

void minmax(int arr[],int n){
    int i,maximum,minimum;
    if(n<=0)
        return;
    if(n%2==0){
        if(arr[0]>arr[1]){
            maximum = arr[0];
            minimum = arr[1];
        }else{
            maximum = arr[1];
            minimum = arr[0];
        }
        i =2;
    }else{
        minimum=arr[0];
        maximum=arr[0];
        i = 1;
    }
    while (i<n-1){
        if (arr[i]>=arr[i+1]){
            maximum = max(maximum,arr[i+1]);
            minimum = min(minimum,arr[i]);
        }
        else{
            maximum = max(maximum,arr[i]);
            minimum = min(minimum,arr[i+1]);
        }
        i += 2;
    }
    cout <<"maximum is "<<maximum<<endl;
    cout<<"minimum is "<<minimum;
    
}

// Driver code
