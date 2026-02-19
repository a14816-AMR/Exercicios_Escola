#include <iostream>
using namespace std;
const int linhas = 10, colunas = 2;
string basedeDasdos [linhas][colunas];

int main () {

    /*for (int x = 0; x < linhas; x++) {
        for (int y = 0; y < colunas; y++) {
            if (basedeDasdos [x][y] == NULL) {
                basedeDasdos [x][y] = "-"
            }
        }
    }*/

    for (int i = 0; i < linhas; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> basedeDasdos[i][0];
        cout << "\nDigite a idade da pessoa " << i + 1 << ": ";
        cin >> basedeDasdos[i][1];
    }

    cout << "\nBase de Dados:\n";
    for (int x = 0; x < linhas; x++) {
        cout << "Nome: " << basedeDasdos[x][0] << " | " << "Idade: "  << basedeDasdos[x][1] << "\n";
    }

    return 0;
}
