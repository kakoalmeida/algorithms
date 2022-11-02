/* Esta classe serve para definir um vetor de itens
 * sem definir o seu tipo, mais adequada para projetos reais,
 * uma maneira generica de "tipagem"
 */

public class VetoresObjetos {

    private Object[] elementos;
    private int tamanho;

    // define o tamanho do vetor durante sua inicialização
    public VetoresObjetos(int capacidade){
        this.elementos = new Object[capacidade];
        this.tamanho = 0;
    }

    public boolean adiciona(Object elemento) { // adiciona elementos no vetor, FORMA SEQUENCIAL
        aumentaCapacidade();
        if(this.tamanho < this.elementos.length) {
            this.elementos[this.tamanho] = elemento;
            this.tamanho++;
            return true;
        }
        return false;
    }

    // Adicionar elementos em uma posiçao desejada do vetor
    public void adiciona(int posicao, Object elemento) {

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

    // aumentar o tamanho do vetor se ao adicionar um novo item o vetor
    // ja estiver no seu tamanho "maximo"
    private void aumentaCapacidade(){
        if(this.tamanho == this.elementos.length){
            Object[] novoArray = new Object[this.elementos.length * 2];
            for (int i = 0; i < this.elementos.length; i++){
                novoArray[i] = this.elementos[i];
            }
            this.elementos = novoArray;
        }
    }

    // Obter elemento de uma determinada posição
    public Object busca(int posicao){
        if(!(posicao >= 0 && posicao < tamanho)){  // negacao caso nao existir a posicao
            throw new IllegalArgumentException("out of index");
        }
        return this.elementos[posicao];
    }

    // verificar se o elemento existe || busca sequencial
    public int buscaElemento(Object elemento){
        for(int i = 0; i < this.tamanho; i++){
            if(this.elementos[i].equals(elemento)){
                return i;
            }
        }
        return -1;
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

    // Verificar tamanho do vetor
    public int getTamanho(){
        return this.tamanho;
    }

    @Override
    public String toString() {

        // Imprime elementos do vetor na tela de maneira formatada

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

