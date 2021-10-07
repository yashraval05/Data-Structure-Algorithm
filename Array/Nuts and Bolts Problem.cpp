//link to problem https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays#

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n)  {
    unordered_map<char,int> mp;
    for(int i=0; i<n; i++){
        mp[nuts[i]]=i;
    }
    sort(bolts,bolts+n);
    for(int i=0; i<n; i++){
        if(mp.find(bolts[i])!=mp.end()){
            nuts[i]=bolts[i];
        }
    }
	}

};
