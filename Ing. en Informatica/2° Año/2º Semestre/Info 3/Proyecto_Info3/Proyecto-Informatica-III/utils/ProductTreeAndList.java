package utils;

public class ProductTreeAndList {
    public BinarySearchTree<Product> tree;
    public ProductList list;

    /**
     *
     * @param tree
     * @param list
     */
    public ProductTreeAndList(BinarySearchTree<Product> tree, ProductList list){
        this.tree = tree;
        this.list = list;
    }

    /**
     *
     * @param name
     * @param stock
     */
    public void addProduct(String name, int stock){
        Product product = new Product(name, stock);
        list.push(product.name, stock);
        tree.insert(product);
    }

    /**
     *
     * @param product
     * @return
     */
    public Product deleteProduct(Product product){
        //TODO implementar
        list.pop(product.getName());
        tree.dtree(tree.getRoot(), product);
        return product;
    }

    /**
     *
     * @param product
     * @return
     */
    public Product searchProduct(String product){
        //TODO implementar
        Product productSearch=new Product();
        productSearch.setName(product);
        productSearch=tree.find(productSearch);
        if (productSearch==null)
            System.err.println("El producto no se encuentra en el inventario.");
        return productSearch;
    }

    /**
     *
     */
    public void printProduct(){
        BinaryTreePrinter<Product> print1 = new BinaryTreePrinter<Product>(tree,1);
        BinaryTreePrinter<Product> print2 = new BinaryTreePrinter<Product>(tree, 2);
        BinaryTreePrinter<Product> print3 = new BinaryTreePrinter<Product>(tree, 3);
        System.out.println("List: ");
        list.print();
    }
}
