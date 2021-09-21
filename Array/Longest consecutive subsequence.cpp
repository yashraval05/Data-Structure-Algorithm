//link to problem https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set <int> s;
      for (int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      int longestStreak =0;
      int currentStreak = 0;
      int currentNum;
      for (int i =0;i<N;i++){
          if (s.find(arr[i]-1)== s.end()){
              currentNum = arr[i];
              while (s.find(currentNum) != s.end()){ //IF (CURRENTNUM NOT PRESENT EXIT LOOP)
                  currentNum += 1;
                  longestStreak = max(longestStreak,(currentNum-arr[i]));
              }
              
          }
      }
      return longestStreak;
    }
