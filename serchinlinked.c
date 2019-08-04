/*
reference data types:

struct LLNode {
  int val;
  LLNode *next;
  LLNode(int x) : val(x), next(nullptr) {}
};

*/

struct Solution {
  int search(LLNode *head, int n) {
       LLNode* current = head;
    int count=0;
    //Traverse linked list
    while (current != NULL) 
    { 
        if (current->val == n) 
            count=count+1; 
        current = current->next; 
    } 
    
    //Element is not found
    return count; 
      /* write your solution here */
  }
};