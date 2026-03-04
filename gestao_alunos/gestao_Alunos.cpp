#include <iostream>
#include <fstream>
using namespace std;

const int totalAlunos = 30;

string numAluno, nome, idade;
string linha_aluno;
string Mytext;

struct fAluno {
    int numFicha;
    string nomeFicha;
    double idadeFicha;
};
fAluno ficha[totalAlunos];

void mostrarFichaAluno (fAluno ficha) {
    cout << "***FICHA ALUNO***\n\n";
    cout << "Num: " << ficha.numFicha << "\n";
    cout << "Nome: " << ficha.nomeFicha << "\n";
    cout << "Idade: " << ficha.idadeFicha << "\n\n\n";

}

/*double mediaIdades (fAluno ficha[totalAlunos]) {
    double res;
    for (int i = 0: i < totalAlunos; i++){
        res += ficha.idadeFicha;
    }
    return res / totalAlunos ;
}*/

void readFile (string localFicheiro, int &numAlunos, fAluno arF[totalAlunos]) {
        ifstream MyReadFile ("dados.txt");
        int j = 1, total=0;
        int colunaDados;
        while (getline (MyReadFile, Mytext)) {
            if (Mytext != "") {
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
                ficha[numAlunos].numFicha = stoi(numAluno);
                ficha[numAlunos].nomeFicha = nome;
                ficha[numAlunos].idadeFicha = stoi(idade);

                j++;
                numAlunos++;
            }
        }
        cout << "Li " << numAlunos << " Alunos\n";
        // Fechar o arquivo
        MyReadFile.close();
}

int main () {
    int numAlunos = 0, i;
    double res;

    readFile ("dados.txt", numAlunos, ficha);

    cout << "\nTenho " << numAlunos << " Alunos\n\n";
    mostrarFichaAluno (ficha[0]);
    mostrarFichaAluno (ficha[numAlunos-1]);


    // Erro aqui !!!
    for (i = 0; i < totalAlunos; i++) {
        res += ficha[i].idadeFicha ;

        if (Mytext == " ") break;

    }
    cout << i;
    cout << "\n\nMedia idades: " << res / i;

    return 0;
}
