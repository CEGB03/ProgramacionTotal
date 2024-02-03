package utils;

public class ProductList {

    private ProductNode root = null;

    /**
     * Add element to List
     * Checking if List is empty
     * or if element is already on the List
     * @param element is the name of the Product to add
     */
//    public void push(String element) {
//        if(isEmpty()){
//            ProductNode newNodo = new ProductNode(element, 1);
//            //sort si la lista esta vacia no hace falta
//            newNodo.setNext(root);
//            root = newNodo;
//        } else if ( !(searchNode(element).getName().compareTo(element)==0) ) {
//            ProductNode newNodo = new ProductNode(element, 1);
//            newNodo.setNext(root);
//            root = newNodo;
//            System.out.println("root: "+ root.getElemProduct());
//            sort(root, searchLastNode());
//        } else {
//            adjustStock(element, 1);
//        }
//    }

    /**
     * Add element and stock to List or to modify the stock of a Product
     * Checking if element is already on the List
     * to add stock to it or adding element with stock
     * @param element is the name of the Product to add
     * @param stock is the stock to set or add to element
     */
    public void push(String element, int stock) {
        if(isEmpty()){
            ProductNode newNodo = new ProductNode(element, stock);
            newNodo.setNext(root);
            root = newNodo;
        } else if( !(searchNode(element).getName().compareTo(element)==0) ) {
            ProductNode newNodo = new ProductNode(element, stock);
            //sort(root, newNodo);
            newNodo.setNext(root);
            root = newNodo;
            sort(root, searchLastNode());
        }
        else
            adjustStock(element, stock);
    }
    /**
     * Add or substract stock to existing element
     * this method is only used when the Product already exist
     * @param name of the Product to modify its stock
     * @param stock amount of stock to modify
     */
//    public void addStock(String name, int stock){
//        ProductNode actual = this.root;
//        while (actual != null && actual.elem.getName().compareTo(name)!=0) {
//            actual = actual.getNext();
//        }
//        stock+=actual.elem.getStock();
//        actual.elem.setStock(stock);
//    }
    public void adjustStock(String name, int stock){
        Product actual = findNode(name);
        if (actual.name.equals(name)){//found the element
            if (actual.getStock()+stock <= 0) // stock ends up less or equal to 0
                System.out.println("Deleted "+pop(name)+" due to stock adjustment");
            else
                actual.setStock(actual.getStock() + stock);
        }
    }

    /**
     * Search a Node with that name
     * @param name of Product to search for
     * @return Product found or last Product of the List if not found
     */
    public Product searchNode(String name){
        ProductNode actual = this.root;
        while (actual.getNext() != null && actual.elem.getName().compareTo(name)!=0)
            actual = actual.getNext();
        return actual.elem;
    }
    /**
     * Find a Node with that name
     * Searchs for a Product
     * and check if that is the Product we wanted
     * @param name of Product to find
     * @return the found Product or an empty Product
     */
    public Product findNode(String name){
        Product p = searchNode(name);
        if (p.getName().equals(name))//if finds the node
            return p;
        else
            return new Product();
    }
    /**
     * Searches for the last Node of the List
     * @return last Product of the List
     */
    public ProductNode searchLastNode(){
        ProductNode actual = this.root;
        while (actual.getNext() != null) {
            actual = actual.getNext();
        }
        return actual;
    }
    /**
     * Delete Node and return
     * @param name name of the Product to delete
     * @return deleted element's name or null if not found
     */
    public String pop(String name) {
        ProductNode actual = this.root;
        String node = findNode(name).name;
        if (node.equals(name)) {//if node exists
            if (node.equals(actual.getElemProduct())){//if node is root
                node = actual.getElemProduct();
                root = actual.next;
            }
            else {
                actual = actual.next;
                while (actual.next != null && actual.next.elem.getName().compareTo(name) != 0)
                    actual = actual.next;
                //actual.getNext() is the node
                node = actual.getElemProduct();
                actual.next = actual.next.next;
            }
        }
        return node;
    }

    /**
     * @return top of the list
     */
    public String top() {
        return root.elem.getName();
    }

    public boolean isEmpty() {
        return this.root == null;
    }

    public void makeEmpty() {
        this.root = null;
    }

    public int size() {
        int count = 0;
        ProductNode actual = this.root;
        while (actual != null) {
            count++;
            actual = actual.getNext();
        }
        return count;
    }

    public void print() {
        ProductNode current = root;
        //sort(root, searchLastNode()); ya funciona en push
        System.out.println("Product, Stock:");
        while (current.next != null) {
            System.out.print(current.getElemPrint() + " --> ");
            current = current.getNext();
        }
        System.out.println(current.getElemPrint());
        //System.out.println("null");
    }

    /**
     * Sorts the list based on the name
     * @param start the root
     * @param ProductNode the node to sort
     */
    void sort(ProductNode start, ProductNode ProductNode) {
        if (start.equals(new ProductNode()) || start.equals(ProductNode) || start.equals(ProductNode.next) || start == null)
            return;

        // Split list and partition recurse
        ProductNode pivot_prev = partitionLast(start, ProductNode);
        sort(start, pivot_prev);

        // If pivot is picked and moved to the start,
        // that means start and pivot is same
        // so pick from next of pivot
        if (pivot_prev.equals(new ProductNode()) && pivot_prev.equals(start))
            sort(pivot_prev.next, ProductNode);

        // If pivot is in between of the list,
        // start from next of pivot,
        //since we have pivot_prev, so we move two nodes
        else if (!pivot_prev.equals(new ProductNode()) && !pivot_prev.next.equals(new ProductNode()) && pivot_prev.next.next!=null)
            sort(pivot_prev.next.next, ProductNode);
    }
    // Takes first and last node,
    // but do not break any links in
    // the whole linked list
    ProductNode partitionLast(ProductNode start, ProductNode end) {
        if (start.equals(end) || start.equals(new ProductNode()) || end.equals(new ProductNode()))
            return start;

        ProductNode pivot_prev = start;
        ProductNode curr = start;
        Product pivot = end.elem;

        // iterate till one before the end,
        // no need to iterate till the end
        // because end is pivot
        while (start != end) {
            if (start.elem.name.compareTo(pivot.name) < 0) {
                // keep tracks of last modified item
                pivot_prev = curr;
                Product temp = curr.elem;
                curr.elem = start.elem;
                start.elem = temp;
                curr = curr.next;
            }
            start = start.next;
        }
        // Swap the position of curr i.e.
        // next suitable index and pivot
        Product temp = curr.elem;
        curr.elem = pivot;
        end.elem = temp;

        // Return one previous to current
        // because current is now pointing to pivot
        return pivot_prev;
    }
}