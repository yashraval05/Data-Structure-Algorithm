//link to problem https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1#  

class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int ans = -1;
	    int current = 0;
	    for (char x: S){
	        if (x == '1')
	            current -= 1;
	       else
	            current += 1;
	       ans = max(ans,current);
	       if (current<0)
	            current =0;
	    }
	    return ans;
	}
};
