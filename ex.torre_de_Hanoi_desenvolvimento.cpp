#include <iostream>
using namespace std;

int torre1[5] = {4, 3, 2, 1, 0}, torre2 [5] = {4, 3, 2, 1, 0}, torre3 [5] = {4, 3, 2, 1, 0};
int torreOrigem, torreDestino;



int main () {
do {
    // Estrutura do Jogo
    for (int i = 1; i <= 5; i++){
        cout << i << "  " << "-" << "  " << "-" << "\n";
        }
    cout << "_______________" << "\n1  2  3";

    // Controle do Jogo
    cout << "\nInsira a torre de origem: ";
    cin >> torreOrigem;
    if (torreOrigem >= 4) {
        cout << "\nErro ao encontrar a coluna selecionada\n";
        break;
    }
    cout << "Insira a torre de destino: ";
    cin >> torreDestino;
    if (torreDestino >= 4) {
        cout << "\nErro ao encontrar a coluna selecionada\n";
        break;
        }
    } while (torre1 == 0, 1, 2, 3, 4 || torre2 == 0, 1, 2, 3, 4 || torre3 == 0, 1, 2, 3, 4 );

    return 0;
}
