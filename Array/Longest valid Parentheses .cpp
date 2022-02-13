//link to problem https://practice.geeksforgeeks.org/problems/longest-valid-parentheses5657/1

    int maxLength(string S){
       // code here
       stack<int> s;
       s.push(-1);
       int res=0;
       for(int i=0;i<S.length();i++){
           
           if(S[i]=='(') s.push(i);
           else{
               s.pop();
               if(!s.empty()) res=max(res , i-s.top());
               else s.push(i);
           }
       }
       return res;
   }
