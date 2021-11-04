/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int sum = 0;
    private boolean check(TreeNode root){
        if(root.left==null && root.right==null)return true;
        return false;
    }
    private void solve(TreeNode root){
        if(root==null)return;
        if(root.left!=null && check(root.left))sum+=root.left.val;
        solve(root.right);
        solve(root.left);
    }
    public int sumOfLeftLeaves(TreeNode root) {
        solve(root);
        return sum;
    }
}
