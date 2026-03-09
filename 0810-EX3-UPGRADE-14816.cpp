#include <iostream>
#include <fstream>
using namespace std;

const int totalAlunos = 20;
const int totalModulos = 100;

struct Modulo {
    string codModulo;
    string nomeModulo;
    string disciplina;
    bool concluido;
    int notaModulo;
};

struct Aluno {
    string nome;
    double idade;
    string curso;
    string localidade;
    bool concluido;
    int numAluno;
    Modulo modulos [totalModulos];
};

double mediaAlunos (Aluno turma1P2025[totalAlunos]) {
    double res = 0;
    for (int i = 0; i < totalAlunos; i++) {
        res += turma1P2025[i].idade;
    }
    return res / totalAlunos;
}

double mediaModulos (Aluno turma1P2025[totalAlunos]) {
    double res = 0, numModulos = 0;

    for (int j = 0; j < 7; j++){
        if (turma1P2025[8].modulos[j].concluido == true) numModulos += 1;
    }
    for (int i = 0; i < totalAlunos; i++) {
        res += turma1P2025[8].modulos[i].notaModulo;
    }

    return res / numModulos;
}

void mostraInfo (Aluno alunoX) {
    cout << "\n\n\n-----ALUNO #-----";
    cout << "\n  nome: " << alunoX.nome;
    cout << "\n  idade: " << alunoX.idade;
    cout << "\n  curso: " << alunoX.curso;
    cout << "\n  localidade: " << alunoX.localidade;
    if (alunoX.concluido == true) cout << "\n  concluido? Sim";
    else cout << "\n  concluido? Nao";
}

int numAlunoConcluiram(Aluno turma1P2025[totalAlunos]) {
    int alunosConcluiram = 0;
    for (int i = 1; i <= totalAlunos; i++) {
        if (turma1P2025[i].concluido == true) alunosConcluiram += i+1;
    }

    return alunosConcluiram;
}

void alunosPorConcluir(Aluno turma1P2025[totalAlunos]) {
    string alunosIncompletos = " ";
    cout << "\n\n === Num alunos por concluir: ";
    for (int i = 0; i < totalAlunos; i++) {
        if (turma1P2025[i].concluido == false) cout << "\n   => " << turma1P2025[i].numAluno << " " << turma1P2025[i].nome;
    }
}

