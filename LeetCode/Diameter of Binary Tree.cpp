#include<iostream>
#include<stdio.h>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    Solution() {}
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        if (root == NULL)
            return 0;
        res = max(res, diameterOfBinaryTree(root->left));
        res = max(res,diameterOfBinaryTree(root->right));
        
        int left = longestTree(root->left);
        int right = longestTree(root->right);
        res = max(res, left + right);
        return res;
    }
    int longestTree(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        return max(longestTree(root->left), longestTree(root->right)) + 1;
    }
};
int main()
{
    TreeNode n = TreeNode(1);
    n.right = new TreeNode(2);
    n.right->left = new TreeNode(3);
    n.right->right = new TreeNode(4);
    Solution s = Solution();
    cout<< s.diameterOfBinaryTree(&n);

}