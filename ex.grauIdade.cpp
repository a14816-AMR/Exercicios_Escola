#include <iostream>
#include <stdio.h>
#include <ctime>  // Importar a libraria ctime library

using namespace std;

time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);
int anoAtual = datetime.tm_year + 1900;
int mesAtual = datetime.tm_mon + 1;
int diaAtual = datetime.tm_mday;

string grauIdade(int idade) { // Caso 1
    string resposta = "";
    if (idade >=0 && idade <=1) {
        resposta = "Recem-nascido(a)";
    } else if (idade > 1 && idade <=3) {
        resposta = "Bebe";
    } else if (idade > 3 && idade <=12) {
        resposta = "Crianca";
    } else if (idade > 12 && idade <=18) {
        resposta = "Adolescente";
    } else if (idade > 18 && idade <=50) {
        resposta = "Adulto(a)";
    } else if (idade > 50) {
        resposta = "Velho(a) !!!";
    } else {
        resposta = "Nao encontrei correspondencia";
    }
    return resposta;
}

int nascimento (int idade) { //Caso 2
    int anoNascimento;

        anoNascimento = anoAtual - idade;

    return anoNascimento;
}

int idadeF (int idade, int anoFuturo) { // Caso 3
    int idadeFutura;

    idadeFutura = anoFuturo - nascimento(idade);

    return idadeFutura;
}

string geracao (int idade) { // Caso 4
    string resposta = "";

    if (idade >= 80 ) {
        resposta = "um velhote";
    } else if (idade <= 79 && idade > 61) {
        resposta = " um Baby Boomer";
    } else if (idade <= 60 && idade > 45) {
        resposta = "da Geracao X";
    } else if (idade <= 44 && idade > 29) {
        resposta = "da Geracao Y";
    } else if (idade < 28 && idade >= 15) {
        resposta = "da Geracao Z";
    } else if (idade < 14) {
        resposta = "da Geracao Alpha";
    } else {
        resposta = "Nao encontrei correspondencia";
    }
    return resposta;
}

int main() {
    //cout << grauIdade(6);
    char op = '0';
    int idadeX = 0, anoFuturoX;
    string respostaAno = " ";
    cout << diaAtual << " / " << mesAtual << " / " << anoAtual << "\n";


    do {
        cout << "O que pretende fazer ? \n";
        cout << "  1 - Saber o grau da sua idade \n";
        cout << "  2 - Saber em que ano nasceu \n";
        cout << "  3 - Quantos anos terei ! \n";
        cout << "  4 - Qual e minha geracao? \n\n";
        cout << "  0 - Sair do Programa \n\n";
        cout << "O que pretende fazer: ";
        cin >> op;

        /** verificar o que é para fazer **/
        switch (op) {
            case '1':
                cout << "\n\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "\n\n Voce aparentemente voce e um(a) " << grauIdade(idadeX) << "\n\n";
                break;
            case '2':
                cout << "\n\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "Voce ja fez anos esse ano? (s / n): ";
                cin >>  respostaAno;
                    if (respostaAno == "s") {
                        cout << "\n\n Voce parece ter nascido em " << nascimento(idadeX) << "\n\n";
                    }
                    if (respostaAno == "n") {
                        cout << "\n\n Voce parece ter nascido em " << nascimento(idadeX) - 1 << "\n\n";
                    }

                break;
            case '3':
                cout << "\n\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "Diga qual ano deseja para calcular?: ";
                cin >> anoFuturoX;
                    if (anoFuturoX < nascimento(idadeX) ){
                        cout << " \n\n Bobao nao tem como ver sua idade no passado! \n\n ";
                    } else {
                        cout << "\n\n Voce tera aproximadamente " << idadeF (idadeX, anoFuturoX) << " anos em " << anoFuturoX << "\n\n";
                    }

                break;
            case '4':
                cout << "\n\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "\n\n Voce parece ser " << geracao(idadeX) <<  "\n\n";
                break;
            default:
                break;
        }

    } while (op != '0');

    cout << "Sair do programa ... tchau";

    return 0;
}

