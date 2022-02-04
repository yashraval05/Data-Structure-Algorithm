//link to problem https://practice.geeksforgeeks.org/problems/match-specific-pattern/1/?category[]=Strings&category[]=Strings&difficulty[]=0&page=1&query=category[]Stringsdifficulty[]0page1category[]Strings

vector<string> v;

   unordered_map<char,int> mp1;

   for(int i=0;i<pattern.length();i++)

   mp1[pattern[i]]++;

      for(int i=0;i<dict.size();i++)

      {

          string s=dict[i];

          if(s.length()==pattern.length())

          {

              unordered_map<char,int> mp2;

              for(int j=0;j<s.length();j++)

              mp2[s[j]]++;

              bool flag=true;

              for(int j=0;j<s.length();j++)

              {

                  if(mp2[s[j]]!=mp1[pattern[j]])

                  {

                      flag=false;

                      break;

                  }

              }

              if(flag)

              v.push_back(s);

          }

      }

      return v;
