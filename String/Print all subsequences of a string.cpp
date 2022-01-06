//link to problem https://www.geeksforgeeks.org/print-subsequences-string/

void printSubSequence(string input, string output){
  if (input.length()==0)
     return;
  printSubSequence(input.substr(1),output);
  printSubsequence(input.substr(1),output+input[0]);
  return
  }
}
