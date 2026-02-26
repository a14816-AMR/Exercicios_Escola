#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    double idade;
    string curso;
    string localidade;
    bool concluido;
};

double mediaAlunos (Aluno aluno1, Aluno aluno2) {
    return (aluno1.idade + aluno2.idade) /  2;;
}

double mediaAlunosN (double ant, Aluno y, double numAlunos = 1.0) {
    return ((ant * (numAlunos - 1) + y.idade)) / numAlunos;
}


void mostraInfo (Aluno aluno1) {
    cout << "\n\nNome: " << aluno1.nome;
    cout << "\nIdade: " << aluno1.idade;
    cout << "\nCurso: " << aluno1.curso;
    cout << "\nLocalidade: " << aluno1.localidade;
    if (aluno1.concluido == 0) cout << "\nConcluido: Nao ";
    if (aluno1.concluido == 1) cout << "\nConcluido: Sim ";

}

int main() {
    Aluno aluno1, aluno2, aluno3, media2alunos;

    aluno1.nome = "Luis";
    aluno1.idade = 24;
    aluno1.curso = " Programador Informatico";
    aluno1.localidade = "Famalicao";
    aluno1.concluido = true;

    aluno2.nome = "Fred";
    aluno2.idade = 15;
    aluno2.curso = " Programador Informatico";
    aluno2.localidade = "Famalicodeas";
    aluno2.concluido = false;

    aluno3.nome = "Dinis";
    aluno3.idade = 10;
    aluno3.curso = " Programador Informatico";
    aluno3.localidade = "Famalicodeas";
    aluno3.concluido = true;


    mostraInfo (aluno1);
    mostraInfo (aluno2);

    cout << "\n" << mediaAlunos (aluno1, aluno2);

    double xNovo = mediaAlunosN (0, aluno1, 1);
    xNovo = mediaAlunosN (xNovo, aluno2, 2);
    xNovo = mediaAlunosN (xNovo, aluno3, 3);
    cout << "\n\nMedia 3 alunos: " << xNovo;
    return 0;
}
