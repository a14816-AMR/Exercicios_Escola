#include <iostream>
#include <fstream>
using namespace std;

int main () {
     // Criar e abrir o arquivo de texto
    ofstream MyFile ("dados.txt");

    // Escrever no ficheiro
    MyFile <<"Tentativa n2";

    // Fechar o arquivo
    MyFile.close();

    string Mytext, bio;

    ifstream MyReadFile ("Lixo.txt");

    while (getline (MyReadFile, Mytext)) {
        cout << Mytext << "\n";
    }

    cout << "Diz o teu nome completo: ";
    //cin >> bio;
    getline (cin, bio);
    cout << bio;

    return 0;
}

