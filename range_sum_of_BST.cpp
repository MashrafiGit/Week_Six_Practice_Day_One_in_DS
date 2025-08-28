/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// class Solution {
// public:

//     int sum_without_range(TreeNode* root, int low, int high)
//     {
//         int sum = 0;
//         if(root == NULL) return sum;

//         if(root->val >= low && root->val <= high) sum += root->val;

//         sum += sum_without_range(root->left, low, high);
//         sum += sum_without_range(root->right, low, high);
        
//         return sum;
//     }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         return sum_without_range(root, low, high);
//     }
// };