void iniciarTurma (Aluno turma1P2025[totalAlunos]) {

    turma1P2025[0].nome = "Giovani Simões Trindade"; ////
    turma1P2025[0].idade = 18;
    turma1P2025[0].curso = "Programador Informático";
    turma1P2025[0].localidade = "Portugal";
    turma1P2025[0].concluido = false;
    turma1P2025[0].numAluno = 14770;

    turma1P2025[1].nome = "Tiago Filipe Araújo de Sá"; ///
    turma1P2025[1].idade = 18;
    turma1P2025[1].curso = "Programador Informático";
    turma1P2025[1].localidade = "Portugal";
    turma1P2025[1].concluido = false;
    turma1P2025[1].numAluno = 14777;

    turma1P2025[2].nome = "Salvador Maria Carvalho Ribeiro de Cabral Sacadura"; //
    turma1P2025[2].idade = 18;
    turma1P2025[2].curso = "Programador Informático";
    turma1P2025[2].localidade = "Portugal";
    turma1P2025[2].concluido = false;
    turma1P2025[2].numAluno = 14782;

    turma1P2025[3].nome = "Gonçalo Oliveira Serra"; /////
    turma1P2025[3].idade = 18;
    turma1P2025[3].curso = "Programador Informático";
    turma1P2025[3].localidade = "Portugal";
    turma1P2025[3].concluido = false;
    turma1P2025[3].numAluno = 14784;

    turma1P2025[4].nome = "Tomás dos Santos Ferreira Stasto"; /////
    turma1P2025[4].idade = 18;
    turma1P2025[4].curso = "Programador Informático";
    turma1P2025[4].localidade = "Portugal";
    turma1P2025[4].concluido = false;
    turma1P2025[4].numAluno = 14786;

    turma1P2025[5].nome = "Davi Marques Costa do Nascimento"; /////
    turma1P2025[5].idade = 18;
    turma1P2025[5].curso = "Programador Informático";
    turma1P2025[5].localidade = "Portugal";
    turma1P2025[5].concluido = false;
    turma1P2025[5].numAluno = 14794;

    turma1P2025[6].nome = "Filipe Cordeiro Portugal"; /////
    turma1P2025[6].idade = 18;
    turma1P2025[6].curso = "Programador Informático";
    turma1P2025[6].localidade = "Portugal";
    turma1P2025[6].concluido = false;
    turma1P2025[6].numAluno = 14812;

    turma1P2025[7].nome = "Simão Rafael Mesquita da Silva Carneiro"; /////
    turma1P2025[7].idade = 18;
    turma1P2025[7].curso = "Programador Informático";
    turma1P2025[7].localidade = "Portugal";
    turma1P2025[7].concluido = false;
    turma1P2025[7].numAluno = 14813;

    turma1P2025[8].nome = "André Marques Rizzon"; ////
    turma1P2025[8].idade = 18;
    turma1P2025[8].curso = "Programador Informático";
    turma1P2025[8].localidade = "Portugal";
    turma1P2025[8].concluido = false;
    turma1P2025[8].numAluno = 14816;

    turma1P2025[9].nome = "Waner Ribeiro de Souza Filho"; /////
    turma1P2025[9].idade = 18;
    turma1P2025[9].curso = "Programador Informático";
    turma1P2025[9].localidade = "Portugal";
    turma1P2025[9].concluido = false;
    turma1P2025[9].numAluno = 14830;

    turma1P2025[10].nome = "Dinis Maria Rodrigues Moreira"; ////
    turma1P2025[10].idade = 18;
    turma1P2025[10].curso = "Programador Informático";
    turma1P2025[10].localidade = "Portugal";
    turma1P2025[10].concluido = false;
    turma1P2025[10].numAluno = 14833;

    turma1P2025[11].nome = "Rodrigo Freitas Gonçalves"; ////
    turma1P2025[11].idade = 18;
    turma1P2025[11].curso = "Programador Informático";
    turma1P2025[11].localidade = "Portugal";
    turma1P2025[11].concluido = false;
    turma1P2025[11].numAluno = 14837;

    turma1P2025[12].nome = "Isabelly Hartmann Lopes Gonçalves"; ////
    turma1P2025[12].idade = 18;
    turma1P2025[12].curso = "Programador Informático";
    turma1P2025[12].localidade = "Portugal";
    turma1P2025[12].concluido = false;
    turma1P2025[12].numAluno = 14844;


    turma1P2025[13].nome = "Tiago Daniel da Silva Dias"; ////
    turma1P2025[13].idade = 18;
    turma1P2025[13].curso = "Programador Informático";
    turma1P2025[13].localidade = "Portugal";
    turma1P2025[13].concluido = false;
    turma1P2025[13].numAluno = 14859;

    turma1P2025[14].nome = "Tomás Ferreira Rompante"; ////
    turma1P2025[14].idade = 18;
    turma1P2025[14].curso = "Programador Informático";
    turma1P2025[14].localidade = "Portugal";
    turma1P2025[14].concluido = false;
    turma1P2025[14].numAluno = 14866;

    turma1P2025[15].nome = "João Afonso Machado Figueiredo"; ////
    turma1P2025[15].idade = 18;
    turma1P2025[15].curso = "Programador Informático";
    turma1P2025[15].localidade = "Portugal";
    turma1P2025[15].concluido = false;
    turma1P2025[15].numAluno = 14871;

    turma1P2025[16].nome = "Emanuel Lima Silveira"; ////
    turma1P2025[16].idade = 18;
    turma1P2025[16].curso = "Programador Informático";
    turma1P2025[16].localidade = "Portugal";
    turma1P2025[16].concluido = false;
    turma1P2025[16].numAluno = 14872;

    turma1P2025[17].nome = "João Pedro Rocha Xavier"; ////
    turma1P2025[17].idade = 18;
    turma1P2025[17].curso = "Programador Informático";
    turma1P2025[17].localidade = "Portugal";
    turma1P2025[17].concluido = false;
    turma1P2025[17].numAluno = 14880;

    turma1P2025[18].nome = "Tiago Alexandre Ramos Rufino de Sousa"; ////
    turma1P2025[18].idade = 18;
    turma1P2025[18].curso = "Programador Informático";
    turma1P2025[18].localidade = "Portugal";
    turma1P2025[18].concluido = false;
    turma1P2025[18].numAluno = 14891;

    turma1P2025[19].nome = "Rodrigo Silva Arantes"; ////
    turma1P2025[19].idade = 18;
    turma1P2025[19].curso = "Programador Informático";
    turma1P2025[19].localidade = "Portugal";
    turma1P2025[19].concluido = false;
    turma1P2025[19].numAluno = 14912;

}

