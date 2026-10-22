import org.w3c.dom.Node;

public class Binary_tree_postorder {
    static class Node {
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data=data;
        this.left=null;
        this.right=null;
    }
    }
static class BinaryTree{
    static int idx=-1;
public static Node buildTree(int nodes[]){
idx++;
if(nodes[idx]==-1){
    return null;
}
Node newnode=new Node(nodes[idx]);

newnode.left=buildTree(nodes);
newnode.right=buildTree(nodes);

return newnode;
}
} 
public static void postorder(Node root){
  if(root==null){
    return;
  }
  postorder(root.left);
  postorder(root.right);
  System.out.print(root.data+" ");
}
public static void main(String[] args) {
        int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        BinaryTree tree=new BinaryTree();
  
 Node root=tree.buildTree(nodes);
 postorder(root);
    }
} 

