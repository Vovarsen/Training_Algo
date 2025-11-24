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

//рекурсивный

TreeNode* mirrorTree(TreeNode* node) {
	if (node == nullptr) {
		return nullptr;
	}
	swap(node->left, node->right);

	mirrorTree(node->left);
	mirrorTree(node->right);

	return node;
}

//итеративный

TreeNode* mirrorTreeIter(TreeNode* node) {
	if (node == nullptr) {
		return nullptr;
	}
	queue<TreeNode*>q;
	q.push(node);
	while (q.size() > 0) {
		TreeNode* cur = q.front();
		q.pop();

		swap(cur->left, cur->right);

		if (cur->left) {
			q.push(cur->left);
		}
		if (cur->right) {
			q.push(cur->right);
		}
	}
	return node;
}