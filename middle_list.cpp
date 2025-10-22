#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* middle_List(Node* head) {
	Node* fast;
	Node* slow;
	fast = slow = head;

	while (fast != nullptr and fast->next != nullptr) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}


int main() {
	int n;
	cin >> n;
	Node* head = nullptr;
	Node* tail = nullptr;

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		Node* newnode = new Node{ value, nullptr };
		if (head == nullptr) {
			head = newnode;
			tail = newnode;
		}
		else {
			tail->next = newnode;
			tail = newnode;
		}
	}
	Node* slow = middle_List(head);

	if (slow != nullptr) {
		int middle = slow->data;
		cout << middle << endl;
	}
	return 0;
}