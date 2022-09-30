//Remove Nth Node Fron End of The List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int len=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int pos=len-n+1;
        
        if(pos==1){
            ListNode*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        else{
        ListNode*curr=head;
        ListNode*prev=NULL;
            int cnt=1;
            while(cnt<pos){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
        return head;
    }
};

