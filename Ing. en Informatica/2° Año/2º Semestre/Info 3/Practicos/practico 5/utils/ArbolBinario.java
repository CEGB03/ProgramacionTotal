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

    private void imprimirArbolRecursivo(Nodo<AnyType> node, int nivel) {
        if (node != null) {
            imprimirArbolRecursivo(node.getDer(), nivel + 1);

            // Imprimir con indentación proporcional al nivel
            for (int i = 0; i < nivel; i++) {
                System.out.print("    ");
            }

            System.out.println(node.getDato());

            imprimirArbolRecursivo(node.getIz(), nivel + 1);
        }
    }
}
