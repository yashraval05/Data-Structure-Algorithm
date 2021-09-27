//link to problem https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
    int count = 0;
    struct Node* mid = head;
 
    while (head != NULL)
    {
         
        // Update mid, when 'count'
        // is odd number
        if (count & 1)
            mid = mid->next;
 
        ++count;
        head = head->next;
    }
 
    // If empty list is provided
    if (mid != NULL)
        return mid -> data;
    }
};
