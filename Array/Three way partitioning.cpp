//link to problem https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
{
    int left=0;
    int mid=0;
    int right=arr.size()-1;
 while (mid<=right){
            if (arr[mid]<a){
                swap(arr[mid++],arr[left++]);
            }
             else if (arr[mid]>b){
                    swap(arr[mid],arr[right--]);
             }
            else
                mid++;

          }
            
        }
};
