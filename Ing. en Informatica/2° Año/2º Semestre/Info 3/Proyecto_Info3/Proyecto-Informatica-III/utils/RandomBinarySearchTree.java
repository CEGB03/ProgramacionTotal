package utils;

public class RandomBinarySearchTree {
    public RandomBinarySearchTree(int tam, BinarySearchTree<Integer> tree){
        //Random r = new Random();
        for (int i = 0; i < tam; i++)
            tree.insert((int)(Math.random()*(75-25+1)+25));
    }
}
