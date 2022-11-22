import java.util.ArrayList;
import java.util.List;

public class Main {

    /* Utilizando um vetor generico
     * a classe implementada é algo similar a classe nativa ArrayList
     *
     */

    public static void main(String[] args) {

        Lista<String> lista = new Lista<>(5);

        lista.adiciona("Banana");
        lista.adiciona("Apple");
        lista.adiciona("Orange");
        lista.adiciona("Grape");
        lista.adiciona("Watermelon");
        lista.adiciona("Peach");

        System.out.println(lista);

        lista.remover("Grape");

        System.out.println(lista);

        System.out.println(lista.buscaElemento("Watermelon"));
        System.out.println(lista.obter(2));
        lista.removerTodos();
        System.out.println(lista);
    }
}
