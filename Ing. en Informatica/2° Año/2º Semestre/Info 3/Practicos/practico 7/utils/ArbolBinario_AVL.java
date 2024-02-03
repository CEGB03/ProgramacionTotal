package utils;

public class ArbolBinario_AVL<AnyType extends Comparable<? super AnyType>> {
    private Nodo<AnyType> root;

    public ArbolBinario_AVL() {
        root = null;
    }

    public ArbolBinario_AVL(AnyType rootItem) {
        root = new Nodo<>(rootItem); // Inicializamos el balance del nodo raíz en 0
    }

    public void add(AnyType x) {
        root = add(root, x);
    }

    private Nodo<AnyType> add(Nodo<AnyType> node, AnyType x) {
        if (node == null) {
            return new Nodo<>(x);
        }

        if (x.compareTo(node.getDato()) < 0) {
            node.setIz(add(node.getIz(), x));
        } else if (x.compareTo(node.getDato()) > 0) {
            node.setDer(add(node.getDer(), x));
        } else {
            // El elemento ya existe, no es necesario agregarlo nuevamente
            return node;
        }

        // Actualizar el balance y realizar rotaciones
        node.setBal(Math.max(Nodo.height(node.getIz()), Nodo.height(node.getDer())) + 1);

        return balance(node);
    }

    public void addNoRep(AnyType x) {
        root = addNoRep(root, x);
    }

    private Nodo<AnyType> addNoRep(Nodo<AnyType> node, AnyType x) {
        if (node == null) {
            return new Nodo<>(x, null, null);
        }

        int compareResult = x.compareTo(node.getDato());

        if (compareResult < 0) {
            node.setIz(addNoRep(node.getIz(), x));
        } else if (compareResult > 0) {
            node.setDer(addNoRep(node.getDer(), x));
        }

        // Actualizar el balance y realizar rotaciones
        node.setBal(Math.max(Nodo.height(node.getIz()), Nodo.height(node.getDer())) + 1);

        return balance(node);
    }

    private Nodo<AnyType> balance(Nodo<AnyType> node) {
        int balance = getBalance(node);

        if (balance > 1) {
            if (getBalance(node.getIz()) < 0) {
                node.setIz(leftRotate(node.getIz()));
            }
            return rightRotate(node);
        }

        if (balance < -1) {
            if (getBalance(node.getDer()) > 0) {
                node.setDer(rightRotate(node.getDer()));
            }
            return leftRotate(node);
        }

        return node;
    }

    private int getBalance(Nodo<AnyType> node) {
        if (node == null) {
            return 0;
        }
        return Nodo.height(node.getIz()) - Nodo.height(node.getDer());
    }

    private Nodo<AnyType> rightRotate(Nodo<AnyType> y) {
        Nodo<AnyType> x = y.getIz();
        Nodo<AnyType> T2 = x.getDer();

        x.setDer(y);
        y.setIz(T2);

        y.setBal(Math.max(Nodo.height(y.getIz()), Nodo.height(y.getDer())) + 1);
        x.setBal(Math.max(Nodo.height(x.getIz()), Nodo.height(x.getDer())) + 1);

        return x;
    }

    private Nodo<AnyType> leftRotate(Nodo<AnyType> x) {
        Nodo<AnyType> y = x.getDer();
        Nodo<AnyType> T2 = y.getIz();

        y.setIz(x);
        x.setDer(T2);

        x.setBal(Math.max(Nodo.height(x.getIz()), Nodo.height(x.getDer())) + 1);
        y.setBal(Math.max(Nodo.height(y.getIz()), Nodo.height(y.getDer())) + 1);

        return y;
    }
    public Nodo<AnyType> getRoot() {
        return root;
    }

    public int size() {
        return Nodo.size(root);
    }

    public int height() {
        return Nodo.height(root);
    }

    public void imprimirPreOrder() {
        if (root != null)
            root.imprimirPreOrder();
    }

    public void imprimirInOrder() {
        if (root != null)
            root.imprimirInOrder();
    }

    public void imprimirPostOrder() {
        if (root != null)
            root.imprimirPostOrder();
    }

    public void makeEmpty() {
        root = null;
    }

