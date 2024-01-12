// https://www.interviewbit.com/problems/replace-with-factors/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    ListNode* copy=A;
    while(copy)
    {
        if(copy->val<B)
        copy->val=0;
        else if(copy->val==B)
        {
            copy->val=B;
        }
        else{
            int n=B;
            for(int i=2;i>0;i++)
            {
                if(copy->val < i*B)
                {
                    copy->val=(i-1)*B;
                    break;
                }
            }
        }
        copy=copy->next;
    }
    return A;
}
