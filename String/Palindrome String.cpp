//link to problem https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

	int isPalindrome(string S)
{
    // Your code goes here
    int start=0;
    int end=S.length()-1;
    while(start<end){
        if(S[start]!=S[end])
            return 0;
        else{
            start++;
            end--;
        }
    }
    return 1;
}
