#include <iostream>
#include <fstream>
using namespace std;

const NUMALUNOS = 30;

string numAluno, nome, idade;
string linha_aluno;
string Mytext;

struct fAluno {
    int numFicha;
    string nomeFicha;
    int idadeFicha;
};

fAluno ficha[NUMALUNOS];

void readFile (string localFicheiro) {

        ifstream MyReadFile ("dados.txt");
        int j = 1;
        int colunaDados;
        while (getline (MyReadFile, Mytext)) {
            //cout << "\n------ALUNO #" << j << "------\n";
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

            ficha[j-1].numFicha = stoi(numAluno);
            ficha[j-1].nomeFicha = nome;
            ficha[j-1].idadeFicha = stoi(idade);

            /*cout << "numAluno: " << ficha[j-1].numFicha << "\n";
            cout << "Nome: "  << ficha[j-1].nomeFicha << "\n";
            cout << "Idade: "  << ficha[j-1].idadeFicha << "\n";*/

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



    // Usar STOI !!!! VVV
    // Carregar todos os dados e migrar para ficha alunos VV
    // Na main mostrar o ultimo registo VVV
    readFile ("dados.txt");

    for (int i = 0; i < NUMALUNOS; i++) {
        if (ficha[i].numFicha == 0) {
            cout << "Ultimo registo dado:\n";
            cout << "------ALUNO #" << i << "------\n";
            cout << "Numero: " << ficha[i-1].numFicha << "\n";
            cout << "Nome: " << ficha[i-1].nomeFicha << "\n";
            cout << "Idade: " << ficha[i-1].idadeFicha << "\n";
            break;
        }

    }

    return 0;
}

