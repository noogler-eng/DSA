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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++) m[nums[i]] = 1;

        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){

            // removal it
            if(m[head->val] == 1){
                curr=curr->next;
                head = curr;
                continue;
            }

            if(m[curr->val] == 1){
                prev->next = curr->next;
                curr->next = NULL;
                curr=prev->next;
                continue;
            }

            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};