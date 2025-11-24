#include<iostream>
using namespace std;
class TreeNode {
public:
	int data;
	int balance_factor;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val = 0,int balance = 0, TreeNode* left = nullptr, TreeNode* right = nullptr) {
		this->data = val;
		this->balance_factor = balance;
		this->left = left;
		this->right = right;
		
	}
};

int heightsAndBalance(TreeNode* node) {
	if (!node) {
		return 0;
	}
	int leftHeight = heightsAndBalance(node->left);
	int rightHeight = heightsAndBalance(node->right);

	node->balance_factor = leftHeight - rightHeight;

	return 1 + max(leftHeight, rightHeight);
}