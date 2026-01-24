#include <iostream>
using namespace std;
int torre1[5] = {5, 4, 3, 2, 1}, torre2[5] = {}, torre3[5] = {};
int topo1 = 5, topo2 = 0, topo3 = 0;

void imprimir_torres() {
    cout << "\nEstado das Torres:\n";
    for (int i = 4; i >= 0; i--) {
        cout << (torre1[i] == 0 ? "- " : to_string(torre1[i]) + " ") << " ";
        cout << (torre2[i] == 0 ? "- " : to_string(torre2[i]) + " ") << " ";
        cout << (torre3[i] == 0 ? "- " : to_string(torre3[i]) + " ") << "\n";
    }
    cout << "___________\n1  2  3\n";
}

int main() {
    int origem, destino;
    bool ganhou = false;
    int *pOrigem, *pDestino, *topoO, *topoD;

    while (!ganhou) {
        imprimir_torres();

        cout << "\nInsira a torre de origem (1-3): ";
        cin >> origem;
        cout << "Insira a torre de destino (1-3): ";
        cin >> destino;


        if (origem == 1) {
            pOrigem = torre1;
            topoO = &topo1;
        } else if (origem == 2) {
             pOrigem = torre2;
             topoO = &topo2;
        } else {
            pOrigem = torre3;
            topoO = &topo3;
        }

        if (destino == 1) {
            pDestino = torre1; topoD = &topo1;
        } else if (destino == 2) {
            pDestino = torre2; topoD = &topo2;
        } else {
            pDestino = torre3; topoD = &topo3;
        }

        if (*topoO == 0 ) {
            cout << "Torre vazia!\nInsira as torres novamente.\n _________\n";
        }
        else if (*topoD > 0 && pOrigem[*topoO - 1] > pDestino[*topoD - 1]) {
            cout << "Disco maior sobre menor!\n";
        }
        else {
            // Executar Movimento
            pDestino[*topoD] = pOrigem[*topoO - 1];
            pOrigem[*topoO - 1] = 0;
            (*topoD)++;
            (*topoO)--;
        }

        // Condiçao de vitoria
        if (topo2 == 5 || topo3 == 5 ) ganhou = true;
    }

    imprimir_torres();
    cout << "\nParabens Jogador, ganhou !!!\n";
    return 0;
}
