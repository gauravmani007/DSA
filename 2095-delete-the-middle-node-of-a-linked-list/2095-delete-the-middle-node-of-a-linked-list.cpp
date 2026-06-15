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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp = head;
        int count = 0;

        while(temp!= nullptr){
            count++;
            temp = temp->next;
        }

        count = count/2;

        ListNode* curr = head;
        ListNode* prev=NULL;

        int i = 0;
        while(curr!=NULL){
            if(i!=count){
                i++;
                prev=curr;
                curr=curr->next;
            }else{
                prev->next=curr->next;
                delete curr;
                break;
            }
        }

        return head;
    }
};