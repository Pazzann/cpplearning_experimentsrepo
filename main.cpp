#include <iostream>
#include <vector>


#include "experiments/Calculator.h"
#include "experiments/algorythms.h"


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {

        ListNode *buildSeg = new ListNode();
        ListNode *start = buildSeg;
        ListNode *t[k];
        int g = 0;
        while (head) {
            t[g] = head;
            g++;
            head = head->next;

            if (g % k == 0) {
                for (int i = k - 1; i > 0; i--) {
                    buildSeg->val = t[i]->val;
                    buildSeg->next = t[i - 1];
                    buildSeg = buildSeg->next;
                }
                buildSeg->next=new ListNode();
                buildSeg = buildSeg->next;
                g=0;
            } else if(head == NULL){
                buildSeg->val = t[0]->val;
                buildSeg->next = t[0]->next;
            }
        }
        return start;
    }
};


int main() {

    Solution().reverseKGroup(new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, nullptr))))), 2);

    return 0;
}
