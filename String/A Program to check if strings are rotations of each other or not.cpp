//link to problem https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;
 
   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}
