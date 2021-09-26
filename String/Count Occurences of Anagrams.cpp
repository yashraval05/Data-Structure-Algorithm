//link to problem https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1#

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=txt.length();
	    int k=pat.length();
	    int i;
	    vector <int> mp_txt(26,0);
	    vector <int> mp_pat(26,0);
	    for (i=0;i<k;i++){
	        mp_txt[txt[i]-'a']++;
	        mp_pat[pat[i]-'a']++;
	    }
	    int count =0;
	    if(mp_pat==mp_txt)
	        count++;
	    for(i=k;i<n;i++){
	        mp_txt[txt[i]-'a']++;
	        mp_txt[txt[i-k]-'a']--;
	        if (mp_pat == mp_txt)
	            count++;
	    }
	    return count;
	    
	    }
};
