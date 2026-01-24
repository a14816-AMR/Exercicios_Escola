 #include <iostream>
 using namespace std;

 int main () {
    int linhas = 5, colunas = 7;
    char letters [linhas] [colunas];

    for (int x = 0; x < linhas ; x++) {
        for (int y = 0; y < colunas; y++){
            letters[x][y] = '-';
        }
    }
    // Mostrar tabuleiro
    for (int x = 0; x < linhas ; x++) {
        cout << "\n";
        for (int y = 0; y < colunas; y++){
            cout  << " | " << letters[x][y];
        }
    }
    cout << "\n------------------------------\n";

    for (int i = 0; i < colunas; i++) {
        cout << " | " << i;
    }

    return 0;
 }
