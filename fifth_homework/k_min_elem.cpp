#include<iostream>
#include <vector>
#include<stack>
using namespace std;

class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val = 0, TreeNode* left = nullptr, TreeNode* right = nullptr) {
		this->data = val;
		this->left = left;
		this->right = right;

	}
};

TreeNode* buildTree(vector<int> arr, int i) {
	if (i >= arr.size()) {
		return nullptr;
	}
	TreeNode* root = new TreeNode(arr[i]);
	root->left = buildTree(arr, 2 * i + 1);
	root->right = buildTree(arr, 2 * i + 2);
	return root;
}
//итеративный

int inorderMinIterative(TreeNode* node, int k) {
	stack<TreeNode*>st;
	int counter = 0;
	TreeNode* cur = node;

	while (st.size() > 0 || cur != nullptr) {
		while (cur != nullptr) {
			st.push(cur);
			cur = cur->left;
		}
		cur = st.top();
		st.pop();
		counter++;

		if (counter == k) {
			return cur->data;
		}
		cur = cur->right;
	}
	return -1;
}

//рекурсивный

int inorderMinRecursive(TreeNode* node, int k, int counter) {
	if (node == nullptr) {
		return -1;
	}
	int leftResult = inorderMinRecursive(node->left, k, counter);
	if (leftResult != -1) {
		return leftResult;
	}
	counter++;

	if (counter == k) {
		return node->data;
	}
	return inorderMinRecursive(node->right, k, counter);
}
