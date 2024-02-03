package utils;

public class ArbolBinario<AnyType extends Comparable<? super AnyType>> {
    private Nodo<AnyType> root;

    public ArbolBinario() {
        root = null;
    }

    public ArbolBinario(AnyType rootItem) {
        root = new Nodo<>(rootItem, null, null);
    }

    public void add(AnyType x) {
        if (x.compareTo(root.getDato()) < 0) {  // Usar > en lugar de <
            if (root.getIz() == null) {
                root.setIz(new Nodo<>(x));
            } else {
                add(x, root.getIz());
            }
        } else {
            if (root.getDer() == null) {
                root.setDer(new Nodo<>(x));
            } else {
                add(x, root.getDer());
            }
        }
    }

    private void add(AnyType x, Nodo<AnyType> node) {
        if (x.compareTo(node.getDato()) < 0) {
            if (node.getIz() == null) {
                node.setIz(new Nodo<>(x));
            } else {
                add(x, node.getIz());
            }
        } else {
            if (node.getDer() == null) {
                node.setDer(new Nodo<>(x));
            } else {
                add(x, node.getDer());
            }
        }
    }

    public void addNoRep(AnyType x) throws Exception {
        if (x.compareTo(root.getDato()) < 0) {
            if (root.getIz() == null) {
                root.setIz(new Nodo<>(x));
            } else {
                addNoRep(x, root.getIz());
            }
        } else if (x.compareTo(root.getDato()) > 0) {
            if (root.getDer() == null) {
                root.setDer(new Nodo<>(x));
            } else {
                addNoRep(x, root.getDer());
            }
        } else {
            System.err.println("El elemento "+x+" ya esta en el arbol");
        }
    }

    private void addNoRep(AnyType x, Nodo<AnyType> node) throws Exception {
        if (x.compareTo(node.getDato()) < 0) {
            if (node.getIz() == null) {
                node.setIz(new Nodo<>(x));
            } else {
                addNoRep(x, node.getIz());
            }
        } else if (x.compareTo(node.getDato()) > 0) {
            if (node.getDer() == null) {
                node.setDer(new Nodo<>(x));
            } else {
                addNoRep(x, node.getDer());
            }
        } else {
            System.err.println("El elemento "+x+" ya esta en el arbol");
        }
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
    public void dtree(Nodo<AnyType> root, AnyType datoBorrar) {
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

    public void imprimirArbolRecursivo1(Nodo<AnyType> node, String prefix, boolean isLeft) {
        if (node != null) {
            System.out.println(prefix + (isLeft ? "|-- " : "\\-- ") + node.getDato());

            imprimirArbolRecursivo1(node.getIz(), prefix + (isLeft ? "    " : "|   "), true);
            imprimirArbolRecursivo1(node.getDer(), prefix + (isLeft ? "    " : "|   "), false);
        }
    }
    public void imprimirArbolRecursivo2(Nodo<AnyType> node, int nivel) {
        if (node != null) {
            imprimirArbolRecursivo2(node.getDer(), nivel + 1);

            // Imprimir con indentación proporcional al nivel
            for (int i = 0; i < nivel; i++) {
                System.out.print("    ");
            }

            System.out.println(node.getDato());

            imprimirArbolRecursivo2(node.getIz(), nivel + 1);
        }
    }
    public void printTreePiramideHorizontal() {
        System.out.println("imprimirArbolUtil1");
        imprimirArbolUtil1(root, 0);
        System.out.println("imprimirArbolUtil2");
        imprimirArbolUtil2(root,"");
    }

    private void imprimirArbolUtil1(Nodo raiz, int espacio) {
        final int distancia = 5;
        if (raiz == null) {
            return;
        }

        espacio += distancia;

        imprimirArbolUtil1(raiz.getDer(), espacio);

        System.out.println();
        for (int i = distancia; i < espacio; i++) {
            System.out.print(" ");
        }
        System.out.print(raiz.getDato() + "\n");

        imprimirArbolUtil1(raiz.getIz(), espacio);
    }
    private void imprimirArbolUtil2(Nodo raiz, String prefijo) {
        if (raiz != null) {
            imprimirArbolUtil2(raiz.getDer(), prefijo + "        ");
            if (raiz==root)
                System.out.println(raiz.getDato());
            else
                System.out.println(prefijo + "/----- " + raiz.getDato());
            imprimirArbolUtil2(raiz.getIz(), prefijo + "        ");
        }
    }

    // StackOverflow1 inicio
    public void StackOverflow1(){
        BTreePrinter printer = new BTreePrinter();
        BTreePrinter.printNode(root);
    }
    // StackOverflow2
    public void StackOverflow2(){
        TreePrinter printer=new TreePrinter();
        TreePrinter.print((TreePrinter.PrintableNode) root);
    }
    /*
    public StringBuilder toString(StringBuilder prefix, boolean isTail, StringBuilder sb) {
        if(right!=null) {
            right.toString(new StringBuilder().append(prefix).append(isTail ? "│   " : "    "), false, sb);
        }
        sb.append(prefix).append(isTail ? "└── " : "┌── ").append(value.toString()).append("\n");
        if(left!=null) {
            left.toString(new StringBuilder().append(prefix).append(isTail ? "    " : "│   "), true, sb);
        }
        return sb;
    }

    @Override
    public String toString() {
        return this.toString(new StringBuilder(), true, new StringBuilder()).toString();
    }
    */
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
