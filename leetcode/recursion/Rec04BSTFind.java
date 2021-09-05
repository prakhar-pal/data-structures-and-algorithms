// https://leetcode.com/problems/search-in-a-binary-search-tree
// Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public TreeNode searchBST(TreeNode root, int val) {
        if(root == null || root.val == val) return root;
        else return val > root.val ?  searchBST(root.right, val) : searchBST(root.left, val);
    }
}

public class Rec04BSTFind {
    public static void main(String[] args) {
        Solution sol = new Solution();
        // example 1
        // TreeNode node = new TreeNode(4);
        // node.left = new TreeNode(2);
        // node.right = new TreeNode(7);
        // node.left.left = new TreeNode(1);
        // node.left.right = new TreeNode(3);
        // TreeNode root = sol.searchBST(node, 2);

        // example 2
        TreeNode node = new TreeNode(18, new TreeNode(2), new TreeNode(22));
        node.right.right = new TreeNode(63, null, new TreeNode(84));
        TreeNode root = sol.searchBST(node, 63);
        System.out.println(root == node.right.right);
    }
}