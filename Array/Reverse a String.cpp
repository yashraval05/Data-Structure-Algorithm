string reverseWord(string str){
    
  int start = 0;
  int end = str.length()-1;
  char temp;
  while (start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
  }
  return str;
}
