//link to problem. https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/



int maxSubStr(string str, int n)
{
 
    // To store the count of 0s and 1s
    int count0 = 0, count1 = 0;
 
    // To store the count of maximum
    // substrings str can be divided into
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            count0++;
        }
        else {
            count1++;
        }
        if (count0 == count1) {
            cnt++;
        }
    }
 
    // It is not possible to
    // split the string
    if (count0!=count1) {
        return -1;
    }
 
    return cnt;
}
