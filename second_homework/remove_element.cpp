#include<iostream>

using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
    Node() : val(0), next(nullptr) {} 
};

Node* remove_Element(Node* head, int val) {
    Node* dummy = new Node();
    dummy->next = head;
    Node* prev = dummy;
    Node* cur = head;

    while (cur != nullptr) {
        if (cur->val == val) {
            prev->next = cur->next;
        }
        else {
            prev = cur;
        }
        cur = cur->next;
    }
    return dummy->next;
}