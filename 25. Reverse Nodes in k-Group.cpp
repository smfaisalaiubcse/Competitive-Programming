#include <map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        map<int, ListNode*> mp;
        int i = 1;
        ListNode* temp = head;

        while(temp) {
            mp[i++] = temp;
            temp = temp->next;
        }

        
    }
};
