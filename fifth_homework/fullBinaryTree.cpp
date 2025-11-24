#include<iostream>
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

bool isCompleteTree(TreeNode* root) {
	if (!root) {
		return true;
	}
	queue<TreeNode*>q;
	q.push(root);
	bool shouldBeLeaf = false;

	while (q.size() > 0) {
		TreeNode* node = q.front();
		q.pop();

		if (!node) {
			shouldBeLeaf = true;
		}
		else {
			if (shouldBeLeaf) {
				return false;
			}
			q.push(node->left);
			q.push(node->right);
		}
	}
	return true;
}