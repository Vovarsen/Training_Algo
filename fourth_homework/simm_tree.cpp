#include<iostream>
#include<vector>
//#include<queue>
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

bool isSymmetric(TreeNode* root) {
	if (root == nullptr) {
		return true;
	}
	vector<TreeNode*> q;
	q.push_back(root);

	while (q.size() > 0) {

		int size_q = q.size();

		for (int i = 0; i < q.size(); i++) {
			if (q[i] == nullptr && q[q.size() - i - 1] == nullptr) {
				continue;
			}
			if (q[i] == nullptr || q[q.size() - i - 1] == nullptr) {
				return false;
			}
			if (q[i]->data != q[q.size() - i - 1]->data) {
				return false;
			}
			q.push_back(q[i]->left);
			q.push_back(q[i]->right);
		}
		q.erase(q.begin(), q.begin() + size_q);
	}
	return true;
}