#include<iostream>
#include<vector>
#include<queue>

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
bool isMaxHeap(TreeNode* root) {
	if (!root) {
		return true;
	}
	queue<TreeNode*> q;
	q.push(root);
	bool shouldBeLeaf = false;

	while (q.size() > 0) {
		TreeNode* current = q.front();
		q.pop();

		if (current->left) {
			if (shouldBeLeaf || current->left->data > current->data) {
				return false;
			}
			q.push(current->left);
		}
		else {
			shouldBeLeaf = true;
		}
		if (current->right) {
			if (shouldBeLeaf || current->right->data > current->data) {
				return false;
			}
			q.push(current->right);
		}
		else {
			shouldBeLeaf = true;
		}
	}
	return true;
}