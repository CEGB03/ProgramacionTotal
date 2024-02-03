package utils;

public class BinarySearchTree<AnyType extends Comparable<? super AnyType>>{
    private BinaryNode<AnyType> root;
    public BinarySearchTree(){
        root = null;
    }
//    public utils.BinarySearchTree(AnyType rootItem){
//        root = new BinarySearchNode<AnyType>(rootItem, null, null);
//    }
    public void insert(AnyType x){
        try {
            root = insert(x, root);
        }catch (Exception e){
            System.out.println(e.toString());
            e.printStackTrace();
        }
    }
    public void remove(AnyType x){
        try {
            root = remove(x, root);
        }catch (Exception e){
            System.out.println(e.toString());
            e.printStackTrace();
        }
    }
    public void removeMin(){
        try {
            root = removeMin(root);
        }catch (Exception e){
            System.out.println(e.toString());
            e.printStackTrace();
        }
    }
    public AnyType findMin(){
        return elementAt(findMin(root));
    }
    public AnyType findMax(){
        return elementAt(findMax(root));
    }
    public AnyType find(AnyType x){
        return elementAt(find(x, root));
    }
    /**
     * Internal method to get element field
     * @param t the node
     * @return the element field or null if t is null
     */
    private AnyType elementAt(BinaryNode<AnyType> t){
        return t == null ? null : t.elem;
    }
    /**
     * Internal method to find an item in a subtree
     * @param x is item to search for
     * @param t the node that roots the tree
     * @return node containing the matched item
      */
    private BinaryNode<AnyType> find(AnyType x, BinaryNode<AnyType> t){
        while (t != null){
            if (x.compareTo(t.elem) < 0)
                t = t.left;
            else if (x.compareTo(t.elem) > 0)
                t = t.right;
            else
                return t;//match
        }
        return null;//not found
    }
    /**
     * Internal method to find the smallest item in a subtree
     * @param t the node that roots the tree
     * @return node containing the smallest item
     */
    private BinaryNode<AnyType> findMin(BinaryNode<AnyType> t){
        if (t != null)
            while (t.left != null)
                t = t.left;
        return t;
    }
    /**
     * Internal method to find the largest item in a subtree
     * @param t the node that roots the tree
     * @return node containing the largest item
     */
    private BinaryNode<AnyType> findMax(BinaryNode<AnyType> t){
        if (t != null)
            while (t.right != null)
                t = t.right;
        return t;
    }
    /**
     * Internal method to insert into a subtree
     * @param x the item to insert
     * @param t the node that roots the tree
     * @return the new root
     * @throws DuplicateItemException if x is already present
     */
    private BinaryNode<AnyType> insert(AnyType x, BinaryNode<AnyType> t) throws DuplicateItemException {
        if (t == null)
            t = new BinaryNode<AnyType>(x);
        else if (x.compareTo(t.elem) < 0)
            t.left = insert(x, t.left);
        else if (x.compareTo(t.elem) > 0)
            t.right = insert(x, t.right);
        else {
            //throw new utils.DuplicateItemException();//no deja que se repitan los elementos
            System.out.println("Elemento duplicado: " + x.toString());//deja que se repitan los elementos
        }
        //System.out.println(x.toString());
        return t;
    }
    /**
     * Internal method to remove minimum item from subtree
     * @param t the node that roots the tree
     * @return the new root
     * @throws ItemNotFoundException if t is empty*/
    private BinaryNode<AnyType> removeMin(BinaryNode<AnyType> t) throws ItemNotFoundException {
        if (t == null)
            throw new ItemNotFoundException();
        else if (t.left != null){
            t.left = removeMin(t.left);
            return t;
        }else
            return t.right;
    }
    /**
     * Internal method to remove from subtree
     * @param x the item to remove
     * @param t the node that roots the tree
     * @return the new root
     * @throws ItemNotFoundException if x is not found
     */
    private BinaryNode<AnyType> remove(AnyType x, BinaryNode<AnyType> t) throws ItemNotFoundException {
        if (t == null)
            throw new ItemNotFoundException();
        if (x.compareTo(t.elem) < 0)
            t.left = remove(x, t.left);
        else if (x.compareTo(t.elem) > 0)
            t.right = remove(x, t.right);
        else if (t.left != null && t.right != null){//two children
            t.elem = findMin(t.right).elem;
            t.right = removeMin(t.right);
        }else
            t = (t.left != null) ? t.left : t.right;
        return t;
    }
    public BinaryNode<AnyType> getRoot() {
        return root;
    }
    public int size(){
        return BinaryNode.size(root);
    }
    /**
     * root's height
     */
    public int height(){
        return BinaryNode.height(root);
    }
    public int depth(){
        return height()+1;
    }
    public void printPreOrder(){
        if (root != null)
            root.printPreOrder();
    }
    public void printInOrder(){
        if (root != null) {
            System.out.println("Root: "+root.elem);
            root.printInOrder();
        }
    }
    public void printPostOrder(){
        if (root != null)
            root.printPostOrder();
    }
    public void makeEmpty(){
        root = null;
    }
    public boolean isEmpty(){
        return root == null;
    }
    /**
     * Escriba un método llamado dtree, que toma como sus argumentos una
     * referencia al nodo raíz del árbol y el valor a borrarse. El método deberá
     * localizar el nodo que contenga el valor a borrarse y si no lo encuentra deberá
     * imprimir un mensaje para indicarlo. Después de borrar un elemento, llame al
     * método inorder para confirmar que la operación de borrado fue correctamente
     * ejecutada.
     */
    public BinaryNode<AnyType> dtree(BinaryNode<AnyType> root, AnyType delete){
        BinaryNode<AnyType> temp;
        //caso base
        if (root == null){
            System.out.println("Delete Item Not Found");
            return root;
        }
        //caso recursivo
        if (root.elem.compareTo(delete) > 0){
            root.left = dtree(root.left, delete);
            //return root;
        } else if (root.elem.compareTo(delete) < 0) {
            root.right = dtree(root.right, delete);
            //return root;
        }
        //llego aca cuando encuentro el nodo

        else {
            //si uno de los hijos es null
            if (root.left == null)
                //temp = root.right;
                return root.right;
            else if (root.right == null)
                //temp = root.left;
                return root.left;
            //si tiene ambos hijos
            //conseguir sucesor en orden
            root.elem = findMin(root.right).elem;
            //eliminar sucesor en orden
            root.right = dtree(root.right, root.elem);
        }
        return root;
    }

}
