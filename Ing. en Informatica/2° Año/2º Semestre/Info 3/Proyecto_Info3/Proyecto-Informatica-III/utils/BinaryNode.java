package utils;

public class BinaryNode<AnyType> implements BinaryTreePrinter2.PrintableNode {
    public AnyType elem;
    public BinaryNode<AnyType> left;
    public BinaryNode<AnyType> right;
//    public utils.BinaryNode(){
//        this(null, null, null);
//    }
    public BinaryNode(AnyType theElement){
        elem = theElement;
        left = right = null;
    }
    /**
     * Return the size of the binary tree rooted at t
     */
    public static <AnyType> int size(BinaryNode<AnyType> t){
        if (t == null)
            return 0;
        else
            return 1 + size(t.left) + size(t.right);
    }
    /**
     * Return the height of the binary tree rooted at t
     */
    public static <AnyType> int height(BinaryNode<AnyType> t){
        if (t == null)
            return -1;
        else
            return 1 + Math.max(height(t.left), height(t.right));
    }
    /**
     * Return a reference to a node that is the root of a
     * duplicate of the binary tree rooted at the current node
     */
    public BinaryNode<AnyType> duplicate(){
        BinaryNode<AnyType> root = new BinaryNode<AnyType>(elem);
        if (left != null)//if there's a left subtree
            root.left = left.duplicate();//duplicate attach
        if (right != null)//if there's a right subtree
            root.right = right.duplicate();//duplicate attach
        return root;//return resulting tree
    }
    /**
     * Print tree rooted at current node using postorder traversal
     */
    void printPostOrder(){
        if (left != null)//left
            left.printPostOrder();
        if (right != null)//right
            right.printPostOrder();
        System.out.println(elem);//node
    }
    /**
     * Print tree rooted at current node using inorder traversal
     */
    void printInOrder(){
        if (left != null)//left
            left.printInOrder();
        System.out.println(elem);//node
        if (right != null)//right
            right.printInOrder();
    }
    /**
     * Print tree rooted at current node using preorder traversal
     */
    void printPreOrder(){
        System.out.println(elem);//Node
        if (left != null)
            left.printPreOrder();//Left
        if (right != null)
            right.printPreOrder();//right
    }
    public AnyType getElem() {
        return elem;
    }

    public BinaryNode<AnyType> getLeft() {return left;}

    public BinaryNode<AnyType> getRight() {return right;}

    //    public utils.BinaryNode<Anytype> getLeft() {
//        return left;
//    }
//    public utils.BinaryNode<Anytype> getRight() {
//        return right;
//    }
//    public void setElem(Anytype elem) {
//        this.elem = elem;
//    }
    public void setLeft(BinaryNode<AnyType> left) {
        this.left = left;
    }
    public void setRight(BinaryNode<AnyType> right) {
        this.right = right;
    }
    @Override
    public BinaryTreePrinter2.PrintableNode getLeftP() {
        return left;
    }

    @Override
    public BinaryTreePrinter2.PrintableNode getRightP() {
        return right;
    }


    public String getText() {return elem.toString();}
}
