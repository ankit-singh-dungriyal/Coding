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
    private TreeNode xp = null;
    private TreeNode yp = null;
    private int xd = 0, yd = 0;
    
    public void solve(TreeNode root, TreeNode par, int x, int y, int d){
        if(root == null)return;
        if(root.val == x){
            xp = par;
            xd = d;
        }
        if(root.val == y){
            yp = par;
            yd = d;
        }
        solve(root.left, root, x, y, d+1);
        solve(root.right, root, x, y, d+1);
    }
    
    public boolean isCousins(TreeNode root, int x, int y) {
        solve(root, null, x, y, 0);
        if(xp!= yp && xd == yd )return true;
        return false;
    }
}
