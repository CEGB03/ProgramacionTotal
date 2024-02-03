package utils;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BTreePrinterRN {

    public static <T extends Comparable<?>> void printNode(Nodo root) {
        int maxLevel = BTreePrinterRN.maxLevel(root);

        printNodeInternal(Collections.singletonList(root), 1, maxLevel);
    }

    private static <T extends Comparable<?>> void printNodeInternal(List<Nodo> nodes, int level, int maxLevel) {
        if (nodes.isEmpty() || BTreePrinterRN.isAllElementsNull(nodes))
            return;

        int floor = maxLevel - level;
        int edgeLines = (int) Math.pow(2, (Math.max(floor - 1, 0)));
        int firstSpaces = (int) Math.pow(2, floor) - 1;
        int betweenSpaces = (int) Math.pow(2, (floor + 1)) - 1;

        BTreePrinterRN.printWhitespaces(firstSpaces);

        List<Nodo> newNodes = new ArrayList<Nodo>();
        for (Nodo node : nodes) {
            if (node != null) {
                // Aplica color (1: Rojo, 0: Negro)
                String textColor = (node.getColor() == 1) ? "\u001B[31m" : "\u001B[0m"; // 31 para rojo, 0 para restablecer
                System.out.print(textColor + node.getData() + "\u001B[0m"); // Restablece el color después de imprimir
                newNodes.add(node.getLeft());
                newNodes.add(node.getRight());
            } else {
                newNodes.add(null);
                newNodes.add(null);
                System.out.print(" ");
            }

            BTreePrinterRN.printWhitespaces(betweenSpaces);
        }
        System.out.println("");

        for (int i = 1; i <= edgeLines; i++) {
            for (int j = 0; j < nodes.size(); j++) {
                BTreePrinterRN.printWhitespaces(firstSpaces - i);
                if (nodes.get(j) == null) {
                    BTreePrinterRN.printWhitespaces(edgeLines + edgeLines + i + 1);
                    continue;
                }

                if (nodes.get(j).getLeft() != null)
                    System.out.print("/");
                else
                    BTreePrinterRN.printWhitespaces(1);

                BTreePrinterRN.printWhitespaces(i + i - 1);

                if (nodes.get(j).getRight() != null)
                    System.out.print("\\");
                else
                    BTreePrinterRN.printWhitespaces(1);

                BTreePrinterRN.printWhitespaces(edgeLines + edgeLines - i);
            }

            System.out.println("");
        }

        printNodeInternal(newNodes, level + 1, maxLevel);
    }

    private static void printWhitespaces(int count) {
        for (int i = 0; i < count; i++)
            System.out.print(" ");
    }

    private static <T extends Comparable<?>> int maxLevel(Nodo node) {
        if (node == null)
            return 0;

        return Math.max(BTreePrinterRN.maxLevel(node.getLeft()), BTreePrinterRN.maxLevel(node.getRight())) + 1;
    }

    private static <T> boolean isAllElementsNull(List<T> list) {
        for (Object object : list) {
            if (object != null)
                return false;
        }

        return true;
    }
}
