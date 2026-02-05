#include <iostream>
#include <fstream>
using namespace std;
int main () {
    string numAluno, nome, idade;
    string linha_aluno;
    int numeroAlunos, i;
     // Criar e abrir o arquivo de texto
    ofstream MyFile ("dados.txt");
    while (i < 10) {
        cout << "ALUNO #" << i << "\n";
        cout << "Diz o teu numero de aluno: ";
        getline (cin, numAluno);
        cout << "\nDiz o teu nome completo: ";
        getline (cin, nome);
        cout << "\nDiz a tua idade: ";
        getline (cin, idade);

        linha_aluno = numAluno + ";" + nome + ";" + idade + ";";
        MyFile << linha_aluno;
        MyFile << "\n";
        i++;
    }

    MyFile.close();

    string Mytext;
    ifstream MyReadFile ("dados.txt");
    int j = 1;
    while (getline (MyReadFile, Mytext)) {
        cout << "\nALUNO #" << j << "\n";
        for (int i = 0; i < Mytext.length(); i++) {
            if (Mytext[i] != ';')  {
                cout << Mytext[i];
            } else {
                cout << "\n";
            }
        }
        cout << "\n";
        j++;
    }

    // Fechar o arquivo
    MyReadFile.close();
    return 0;
}
