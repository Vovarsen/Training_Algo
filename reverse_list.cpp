#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

 Node* reverse_List(Node* head) {
	Node* prev = nullptr;
	Node* current = head;
	while (current != nullptr) {
		Node* next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
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
	 Node*newhead = reverse_List(head);
	 print_List(newhead);
	 return 0;

}


