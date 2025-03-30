#include <iostream>
using namespace std;


#include <list>
#include <vector>

#include <unordered_map>
//approach: we maintain three pointers to traverse both lists and merge them in sorted order.

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* dummy = new ListNode(-1);
            ListNode* temp1 = list1;
            ListNode* temp2 = list2;
            ListNode* temp3 = dummy;
            //not changing the head of the linked list 
            
            while(temp1 && temp2){
                if(temp1->val <= temp2->val){
                    temp3->next = temp1;
                    temp1 = temp1->next;
                }
                else {
                    temp3->next = temp2;
                    temp2 = temp2->next;
                }
                temp3 = temp3->next;
            }
            if(temp1) temp3->next = temp1;
            if(temp2) temp3->next = temp2;
            return dummy->next;
        }
    };