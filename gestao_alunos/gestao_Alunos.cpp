#include <iostream>
#include <fstream>
using namespace std;

string numAluno, nome, idade;
string linha_aluno;
string Mytext;

struct fAluno {
    int numAluno ;
    string nome;
    int idade;
} ;

string readFile (string localFicheiro) {

        ifstream MyReadFile ("dados.txt");
        int j = 1;
        int colunaDados;
        while (getline (MyReadFile, Mytext)) {
            cout << "\n------ALUNO #" << j << "------\n";
            colunaDados = 1;
            numAluno = nome = idade = "";
            for (int i = 0; i < Mytext.length(); i++) {
                if (Mytext[i] != ';')  {
                    if (colunaDados == 1) numAluno += Mytext [i];
                    if (colunaDados == 2) nome += Mytext [i];
                    if (colunaDados == 3) idade += Mytext [i];
                } else {
                    colunaDados ++;
                }
            }
            cout << "numAluno: " << numAluno << "\n";
            cout << "Nome: "  << nome << "\n";
            cout << "Idade: "  << idade << "\n";
            j++;
        }


        // Fechar o arquivo
        MyReadFile.close();
}

int main () {
     // Criar e abrir o arquivo de texto
    /*ofstream MyFile ("dados.txt");
        while (i < 10) {
        cout << "\n------ALUNO #" << i << "------\n";
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
    MyFile.close(); */

    fAluno ficha[30];

    ficha[0].numAluno = 14816;
    ficha[0].nome = "Andre Marques";
    ficha[0].idade = 15;


    // Usar STOI !!!!
    // Carregar todos os dados e migrar para ficha alunos
    // Na main mostrar o ultimo registo

    readFile ("dados.txt");

    cout << "\n" << ficha[0].nome;

    return 0;
}
