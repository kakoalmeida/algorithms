import java.io.ObjectStreamException;

public class Lista<T> {

    /* Operador diamond '<>' usa para poder definir o tipo
     * do array na hora de istanciar a classe e.g: Lista<tipo> vetor = new Lista();
     */
    private T[] elementos;
    private int tamanho;

    public Lista(int capacidade){
        this.elementos = (T[]) new Object[capacidade];
        this.tamanho = 0;
    }

    public boolean adiciona(T elemento) { // adiciona elementos no vetor, FORMA SEQUENCIAL
        aumentaCapacidade();
        if(this.tamanho < this.elementos.length) {
            this.elementos[this.tamanho] = elemento;
            this.tamanho++;
            return true;
        }
        return false;
    }

    // Adicionar em qualquer posicao
    public void adiciona(int posicao, T elemento) {

        if (!(posicao >= 0 && posicao < tamanho)) {  // negacao caso nao existir a posicao
            throw new IllegalArgumentException("out of index");
        }

        aumentaCapacidade();

        // Move os elementos dentro do array
        for (int i = this.tamanho - 1; i >= posicao; i--) {
            this.elementos[i + 1] = this.elementos[i];
        }
        this.elementos[posicao] = elemento;
        this.tamanho++;
    }

    private void aumentaCapacidade(){
        if(this.tamanho == this.elementos.length){
            T[] novoArray = (T[]) new Object[this.elementos.length * 2];
            for (int i = 0; i < this.elementos.length; i++){
                novoArray[i] = this.elementos[i];
            }
            this.elementos = novoArray;
        }
    }

    // Obter elemento de uma determinada posição
    public T busca(int posicao){
        if(!(posicao >= 0 && posicao < tamanho)){  // negacao caso nao existir a posicao
            throw new IllegalArgumentException("out of index");
        }
        return this.elementos[posicao];
    }

    // verificar se o elemento existe || busca sequencial
    public int buscaElemento(T elemento){
        for(int i = 0; i < this.tamanho; i++){
            if(this.elementos[i].equals(elemento)){
                return i;
            }
        }
        return -1;
    }

    public T obter(int posicao){
        return this.busca(posicao);
    }
    // Para remover itens do vetor
    public void removeItem(int posicao){
        if(!(posicao >= 0 && posicao < tamanho)) {  // negacao caso nao existir a posicao
            throw new IllegalArgumentException("out of index");
        }
        for (int i = posicao; i < this.tamanho -1; i++){
            this.elementos[i] = this.elementos[i+1];
        }
        this.tamanho--;
    }

    public void remover(T elemento){
        int pos = this.buscaElemento(elemento);
        if(pos > -1){
            this.removeItem(pos);
        }
    }

    public void removerTodos(){
        this.elementos = (T[]) new Object[this.elementos.length];
    }

    public boolean contemItem(T elemento){
        return buscaElemento(elemento) > -1;
    }

    // Verificar tamanho do vetor
    public int getTamanho(){
        return this.tamanho;
    }

    @Override
    public String toString() {

        // Imprime elementos do vetor na tela

        StringBuilder s = new StringBuilder();

        for (int i = 0; i<this.tamanho-1; i++){
            s.append(this.elementos[i]);
            s.append(", ");
        }

        if (this.tamanho > 0){
            s.append(this.elementos[this.tamanho-1]);
        }

        return s.toString();
    }
}
