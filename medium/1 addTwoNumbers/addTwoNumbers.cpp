#include <bits/stdc++.h>
#include <string>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

bool isNull(ListNode *l){
    return (l == nullptr) ? true : false;
}

int listSize(ListNode *l){
    size_t c = 0;
    ListNode *current = l;
    while(!isNull(current)){
        c++;
        current = current->next;
    }
    return c;
}

int nodeToInt(ListNode *l){
    const int base = 10;
    int intNode = 0;
    int lvl = listSize(l)-1;
    ListNode *currentNode = l;
    while (!isNull(currentNode)){
        intNode += (currentNode->val)*std::pow(base,lvl);
        lvl--;
        currentNode = currentNode->next;
    }
    return intNode;
}

ListNode* intToNode(int n) {
    const std::string strInt = std::to_string(n);

    ListNode *head = new ListNode(strInt[strInt.length()-1] - '0');
    ListNode *current = head;

    for (int i = strInt.length()-2; i >= 0; --i) {
        current->next = new ListNode(strInt[i] - '0');
        current = current->next;
    }

    return head;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
        int n1 = nodeToInt(l1);
        int n2 = nodeToInt(l2);

        int sum = n1+n2;
        
        return intToNode(sum);
    }
};

// test

int main(){
    Solution solution;
    ListNode *l1 = new ListNode(4);
    ListNode *l2 = new ListNode(2);

    ListNode *sumNode = solution.addTwoNumbers(l1,l2);

    std::cout << sumNode->val;
}
