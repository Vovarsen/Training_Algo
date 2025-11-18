#include<iostream>
#include<vector>
using namespace std;

class TreeNode {
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val = 0, TreeNode*left = nullptr, TreeNode*right = nullptr ){
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

int main() {
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}
	TreeNode* tree = buildTree(arr, 0);
	cout << tree->data << endl;
	cout << tree->left->data << endl;
	cout << tree->right->data << endl;
	cout << tree->right->right->data << endl;
	return 0;
	
}