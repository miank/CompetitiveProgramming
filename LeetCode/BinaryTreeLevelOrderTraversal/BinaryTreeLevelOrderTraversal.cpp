// BinaryTreeLevelOrderTraversal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/**
 * Definition for a binary tree node.
 */ 
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
	vector<vector<int>> levelOrder(TreeNode* root) {
		if (root == nullptr) return {};
		vector<vector<int>> res;
		queue<TreeNode*> q;
		q.push(root);

		while (!q.empty())
		{
			int count = q.size();
			vector<int> temp;
			while (count--)
			{
				TreeNode* curr = q.front();
				q.pop();
				temp.push_back(curr->val);
				if (curr->left) q.push(curr->left);
				if (curr->right) q.push(curr->right);
			}

			res.push_back(temp);
		}
		return res;
	}
};