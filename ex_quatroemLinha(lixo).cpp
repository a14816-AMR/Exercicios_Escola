#include <iostream>
using namespace std;
const int linhas = 5, colunas = 7;
char tabuleiro [linhas] [colunas];
string jogadores[2] ;
char fichaJogo[2] = {'O', 'X'};
int quemJoga = 0;
bool jogoAcabou = false, pecaColocada = false;

 void inicializarTabuleiro() {

    for (int x = 0; x < linhas ; x++) {
        for (int y = 0; y < colunas; y++){
            tabuleiro[x][y] = '-';
        }
    }
 }
 void mostrarTabuleiro() {

    // Mostrar tabuleiro
    for (int x = 0; x < linhas ; x++) {
        cout << "\n";
        for (int y = 0; y < colunas; y++){
            cout  << " | " << tabuleiro[x][y];
        }
        cout  << " | ";
    }
    cout << "\n------------------------------\n";

    for (int i = 0; i < colunas; i++) {
        cout << " | " << i;
    }
    cout << " | ";
 }
 int main () {
    int jogada;
    cout << "****** 4 em Linha ******";
    cout << "\nQual o nome do jogador #1: ";
    cin >> jogadores [0];
    cout << "\nQual o nome do jogador #2: ";
    cin >> jogadores [1];

    inicializarTabuleiro();

    while (jogoAcabou =true) {
        mostrarTabuleiro();

        cout << "\nEm que coluna pretende jogar " << jogadores[quemJoga] << " '"<< fichaJogo[quemJoga] << "' " << " (numero de 0 a 6): ";
        cin >> jogada;

        pecaColocada = false;
        if (jogada >= 0 && jogada < colunas ) {
            int aux = (linhas - 1);
            while (aux >= 0) {
                if (tabuleiro[aux][jogada] == '-') {
                    tabuleiro[aux][jogada] = fichaJogo[quemJoga];
                    pecaColocada = true;
                    break;
                }
                aux--;
            }

            if (pecaColocada) {
                if (quemJoga == 0) {
                quemJoga = 1;
                } else {
                    quemJoga = 0;
                }
            }
        }
    }

    return 0;
 }


// Tabuleiro cheio // Ganhou


