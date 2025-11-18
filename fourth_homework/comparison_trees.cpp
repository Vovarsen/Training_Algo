#include<iostream>
#include<vector>
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

bool isSameTree(TreeNode* root1, TreeNode* root2) {
	if (root1 == nullptr && root2 == nullptr) {
		return true;
	}
	if (root1 == nullptr || root2 == nullptr) {
		return false;
	}
	if (root1->data != root2->data) {
		return false;
	}
	return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
}