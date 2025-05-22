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

ListNode* getMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        if (head->next->next == NULL) {
            return head->next;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                fast = fast->next;
            }

            slow = slow->next;
        }

        return slow;
    }


int main() {

    ListNode* node1 = new ListNode(-1);
    ListNode* head = node1;

    return 0;
}