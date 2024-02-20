// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
ListNode*curr=A;
while(curr!=NULL && curr->next!=NULL){
if(curr->val==curr->next->val){
ListNode*todelete=curr->next;
ListNode*next_next=curr->next->next;
delete(todelete);
curr->next=next_next;
}
else{
curr=curr->next;
}
}
return A;
}
