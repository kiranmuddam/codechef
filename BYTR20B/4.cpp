#include<bits/stdc++.h>
using namespace std;
 
 
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode();
        ListNode *tail = result;
        ListNode *temp = tail;
        
        if (l1 == NULL && l2 == NULL) {
            result = NULL;
        }
        
        
        while (l1 != NULL || l2 !=NULL) {
            int l1Value = INT_MAX;
            int l2Value = INT_MAX;
            
            if (l1 != NULL) {
                l1Value = l1->val;
            }
            
            if (l2 != NULL) {
                l2Value = l2->val;
            }
            
            if (l1Value <= l2Value) {
                ListNode* temp = new ListNode(l1Value);
                tail->next = temp;
                l1 = l1->next;
                tail = tail->next;
            } else {
                ListNode* temp = new ListNode(l2Value);
                tail->next = temp;
                l2 = l2->next;
                tail = tail->next;
            }

        }

        while (result != NULL) {
            cout << result->val << endl;
            result = result -> next;
        }
        
    }

    int main () {
        ListNode *first = new ListNode();
        first->val = 1;
        ListNode *second = new ListNode();
        second->val = 2;
        ListNode *third = new ListNode();
        third->val = 4;

        first->next = second;
        second->next = third;

        ListNode *first1 = new ListNode();
        first1->val = 1;
        ListNode *second1 = new ListNode();
        second1->val = 3;
        ListNode *third1 = new ListNode();
        third1->val = 4;

        first1->next = second1;
        second1->next = third1;

        mergeTwoLists(first, first1);
        
    }