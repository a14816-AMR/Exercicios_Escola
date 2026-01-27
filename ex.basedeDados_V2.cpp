#include <iostream>
#include <string>
using namespace std;

const int numRedistos = 10, numDados = 2;
void pedirDados (int numLinha, string dadosX[numRedistos][numDados]) {
    cout << "\nQual o nome #" << (numLinha + 1) << " : ";
    cin >> dadosX [numLinha][0];
    cout << "\nQual o idade #" << (numLinha + 1) << " : ";
    cin >> dadosX [numLinha][1];
}

void mostrarDados (int numLinhaX, string dadosX[numRedistos][numDados]) {
    cout << "\n**** Base de Dados ****\n";
    for (int i = 0; i < numRedistos; i++) {
       cout << "Nome: " << dadosX[i][0] << " | " << "Idade: " << dadosX[i][1] << "\n";
    }
}

void mediaIdades (double mediaX, string dadosY[numRedistos][numDados]) {
    for (int i = 0; i < numRedistos; i++) {
        mediaX = (stoi (dadosY [i][1]) + stoi (dadosY [i+1][1])) / numRedistos;
    }
    cout << "_____________________________\nMedia das idades: " << mediaX;
}
int main () {
    string dados [numRedistos][numDados];
    for (int i = 0; i < numRedistos; i++) {
        pedirDados(i, dados);
    }
    int linha = 1;
    mostrarDados (linha, dados);
    double media = 1;
    mediaIdades (media, dados);

    return 0;
}
