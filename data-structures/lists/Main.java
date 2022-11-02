public class Main {

    /* Utilizando um vetor generico
     * a classe implementada é algo similar a classe nativa ArrayList
     *
     */

    public static void main(String[] args) {

        Lista<Integer> vetorInteiros = new Lista<>(5);
        Lista<String> vetorString = new Lista<>(5);
        Lista<Double> vetorDouble = new Lista<>(5);

        vetorString.adiciona("Morango");
        vetorInteiros.adiciona(1);
        vetorInteiros.adiciona(0, 2);
        vetorString.adiciona("Banana");
        vetorDouble.adiciona(2.5);
        vetorInteiros.adiciona(0, 3);
        vetorInteiros.adiciona(0, 4);
        vetorInteiros.adiciona(0, 5);
        vetorString.adiciona("Abacaxi");
        vetorString.adiciona("Uva");
        vetorString.adiciona("Açai");
        vetorInteiros.adiciona(0);

        System.out.println(vetorInteiros);
        System.out.println(vetorString);
        System.out.println(vetorDouble);
        System.out.println(vetorString.getTamanho());
        System.out.println(vetorInteiros.getTamanho());
        System.out.println(vetorDouble.getTamanho());
        System.out.println(vetorInteiros.contemItem(6));

    }
}
