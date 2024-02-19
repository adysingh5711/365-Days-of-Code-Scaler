// https://www.interviewbit.com/problems/merge-two-sorted-lists/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* d1, ListNode* d2) {

    if(d1==NULL) return d2;

    if(d2==NULL) return d1;

    if(d1->val>d2->val) swap(d1,d2);

    ListNode* res=d1;

    while(d1&&d2){

        ListNode*temp=NULL;

        while(d1!=NULL&&d1->val<=d2->val){

            temp=d1;

            d1=d1->next;

        }

        temp->next=d2;

        swap(d1,d2);

    }

    return res;

}
