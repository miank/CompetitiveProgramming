// InorderTreeTraversal.cpp 

#include <string>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		stack<TreeNode *> s;
		TreeNode *curr = root;
		vector<int> v;

		while (curr != NULL || s.empty() == false)
		{
			/* Reach the left most Node of the
			   curr Node */
			while (curr != NULL)
			{
				/* place pointer to a tree node on
				   the stack before traversing
				  the node's left subtree */
				s.push(curr);
				curr = curr->left;
			}

			/* Current must be NULL at this point */
			curr = s.top();
			s.pop();
			int ele = curr->val;

			v.push_back(ele);

			/* we have visited the node and its
			   left subtree.  Now, it's right
			   subtree's turn */
			curr = curr->right;

		} /* end of while */
		return v;
	}
};