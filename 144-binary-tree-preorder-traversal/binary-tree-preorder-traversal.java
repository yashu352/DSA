class Solution
{
    ArrayList<Integer> list=new ArrayList<>();
    public List<Integer> preorderTraversal(TreeNode root)
    {
        preorder(root);
        return list;
    }
    void preorder(TreeNode root)
    {
        if(root==null)
        {
            return;
        }
        list.add(root.val);
        preorder(root.left);
        preorder(root.right);
    }
}