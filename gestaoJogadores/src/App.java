import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class App {

    static ArrayList <Jogador> jogadores = new ArrayList <Jogador>() ;
    public static void main(String[] args) throws Exception {
        Scanner ctlUser = new Scanner (System.in);
        String aux = "";
        int op; 


        do {
            System.out.println("**** Gestao Equipes ****");
            System.out.println("  1 - Gerir jogadores");
            System.out.println("  2 - Gerir Equipa tecnica");
            System.out.println("  0 - Sair do programa");
            System.out.println(" \n A sua escolha: ");
            aux = ctlUser.nextLine();
            op = convertString2Int(aux);

            if (op != 0) {
                switch (op) {
                case 1:
                    gerirJoagadores();
                    break;

                case 2:
                    gerirEquipaTecnica();
                    break;
            
                default:
                    System.out.println("\nOu es ou fazes-te de !!!");
                    break;
                }
            } 
        } while (op != 0);
        ctlUser.close();
    }

    private static void gerirJoagadores () {
        Scanner ctlUser = new Scanner (System.in);
        String aux = "";
        int op; 
        do {
            System.out.println("\n\n**** Gestao jogadores ****");
            System.out.println("  1 - Ver jogadores");
            System.out.println("  2 - Inserir jogador");
            System.out.println("  3 - Remover jogador");
            System.out.println("  0 - Voltar");
            System.out.println(" \n A sua escolha: ");
            aux = ctlUser.nextLine();
            op = convertString2Int(aux);

            if (op != 0) {
                switch (op) {
                case 1:
                    System.out.println("\nInserir Jogador");
                    String nome, posicao, escalao;
                    int numero;
                    break;

                case 2:
                    System.out.println("\nInserir Jogador");
                    System.out.println("\nNome do jogador: ");
                    nome = ctlUser.nextLine(); 
                    System.out.println("\nNum Jogador");
                    numero = ctlUser.nextInt();
                    System.out.println("\nPos do jogador: ");
                    posicao = ctlUser.nextLine(); 
                    System.out.println("\nEscalao do jogador: ");
                    escalao = ctlUser.nextLine(); 


                    Jogador jogaux = new Jogador(nome, posicao, numero, escalao);
                    jogadores.add(jogaux);
                    break;

                case 3:
                    System.out.println("  3 - Remover jogador");
                    break;
            
                default:
                    System.out.println("\nOu es ou fazes-te de !!!");
                    break;
                }

            }  

        } while (op != 0);
        ctlUser.close();
    }

    private static void gerirEquipaTecnica () {
        
    }

    public static int convertString2Int (String str) {
        try {
            return Integer.parseInt(str);
        } catch (NumberFormatException e) {
            return -1;
        }
    }
}
 
// COdigo produzido por: andre rizzoto
