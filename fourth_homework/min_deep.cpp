#include<iostream>
#include<vector>
#include<algorithm>
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

int minDepth(TreeNode* root) {
	if (root == nullptr) {
		return 0;
	}
	if (root->left == nullptr && root->right == nullptr) {
		return 1;
	}
	if (root->left != nullptr && root->right != nullptr) {
		return 1 + min(minDepth(root->left), minDepth(root->right));
	}
	if (root->left != nullptr) {
		return 1 + minDepth(root->left);
	}
	if (root->right != nullptr) {
		return 1 + minDepth(root->right);
	}
}