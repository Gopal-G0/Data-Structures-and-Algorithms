#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* next;

    //Constructor
    ListNode(int data) {
        this -> data = data;
        next = NULL;
    }
};

bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while( slow && fast && fast -> next ) {
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast) {
                return true;
            }
        }

        return false;
    }