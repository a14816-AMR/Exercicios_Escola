#include <iostream>
using namespace std;
const int linhas = 6, colunas = 7;
char tabuleiro [linhas] [colunas];
string jogadores[2] ;
char fichaJogo[2] = {'O', 'X'};
int quemJoga = 0;
bool jogoAcabou = false, pecaColocada = false, tabuleiroCheio = false;

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
 void verificarVencedor() {


    // Verificar se alguem ganhou em tabulero [linha 4]
    for (int x = 0; x < linhas ; x++) {
        for (int y = 0; y < colunas; y++){
            // Verificar horizontal
            if (y + 3 < colunas) {
                if (tabuleiro[x][y] == fichaJogo[quemJoga] &&
                    tabuleiro[x][y+1] == fichaJogo[quemJoga] &&
                    tabuleiro[x][y+2] == fichaJogo[quemJoga] &&
                    tabuleiro[x][y+3] == fichaJogo[quemJoga]) {
                        jogoAcabou = true;
                        return;
                }
            }
            // Verificar vertical
            if (x + 3 < linhas) {
                if (tabuleiro[x][y] == fichaJogo[quemJoga] &&
                    tabuleiro[x+1][y] ==fichaJogo[quemJoga] &&
                    tabuleiro[x+2][y] == fichaJogo[quemJoga] &&
                    tabuleiro[x+3][y] == fichaJogo[quemJoga]) {
                        jogoAcabou = true;
                        return;
                }
            }
            // Verificar diagonal direita
            if (x + 3 < linhas && y + 3 < colunas) {
                if (tabuleiro[x][y] == fichaJogo[quemJoga] &&
                    tabuleiro[x+1][y+1] == fichaJogo[quemJoga] &&
                    tabuleiro[x+2][y+2] == fichaJogo[quemJoga] &&
                    tabuleiro[x+3][y+3] == fichaJogo[quemJoga]) {
                        jogoAcabou = true;
                        return;
                }
            }
            // Verificar diagonal esquerda
            if (x - 3 >= 0 && y + 3 < colunas) {
                if (tabuleiro[x][y] == fichaJogo[quemJoga] &&
                    tabuleiro[x-1][y+1] == fichaJogo[quemJoga] &&
                    tabuleiro[x-2][y+2] == fichaJogo[quemJoga] &&
                    tabuleiro[x-3][y+3] == fichaJogo[quemJoga]) {
                        jogoAcabou = true;
                        return;
                }
            }
        }
    }
}
void verificarTabuleiroCheio () {
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            if (tabuleiro [i][j] == fichaJogo[quemJoga]) {
                tabuleiroCheio = true;
                break;
            }
        }
    }
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
            // Verificaçao Tabuleiro cheio
            tabuleiroCheio = false;
            verificarTabuleiroCheio ();
            if (tabuleiroCheio == true) {
                cout << "O jogo empatou";
            }

            // Verificaçao Vitoria
            jogoAcabou = false;
            verificarVencedor();
            if (jogoAcabou == true) {
                mostrarTabuleiro();
                cout << "\nParabens " << jogadores[quemJoga] << "! Voce ganhou o jogo!\n";
                break;
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



