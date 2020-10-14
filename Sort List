/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode* getMid(ListNode* head){
        if(head==NULL or head->next==NULL)return head;
        if(head->next->next==NULL){
            ListNode* temp=head->next;
            head->next=NULL;
            return temp;
        }
        ListNode *slow=head,*fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* h2=slow->next;
        slow->next=NULL;
        return h2;
    }
    
    ListNode* merge(ListNode* h1,ListNode*h2){
        if(!h1)return h2;
        if(!h2)return h1;
        ListNode* res=NULL;
        if(h1->val<=h2->val){
            res=h1;
            res->next=merge(h1->next,h2);
        }
        else{
            res=h2;
            res->next=merge(h1,h2->next);
        }
        return res;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* h2=getMid(head);
        if(h2==head)return head;
        ListNode* head1=sortList(head);
        ListNode* head2=sortList(h2);
        ListNode* res=merge(head1,head2);
        return res;
    }
};
