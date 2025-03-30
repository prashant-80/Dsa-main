
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//approach: we use two pointers to check if the linked list has a cycle.
// Time complexity: O(n)
// Space complexity: O(1) as we are not using any extra space

//popular questions on linkedlist
//1. reverse a linked list  --> approach: we use two pointers to reverse the linked list.
//2. merge two sorted linked list --> approach: we use three pointers to merge the two linked lists in sorted order.
//3. remove nth node from end of list --> approach: we use two pointers to find the nth node from the end of the list.
//4. intersection of two linked list --> approach: we use a hash set to find the intersection point of two linked lists.

//5. palindrome linked list --> approach: we use two pointers to find the middle of the linked list and then reverse the second half of the linked list.
//     //then we compare the first half and the second half of the linked list.
//6. linked list cycle--> approach: we use two pointers to check if the linked list has a cycle.
//     //if the two pointers meet at some point then the linked list has a cycle.
//7. add two numbers--> approach: we use two pointers to add the two numbers represented by the linked list.
//8. copy list with random pointer
//9. odd even linked list--> approach: we use two pointers to separate the odd and even nodes of the linked list.
//     //then we connect the odd and even nodes.

//10. remove duplicates from sorted list--> approach: we use a hash set to remove the duplicates from the sorted linked list.

//11. remove duplicates from sorted list II--> approach: we use two pointers to remove the duplicates from the sorted linked list II.
//     //we maintain a hash set to keep track of the duplicates.
//     //then we connect the non-duplicate nodes.
//     //finally we return the head of the linked list.

//12. swap nodes in pairs
//13. rotate list
//14. partition list
//15. odd even linked list II
//16. reverse nodes in k group
//17. flatten a multilevel doubly linked list
//18. sort list
//19. linked list cycle II
//20. remove zero sum consecutive nodes from linked list
//21. split linked list in parts
//22. odd even linked list II
//23. reverse linked list II
//24. odd even linked list II
//25. linked list components
//26. linked list in binary tree


class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* slow  = head;
            ListNode* fast = head;
            while(fast!=NULL && fast->next!=NULL){
                if(slow == fast) return true;
                slow = slow->next;
                fast = fast->next->next;
            }
            return false;
        }
    };