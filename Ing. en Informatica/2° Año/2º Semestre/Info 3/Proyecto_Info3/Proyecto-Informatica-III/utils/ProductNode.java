package utils;

public class ProductNode {

    public Product elem;

    public ProductNode next;

//    public ProductNode(String name) {
//        elem = new Product(name);
//        elem.setStock(1);
//        this.next = null;
//    }
    public ProductNode(String name, int stock) {
        elem = new Product(name, stock);
        this.next = null;
    }
    public ProductNode(){
        elem = new Product();
        next = null;
    }

    public ProductNode getNext() {
        return next;
    }

    /**
     * get element for printing
     * @return the string
     */
    public String getElemPrint() {
        return elem.getName()+", "+elem.getStock();
    }
    public String getElemProduct(){
        return elem.getName();
    }
    public void setElem(String name, int stock) {
        this.elem.setName(name);
        this.elem.setStock(stock);
    }
    public void setNext(ProductNode next) {
        this.next = next;
    }
}