package utils;

import java.util.Scanner;

public class Tests {
    Scanner scanner=new Scanner(System.in);
    public void testTreeInteger(){
        BinarySearchTree<Integer> tree = new BinarySearchTree<Integer>();
        RandomBinarySearchTree random= new RandomBinarySearchTree(10, tree);
        tree.printInOrder();
        System.out.println("Altura: "+tree.height());
//        System.out.println("Desea eliminar un nodo del arbon? y/n");
//        Scanner scanner = new Scanner(System.in);
//        String delete = scanner.nextLine();
//        while (delete.equals("yes")){
//            System.out.println("Ingrese nodo a eliminar");
//            Integer nodo = scanner.nextInt();
//            tree.dtree(tree.getRoot(), nodo);
//            System.out.println("Desea eliminar un nodo del arbon? y/n");
//            delete = scanner.nextLine();
//        }
        System.out.println("Depth: " + tree.depth());
        BinaryTreePrinter<Integer> print1 = new BinaryTreePrinter<Integer>(tree,1);
        BinaryTreePrinter<Integer> print2 = new BinaryTreePrinter<Integer>(tree, 2);
        BinaryTreePrinter<Integer> print3 = new BinaryTreePrinter<Integer>(tree, 3);

    }
    public void testListStruct(){
        ProductList listStruct = new ProductList();
        for (int ii = 0; ii<3; ii++) {
            System.out.println("Ingresa el nombre del producto y su stock");
            listStruct.push(scanner.next(), scanner.nextInt());
            listStruct.print();
        }
        listStruct.print();
        System.out.println("nombre:");
        String s= scanner.next();
        System.out.println("stock:");
        int sto = scanner.nextInt();
        //int sto= Integer.parseInt(scanner.nextLine());
        listStruct.push(s,sto);
        listStruct.print();
        System.out.println("Busqueda de "+s);
        Product search=listStruct.searchNode(s);
        System.out.println(search.getName() + " -> "+search.getStock());
        System.out.println("Fin Busqueda de "+s);
        listStruct.print();
    }
    public void testProductTreeAndList(){
        ProductList listStruct = new ProductList();
        BinarySearchTree<Product> tree = new BinarySearchTree<Product>();

        ProductTreeAndList treeAndList = new ProductTreeAndList(tree, listStruct);
//        for (int i = 0; i < 5; i++) {
//            System.out.println("nombre:");
//            String productName= scanner.nextLine();
//            System.out.println("stock:");
//            int productStock= Integer.parseInt(scanner.nextLine());
//            treeAndList.addProduct(productName, productStock);
//            treeAndList.printProduct();
//        }
        treeAndList.addProduct("choclo", 2);
        treeAndList.addProduct("anana", 3);
        treeAndList.addProduct("banana", 4);
        treeAndList.addProduct("coca", 4);
        treeAndList.addProduct("coco", 4);
        treeAndList.addProduct("pepsi", 4);
//        System.out.println("\n\n\n\n");
        treeAndList.printProduct();

        System.out.println("BUSQUEDA");
        System.out.println("Product, Stock:");
        Product productSearch=treeAndList.searchProduct("coco");
        System.out.println(productSearch.getName()+" --> "+productSearch.getStock());
        System.out.println("Product, Stock:");
        productSearch=treeAndList.searchProduct("eema");
        if ( !(productSearch == null) ) {
            System.out.println(productSearch.getName()+" --> "+productSearch.getStock());
        }

        System.out.println("ELIMINACION");
        System.out.println("Product, Stock:");
        Product productSearchDelete=treeAndList.searchProduct("choclo");
        System.out.println(productSearchDelete.getName()+" --> "+productSearchDelete.getStock());
        treeAndList.deleteProduct(productSearchDelete);
        treeAndList.printProduct();

    }
}
