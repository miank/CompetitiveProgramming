// SearchInABinarySearchTree.cpp

#include <iostream>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}*root = nullptr;
 
class Solution {
public:
	TreeNode* searchBST(TreeNode* root, int val) {
		if (root == NULL)
			return NULL;
		if (root->val == val)
			return root;
		if (root->val < val)
			root = root->right;
		else
			root = root->left;
		return root;
	}
};

int main()
{
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
}
