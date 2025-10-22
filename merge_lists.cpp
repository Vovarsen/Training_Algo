#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* merge_Lists(Node* head1, Node* head2) {

    Node* head;
    if (head1->data <= head2->data) {
        head = head1;
        head1 = head1->next;
    }
    else {
        head = head2;
        head2 = head2->next;
    }

    Node* current = head;
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            current->next = head1;
            head1 = head1->next;
        }
        else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    if (head2 == nullptr) {
        current->next = head1;
    }
    if (head1 == nullptr) {
        current->next = head2;
    }

    return head;
}

void print_List(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}

int main() {
    int n1;
    cin >> n1;
    Node* head1 = nullptr;
    Node* tail1 = nullptr;

    for (int i = 0; i < n1; i++) {
        int value;
        cin >> value;
        Node* newnode = new Node{ value, nullptr };
        if (head1 == nullptr) {
            head1 = newnode;
            tail1 = newnode;
        }
        else {
            tail1->next = newnode;
            tail1 = newnode;
        }
    }

    int n2;
    cin >> n2;
    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    for (int i = 0; i < n2; i++) {
        int value;
        cin >> value;
        Node* newnode = new Node{ value, nullptr };
        if (head2 == nullptr) {
            head2 = newnode;
            tail2 = newnode;
        }
        else {
            tail2->next = newnode;
            tail2 = newnode;
        }
    }

    Node* head = merge_Lists(head1, head2);
    print_List(head);

    return 0;
}