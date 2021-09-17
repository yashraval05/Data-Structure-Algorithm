void shiftall(int arr[], int left,
              int right)
{
  while (left<=right)
  {
    if (arr[left] < 0 && arr[right] < 0) //both neg
      left+=1;
     
    
    else if (arr[left]>0 && arr[right]<0) //left posi right neg
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
    else if (arr[left]>0 && arr[right] >0)  //both posi
      right-=1; 
    else{
      left += 1;
      right -= 1;
    }
  }
}
