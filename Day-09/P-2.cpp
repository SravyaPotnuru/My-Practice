//Reverse Nodes in k-group

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return head;
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
       for(int i=0;i<arr.size();i=i+k){
           if(arr.size()-i<k) break;
           reverse(arr.begin()+i,arr.begin()+i+k);
       }
       int j=0;
       ListNode*tem=head;
       while(j<arr.size()&&tem!=NULL){
        tem->val=arr[j++];
        tem=tem->next;
       }
       return head;
    }
};

