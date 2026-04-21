public class Jogador {
    String nome;
    String posicao;
    String numero;

    public Jogador() {
    }

    public Jogador(String nome, String posicao, String numero) {
        this.nome = nome;
        this.posicao = posicao;
        this.numero = numero;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getPosicao() {
        return posicao;
    }

    public void setPosicao(String posicao) {
        this.posicao = posicao;
    }

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    
    @Override 
    public String toString () {
        return "Lista jogador [nome = " + nome + ", posicao= " + posicao + ", numero= " + numero + "]";
    }
    


    

}
