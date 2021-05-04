#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr) return l2;
    if(l2 == nullptr) return l1;

    ListNode *head = nullptr, *prev = nullptr;
    if(l1->val <= l2->val){
      prev = head = l1;
      l1 = l1->next;
    }else{
      prev = head = l2;
      l2 = l2->next;
    }

    while(l1 != nullptr && l2 != nullptr){
      if(l1->val <= l2->val){
        prev->next = l1;
        l1 = l1->next;
      }else{
        prev->next = l2;
        l2 = l2->next;
      }
      prev = prev->next;
    }

    if(l1 == nullptr){
      prev->next = l2;
    }else{
      prev->next = l1;
    }
    return head;
  }
};