    public boolean isEmpty() {
        return root == null;
    }
    public void dtree1(Nodo<AnyType> root, AnyType datoBorrar) {
        // Realizar búsqueda del nodo a borrar
        Nodo<AnyType> nodoABorrar = buscarNodo(root, datoBorrar);

        // Si el nodo a borrar no se encuentra, mostrar un mensaje y retornar el árbol original
        if (nodoABorrar == null) {
            System.out.println("El dato " + datoBorrar + " no se encuentra en el árbol.");
            return;
        }

        // Realizar la eliminación del nodo encontrado
        deleteNode(root, datoBorrar);
    }
    private Nodo<AnyType> buscarNodo(Nodo<AnyType> node, AnyType datoBorrar) {
        if (node == null || node.getDato().equals(datoBorrar)) {
            return node;
        }

        if (datoBorrar.compareTo(node.getDato()) < 0) {
            return buscarNodo(node.getIz(), datoBorrar);
        } else {
            return buscarNodo(node.getDer(), datoBorrar);
        }
    }

    private Nodo<AnyType> deleteNode(Nodo<AnyType> root, AnyType datoBorrar) {
        if (root == null) {
            return null;
        }

        int compareResult = datoBorrar.compareTo(root.getDato());

        if (compareResult < 0) {
            root.setIz(deleteNode(root.getIz(), datoBorrar));
        } else if (compareResult > 0) {
            root.setDer(deleteNode(root.getDer(), datoBorrar));
        } else {
            // Caso 1: Nodo sin hijos o con un solo hijo
            if (root.getIz() == null) {
                return root.getDer();
            } else if (root.getDer() == null) {
                return root.getIz();
            }

            // Caso 2: Nodo con dos hijos
            root.setDato(findMin(root.getDer()).getDato());
            root.setDer(deleteNode(root.getDer(), root.getDato()));
        }

        return root;
    }

    private Nodo<AnyType> findMin(Nodo<AnyType> node) {
        while (node.getIz() != null) {
            node = node.getIz();
        }
        return node;
    }

    public void dtree2(AnyType datoBorrar) {
        if (root != null) {
            root = deleteNode2(root, datoBorrar);
        }
    }
    private Nodo<AnyType> deleteNode2(Nodo<AnyType> root, AnyType datoBorrar) {
        if (root == null) {
            return root;
        }

        int compareResult = datoBorrar.compareTo(root.getDato());

        if (compareResult < 0) {
            root.setIz(deleteNode2(root.getIz(), datoBorrar));
        } else if (compareResult > 0) {
            root.setDer(deleteNode2(root.getDer(), datoBorrar));
        } else {
            // Caso 1: Nodo sin hijos o con un solo hijo
            if (root.getIz() == null || root.getDer() == null) {
                Nodo<AnyType> temp = (root.getIz() != null) ? root.getIz() : root.getDer();
                if (temp == null) {
                    temp = root;
                    root = null;
                } else {
                    root = temp;
                }
            } else {
                // Caso 2: Nodo con dos hijos
                Nodo<AnyType> temp = findMin(root.getDer());
                root.setDato(temp.getDato());
                root.setDer(deleteNode2(root.getDer(), temp.getDato()));
            }
        }

        if (root == null) {
            return root;
        }

        // Actualizar la altura del nodo actual
        root.actualizarAltura();

        // Realizar el balance del nodo actual
        return balance(root);
    }

    // StackOverflow1 inicio
    public void StackOverflow1(){
        BTreePrinter printer = new BTreePrinter();
        BTreePrinter.printNode(root);
    }
    // StackOverflow3
    public void print() {
        print("", root, false);
    }

    public void print(String prefix, Nodo n, boolean isLeft) {
        if (n != null) {
            System.out.println (prefix + (isLeft ? "|-- " : "\\-- ") + n.getDato());
            print(prefix + (isLeft ? "|   " : "    "), n.getIz(), true);
            print(prefix + (isLeft ? "|   " : "    "), n.getDer(), false);
        }
    }
    // StackOverflow 5
    public void printFullTree(Nodo<AnyType> root, String delim, StringBuilder idnt, boolean left) {
        if (root != null) {
            idnt.append(delim);
            String[] delims = setDelims(left);
            printFullTree(root.getDer(), delims[0], idnt, false);
            indent2(root.getDato(), idnt);
            printFullTree(root.getIz(), delims[1], idnt, true);
            idnt.delete(idnt.length() - delim.length(), idnt.length());
        }
    }

    private static String[] setDelims(boolean left) {
        String x = " ", y = "|";
        return left ? new String[]{y, x} : left ? new String[]{x, y} : new String[]{x, x};
    }

    public void indent2(AnyType x, StringBuilder idnt) {
        for (int i = 0; i < idnt.length(); i++) {
            System.out.print(idnt.charAt(i) + "     ");  // Ajusta el espacio según tus necesidades
        }
        // Convierte root.getDato() a int si es compatible con Integer
        int dato = ((Integer) x).intValue();

        System.out.println("|-> " + dato);
    }

}
