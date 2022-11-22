import java.util.ArrayList;

public class ArrayListAPI {

    /* Utilizacao da classe nativa do Java, ArrayList */

    public static void main(String[] args) {

        ArrayList<String> novoArray = new ArrayList<>();

        novoArray.add("Maria");
        novoArray.add("José");
        novoArray.add("Pedro");

        System.out.println(novoArray);
        System.out.println(novoArray.size());

        System.out.println(novoArray.contains(3));
        novoArray.remove(2);
        System.out.println(novoArray);

    }
}