int main () {
    Aluno turma1P2025 [totalAlunos];
    Aluno aluno1, aluno2;
    iniciarTurma (turma1P2025);

    turma1P2025[8].modulos[0].codModulo = "0804";
    turma1P2025[8].modulos[0].nomeModulo = "Algoritmos";
    turma1P2025[8].modulos[0].disciplina = "Programacao";
    turma1P2025[8].modulos[0].notaModulo = 19;
    turma1P2025[8].modulos[0].concluido = true;

    turma1P2025[8].modulos[1].codModulo = "0805";
    turma1P2025[8].modulos[1].nomeModulo = "Estruturas de Dados";
    turma1P2025[8].modulos[1].disciplina = "Programacao";
    turma1P2025[8].modulos[1].notaModulo = 18;
    turma1P2025[8].modulos[1].concluido = true;

    turma1P2025[8].modulos[2].codModulo = "0806";
    turma1P2025[8].modulos[2].nomeModulo = "Principios medontologicos da programacao";
    turma1P2025[8].modulos[2].disciplina = "Programacao";
    turma1P2025[8].modulos[2].notaModulo = 18;
    turma1P2025[8].modulos[2].concluido = true;

    turma1P2025[8].modulos[3].codModulo = "0809";
    turma1P2025[8].modulos[3].nomeModulo = "Programacao em C++ - fundamentos";
    turma1P2025[8].modulos[3].disciplina = "Programacao";
    turma1P2025[8].modulos[3].notaModulo = 18;
    turma1P2025[8].modulos[3].concluido = true;

    turma1P2025[8].modulos[4].codModulo = "0810";
    turma1P2025[8].modulos[4].nomeModulo = "Programacao em C++ - avancada";
    turma1P2025[8].modulos[4].disciplina = "Programacao";
    turma1P2025[8].modulos[4].notaModulo = 20;
    turma1P2025[8].modulos[4].concluido = false;

    turma1P2025[8].modulos[5].codModulo = "0816";
    turma1P2025[8].modulos[5].nomeModulo = "Programacao de sistemas distribuidos - JAVA";
    turma1P2025[8].modulos[5].notaModulo = 20;
    turma1P2025[8].modulos[5].concluido = false;

    turma1P2025[8].modulos[6].codModulo = "10791";
    turma1P2025[8].modulos[6].nomeModulo = "Desenvolvimento de aplicacoes web em JAVA";
    turma1P2025[8].modulos[6].disciplina = "Programacao";
    turma1P2025[8].modulos[6].notaModulo = 20;
    turma1P2025[8].modulos[6].concluido = false;


    for (int i = 0; i < totalAlunos; i++) {
        mostraInfo (turma1P2025[i]);
    }

    cout << "\n\nMedia idade alunos: " << mediaAlunos(turma1P2025);
    cout << "\n\n === Num alunos completos: " << numAlunoConcluiram(turma1P2025);
     alunosPorConcluir( turma1P2025);

     cout << "\n\n---Aluno " << turma1P2025[8].nome << "---\n";
     cout << "Media modulos aluno 8: " << mediaModulos (turma1P2025.modulos);


    return 0;
}
