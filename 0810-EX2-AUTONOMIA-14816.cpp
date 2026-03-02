#include <iostream>
#include <string>
using namespace std;
struct Modulo {
    string codModulo;
    string nomeModulo;
    string disciplina;
    double notaModulo;
    bool concluido;
};
Modulo modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7;

void mostraInfo (Modulo moduloSel) {
    cout << "\n\ncodModulo: " << moduloSel.codModulo;
    cout << "\nnomeModulo: " << moduloSel.nomeModulo;
    cout << "\ndisciplina " << moduloSel.disciplina;
    cout << "\nnotaModulo: " << moduloSel.notaModulo;
    if (moduloSel.concluido) cout << "\nconcluido? Sim";
    else cout << "\nconcluido? Nao";

}

double mediaDisciplina(Modulo modulo1,Modulo modulo2,Modulo modulo3,Modulo modulo4,Modulo modulo5,Modulo modulo6,Modulo modulo7) {
    double res, somaNotaModulos;
    int numModulos = 7, modulosConcluidos = 0;

    if (modulo1.concluido == true) modulosConcluidos = 1;
    if (modulo2.concluido == true) modulosConcluidos = modulosConcluidos + 1;
    if (modulo3.concluido == true) modulosConcluidos = modulosConcluidos + 1;
    if (modulo4.concluido == true) modulosConcluidos = modulosConcluidos + 1;
    if (modulo5.concluido == true) modulosConcluidos = modulosConcluidos + 1;
    if (modulo6.concluido == true) modulosConcluidos = modulosConcluidos + 1;
    if (modulo7.concluido == true) modulosConcluidos = modulosConcluidos + 1;

    res = (modulo1.notaModulo + modulo2.notaModulo + modulo3.notaModulo + modulo4.notaModulo + modulo5.notaModulo + modulo6.notaModulo + modulo7.notaModulo) / modulosConcluidos;
    return "\n\nMedia modulos ", res;
}

string concluidoDisciplina (Modulo modulo1,Modulo modulo2,Modulo modulo3,Modulo modulo4,Modulo modulo5,Modulo modulo6,Modulo modulo7){
    string modulosFeitos = "";

    cout << "\n\n-----MODULOS COMPLETOS-----\n";

    if (modulo1.concluido == true) modulosFeitos += "\n=> 0804 - Algoritmos";
    if (modulo2.concluido == true) modulosFeitos += "\n=> 0805 - Estruturas de Dados";
    if (modulo3.concluido == true) modulosFeitos += "\n=> 0806 - Principios medontologicos da programacao";
    if (modulo4.concluido == true) modulosFeitos += "\n=> 0809 - Programacao em C++ - fundamentos";
    if (modulo5.concluido == true) modulosFeitos += "\n=> 0810 - Programacao em C++ - avancada";
    if (modulo6.concluido == true) modulosFeitos += "\n=> 0816 - Programacao de sistemas distribuidos - JAVA";
    if (modulo7.concluido == true) modulosFeitos += "\n=> 10791 - Desenvolvimento de aplicacoes web em JAVA";

    return modulosFeitos;
}

string porconcluirDisciplina (Modulo modulo1,Modulo modulo2,Modulo modulo3,Modulo modulo4,Modulo modulo5,Modulo modulo6,Modulo modulo7){
    string modulosFalta = "";

    cout << "\n\n-----MODULOS POR CONCLUIR-----\n";

    if (modulo1.concluido == false) modulosFalta += "\n=> 0804 - Algoritmos";
    if (modulo2.concluido == false) modulosFalta += "\n=> 0805 - Estruturas de Dados";
    if (modulo3.concluido == false) modulosFalta += "\n=> 0806 - Principios medontologicos da programacao";
    if (modulo4.concluido == false) modulosFalta += "\n=> 0809 - Programacao em C++ - fundamentos";
    if (modulo5.concluido == false) modulosFalta += "\n=> 0810 - Programacao em C++ - avancada";
    if (modulo6.concluido == false) modulosFalta += "\n=> 0816 - Programacao de sistemas distribuidos - JAVA";
    if (modulo7.concluido == false) modulosFalta += "\n=> 10791 - Desenvolvimento de aplicacoes web em JAVA";

    return modulosFalta;
}


int main() {
    // modulo1
    modulo1.codModulo = "0804";
    modulo1.nomeModulo = "Algoritmos";
    modulo1.disciplina = "Programação";
    modulo1.notaModulo = 10;
    modulo1.concluido = true;
    // modulo2
    modulo2.codModulo = "0805"; // 0805
    modulo2.nomeModulo = "Estruturas de Dados";
    modulo2.disciplina = "Programação";
    modulo2.notaModulo = 8;
    modulo2.concluido = true;
    // modulo3
    modulo3.codModulo = "0806";
    modulo3.nomeModulo = "Principios medontologicos da programacao";
    modulo3.disciplina = "Programação";
    modulo3.notaModulo = 18;
    modulo3.concluido = true;
    // modulo4
    modulo4.codModulo = "0809";
    modulo4.nomeModulo = "Programacao em C++ - fundamentos";
    modulo4.disciplina = "Programação";
    modulo4.notaModulo = 19;
    modulo4.concluido = true;
    // modulo5
    modulo5.codModulo = "0810";
    modulo5.nomeModulo = "Programacao em C++ - avancada";
    modulo5.disciplina = "Programação";
    modulo5.notaModulo = 0;
    modulo5.concluido = false;
    // modulo6
    modulo6.codModulo = "0816";
    modulo6.nomeModulo = "Programacao de sistemas distribuidos - JAVA";
    modulo6.disciplina = "Programação";
    modulo6.notaModulo = 0;
    modulo6.concluido = false;
    // modulo7
    modulo7.codModulo = "10791";
    modulo7.nomeModulo = "Desenvolvimento de aplicacoes web em JAVA";
    modulo7.disciplina = "Programação";
    modulo7.notaModulo = 0;
    modulo7.concluido = false;

    // Apresentacao dos dados

    mostraInfo (modulo1);
    mostraInfo (modulo2);
    mostraInfo (modulo3);
    mostraInfo (modulo4);
    mostraInfo (modulo5);
    mostraInfo (modulo6);
    mostraInfo (modulo7);

    cout << "\n\nMedia modulos: " << mediaDisciplina (modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);
    cout << concluidoDisciplina (modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);
    cout << porconcluirDisciplina (modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);

    return 0;
}

