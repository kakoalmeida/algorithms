import java.util.ArrayList;

public class ArrayListAPI {

    /* Utilizacao da classe nativa do Java, ArrayList */

    public static void main(String[] args) {

        ArrayList<Contato> novoArray = new ArrayList<>();

        Contato c1 = new Contato("Joao", "joao@email.com", "M");
        Contato c2 = new Contato("Maria", "maria@email.com", "F");
        Contato c3 = new Contato("Pedro", "pedro@email.com", "M");

        novoArray.add(c1);
        novoArray.add(c2);
        novoArray.add(c3);

        System.out.println(novoArray);
        System.out.println(novoArray.size());

        System.out.println(novoArray.contains(c3));
        novoArray.remove(2);
        System.out.println(novoArray);

    }
}




