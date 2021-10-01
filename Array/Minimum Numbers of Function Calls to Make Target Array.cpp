//link to problem https://leetcode.com/problems/minimum-numbers-of-function-calls-to-make-target-array/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count =  0 , n = nums.size();
        while(1){
            int count_zero = 0 ;
            int i = 0 ;
            for(i = 0 ; i < n; i++){
                if(nums[i]&1) break ; //odd is encountered
                
                else if(nums[i] == 0 ) count_zero+=1;
            }
            if(count_zero  == n) return count;
            
            // if all even elements
            if(i == n ){
                //divide all 
                count+=1; // one move added
                for(int i = 0 ; i < n ; i++) 
                    nums[i]/=2;
            }
            //make all odd numbers even by sub 1 
            for(int i = 0 ; i < n ; i++){
                if(nums[i]&1){
                    count+=1;
                    nums[i]-=1;
                }
            }
            
        }
        
        return count;
    }
};
