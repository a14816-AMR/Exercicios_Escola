#include <iostream>
#include <fstream>
using namespace std;

const int totalCarros = 5;
const int totalCircuitos = 10, cirsuitoSelecionado = 5;

struct CarroCompeticao {
    string nomePiloto;
    string modeloCarro;
    int numCarro;
    float tempoVoltas;
    int pontos;
};

struct Pistas {
    string nomePista;
    string dataCompeticao;
    string localCompeticao;
    CarroCompeticao carroCompeticao [totalCarros];
};

/*void contagemPontos (Pistas circuito[totalCircuitos]) {

    int pontos = 0;
    // Somar os pontos de cada piloto
    for (int j = 0; j < totalCircuitos; j++) {
        for (int i = 0; i < totalCarros; i++) {
            if (i == 0) circuito[j].carroCompeticao[i].pontos = 15 + pontos;
            if (i == 1) circuito[j].carroCompeticao[i].pontos = 10 + pontos;
            if (i == 2) circuito[j].carroCompeticao[i].pontos = 5 + pontos;
            if (i == 3) circuito[j].carroCompeticao[i].pontos = 3 + pontos;
            if (i == 4) circuito[j].carroCompeticao[i].pontos = 1 + pontos;
        }
    }
    // Ver quem ganhou a competição por pontos
    for (int i = 0; i < totalCarros - 1; i++) {
        for (int j = 0; j < totalCarros - i - 1; j++) {
            if (circuito[cirsuitoSelecionado].carroCompeticao[j].pontos > circuito[cirsuitoSelecionado].carroCompeticao[j + 1].pontos) {
                CarroCompeticao Pontos = circuito[cirsuitoSelecionado].carroCompeticao[j];
                circuito[cirsuitoSelecionado].carroCompeticao[j] = circuito[cirsuitoSelecionado].carroCompeticao[j + 1];
                circuito[cirsuitoSelecionado].carroCompeticao[j + 1] = Pontos;
            }
        }
    }

    cout << "\n\n--- Classificacao por pontos ---\n";
    for (int i = 0; i < totalCarros; i++) {
        cout << "\nPiloto: " << circuito[cirsuitoSelecionado].carroCompeticao[i].nomePiloto;
        cout << " \nModelo do Carro: " << circuito[cirsuitoSelecionado].carroCompeticao[i].modeloCarro;
        cout << "\nNumero do Carro: " << circuito[cirsuitoSelecionado].carroCompeticao[i].numCarro;
        cout << "\nPontos: " << circuito[cirsuitoSelecionado].carroCompeticao[i].pontos << " pontos\n";
    }


}*/

void ordenarPorTempo (Pistas circuito[totalCircuitos]){
    for (int i = 0; i < totalCarros - 1; i++) {
        for (int j = 0; j < totalCarros - i - 1; j++) {
            if (circuito[cirsuitoSelecionado].carroCompeticao[j].tempoVoltas > circuito[cirsuitoSelecionado].carroCompeticao[j + 1].tempoVoltas) {
                CarroCompeticao temp = circuito[cirsuitoSelecionado].carroCompeticao[j];
                circuito[cirsuitoSelecionado].carroCompeticao[j] = circuito[cirsuitoSelecionado].carroCompeticao[j + 1];
                circuito[cirsuitoSelecionado].carroCompeticao[j + 1] = temp;
            }
        }
    }
}
void exibirPistas (Pistas circuito[totalCircuitos]) {

    circuito[0].nomePista = "Susuka";
    circuito[0].dataCompeticao = "29/03/2026";
    circuito[0].localCompeticao = "Japao";

    circuito[1].nomePista = "Monaco";
    circuito[1].dataCompeticao = "07/06/2026";
    circuito[1].localCompeticao = "Monaco";

    circuito[2].nomePista = "Barcelona";
    circuito[2].dataCompeticao = "14/06/2026";
    circuito[2].localCompeticao = "Espanha";

    circuito[3].nomePista = "Silverstone";
    circuito[3].dataCompeticao = "05/07/2026";
    circuito[3].localCompeticao = "Reino Unido";

    circuito[4].nomePista = "Spa-Francorchamps";
    circuito[4].dataCompeticao = "17/07/2026";
    circuito[4].localCompeticao = "Belgica";

    circuito[5].nomePista = "Budapest";
    circuito[5].dataCompeticao = "26/07/2026";
    circuito[5].localCompeticao = "Hungria";


    circuito[6].nomePista = "Zandvoort";
    circuito[6].dataCompeticao = "21/08/2026";
    circuito[6].localCompeticao = "Holanda";

    circuito[7].nomePista = "Monza";
    circuito[7].dataCompeticao = "06/09/2026";
    circuito[7].localCompeticao = "Italia";

    circuito[8].nomePista = "Interlagos";
    circuito[8].dataCompeticao = "06/11/2026";
    circuito[8].localCompeticao = "Brasil";

    circuito[9].nomePista = "Yas Marina";
    circuito[9].dataCompeticao = "06/12/2026";
    circuito[9].localCompeticao = "Abu Dhabi";

}
void exibirResultados (Pistas circuito[totalCircuitos], int i) {
    cout << "\n--- P" << i << " ---";
    cout << "\nPiloto: " << circuito[cirsuitoSelecionado].carroCompeticao[i-1].nomePiloto;
    cout << " \nModelo do Carro: " << circuito[cirsuitoSelecionado].carroCompeticao[i-1].modeloCarro;
    cout << "\nNumero do Carro: " << circuito[cirsuitoSelecionado].carroCompeticao[i-1].numCarro;
    cout << "\nTempo de Volta: " << circuito[cirsuitoSelecionado].carroCompeticao[i-1].tempoVoltas << "h";

}
void registrarCarros (Pistas circuito[totalCircuitos]) {

    // Registrando os carros e pilotos para o circuito de Susuka
    circuito[0].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[0].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[0].carroCompeticao[0].numCarro = 44;
    circuito[0].carroCompeticao[0].tempoVoltas = 1.33;

    circuito[0].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[0].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[0].carroCompeticao[1].numCarro = 33;
    circuito[0].carroCompeticao[1].tempoVoltas = 1.18;

    circuito[0].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[0].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[0].carroCompeticao[2].numCarro = 1;
    circuito[0].carroCompeticao[2].tempoVoltas = 1.19;

    circuito[0].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[0].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[0].carroCompeticao[3].numCarro = 7;
    circuito[0].carroCompeticao[3].tempoVoltas = 1.17;

    circuito[0].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[0].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[0].carroCompeticao[4].numCarro = 3;
    circuito[0].carroCompeticao[4].tempoVoltas = 1.19;


    // Registrando os carros e pilotos para o circuito de Monaco
    circuito[1].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[1].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[1].carroCompeticao[0].numCarro = 44;
    circuito[1].carroCompeticao[0].tempoVoltas = 1.19;

    circuito[1].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[1].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[1].carroCompeticao[1].numCarro = 33;
    circuito[1].carroCompeticao[1].tempoVoltas = 1.13;

    circuito[1].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[1].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[1].carroCompeticao[2].numCarro = 1;
    circuito[1].carroCompeticao[2].tempoVoltas = 1.12;

    circuito[1].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[1].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[1].carroCompeticao[3].numCarro = 7;
    circuito[1].carroCompeticao[3].tempoVoltas = 1.17;

    circuito[1].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[1].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[1].carroCompeticao[4].numCarro = 3;
    circuito[1].carroCompeticao[4].tempoVoltas = 1.14;


    // Registrando os carros e pilotos para o circuito de Barcelona
    circuito[2].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[2].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[2].carroCompeticao[0].numCarro = 44;
    circuito[2].carroCompeticao[0].tempoVoltas = 1.14;

    circuito[2].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[2].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[2].carroCompeticao[1].numCarro = 33;
    circuito[2].carroCompeticao[1].tempoVoltas = 1.16;

    circuito[2].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[2].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[2].carroCompeticao[2].numCarro = 1;
    circuito[2].carroCompeticao[2].tempoVoltas = 1.13;

    circuito[2].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[2].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[2].carroCompeticao[3].numCarro = 7;
    circuito[2].carroCompeticao[3].tempoVoltas = 1.12;

    circuito[2].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[2].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[2].carroCompeticao[4].numCarro = 3;
    circuito[2].carroCompeticao[4].tempoVoltas = 1.14;

// Registrando os carros e pilotos para o circuito de Silverstone
    circuito[3].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[3].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[3].carroCompeticao[0].numCarro = 44;
    circuito[3].carroCompeticao[0].tempoVoltas = 1.10;

    circuito[3].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[3].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[3].carroCompeticao[1].numCarro = 33;
    circuito[3].carroCompeticao[1].tempoVoltas = 1.12;

    circuito[3].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[3].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[3].carroCompeticao[2].numCarro = 1;
    circuito[3].carroCompeticao[2].tempoVoltas = 1.11;

    circuito[3].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[3].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[3].carroCompeticao[3].numCarro = 7;
    circuito[3].carroCompeticao[3].tempoVoltas = 1.13;

    circuito[3].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[3].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[3].carroCompeticao[4].numCarro = 3;
    circuito[3].carroCompeticao[4].tempoVoltas = 1.19;

// Registrando os carros e pilotos para o circuito de Spa-Francorchamps
    circuito[4].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[4].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[4].carroCompeticao[0].numCarro = 44;
    circuito[4].carroCompeticao[0].tempoVoltas = 1.16;

    circuito[4].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[4].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[4].carroCompeticao[1].numCarro = 33;
    circuito[4].carroCompeticao[1].tempoVoltas = 1.12;

    circuito[4].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[4].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[4].carroCompeticao[2].numCarro = 1;
    circuito[4].carroCompeticao[2].tempoVoltas = 1.14;

    circuito[4].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[4].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[4].carroCompeticao[3].numCarro = 7;
    circuito[4].carroCompeticao[3].tempoVoltas = 1.13;

    circuito[4].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[4].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[4].carroCompeticao[4].numCarro = 3;
    circuito[4].carroCompeticao[4].tempoVoltas = 1.11;


    // Registrando os carros e pilotos para o circuito de Budapest
    circuito[5].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[5].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[5].carroCompeticao[0].numCarro = 44;
    circuito[5].carroCompeticao[0].tempoVoltas = 1.33;

    circuito[5].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[5].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[5].carroCompeticao[1].numCarro = 33;
    circuito[5].carroCompeticao[1].tempoVoltas = 1.18;

    circuito[5].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[5].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[5].carroCompeticao[2].numCarro = 1;
    circuito[5].carroCompeticao[2].tempoVoltas = 1.19;

    circuito[5].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[5].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[5].carroCompeticao[3].numCarro = 7;
    circuito[5].carroCompeticao[3].tempoVoltas = 1.17;

    circuito[5].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[5].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[5].carroCompeticao[4].numCarro = 3;
    circuito[5].carroCompeticao[4].tempoVoltas = 1.19;


    // Registrando os carros e pilotos para o circuito de Zandvoort
    circuito[6].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[6].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[6].carroCompeticao[0].numCarro = 44;
    circuito[6].carroCompeticao[0].tempoVoltas = 1.19;

    circuito[6].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[6].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[6].carroCompeticao[1].numCarro = 33;
    circuito[6].carroCompeticao[1].tempoVoltas = 1.13;

    circuito[6].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[6].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[6].carroCompeticao[2].numCarro = 1;
    circuito[6].carroCompeticao[2].tempoVoltas = 1.12;

    circuito[6].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[6].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[6].carroCompeticao[3].numCarro = 7;
    circuito[6].carroCompeticao[3].tempoVoltas = 1.17;

    circuito[6].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[6].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[6].carroCompeticao[4].numCarro = 3;
    circuito[6].carroCompeticao[4].tempoVoltas = 1.14;


    // Registrando os carros e pilotos para o circuito de Monza
    circuito[7].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[7].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[7].carroCompeticao[0].numCarro = 44;
    circuito[7].carroCompeticao[0].tempoVoltas = 1.14;

    circuito[7].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[7].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[7].carroCompeticao[1].numCarro = 33;
    circuito[7].carroCompeticao[1].tempoVoltas = 1.16;

    circuito[7].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[7].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[7].carroCompeticao[2].numCarro = 1;
    circuito[7].carroCompeticao[2].tempoVoltas = 1.13;

    circuito[7].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[7].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[7].carroCompeticao[3].numCarro = 7;
    circuito[7].carroCompeticao[3].tempoVoltas = 1.12;

    circuito[7].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[7].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[7].carroCompeticao[4].numCarro = 3;
    circuito[7].carroCompeticao[4].tempoVoltas = 1.14;

// Registrando os carros e pilotos para o circuito de Interlagos
    circuito[8].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[8].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[8].carroCompeticao[0].numCarro = 44;
    circuito[8].carroCompeticao[0].tempoVoltas = 1.10;

    circuito[8].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[8].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[8].carroCompeticao[1].numCarro = 33;
    circuito[8].carroCompeticao[1].tempoVoltas = 1.12;

    circuito[8].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[8].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[8].carroCompeticao[2].numCarro = 1;
    circuito[8].carroCompeticao[2].tempoVoltas = 1.11;

    circuito[8].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[8].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[8].carroCompeticao[3].numCarro = 7;
    circuito[8].carroCompeticao[3].tempoVoltas = 1.13;

    circuito[8].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[8].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[8].carroCompeticao[4].numCarro = 3;
    circuito[8].carroCompeticao[4].tempoVoltas = 1.19;

// Registrando os carros e pilotos para o circuito de Abu Dhabi
    circuito[9].carroCompeticao[0].nomePiloto = "Lewis Hamilton";
    circuito[9].carroCompeticao[0].modeloCarro = "Mercedes W11";
    circuito[9].carroCompeticao[0].numCarro = 44;
    circuito[9].carroCompeticao[0].tempoVoltas = 1.16;

    circuito[9].carroCompeticao[1].nomePiloto = "Max Verstappen";
    circuito[9].carroCompeticao[1].modeloCarro = "Red Bull RB16";
    circuito[9].carroCompeticao[1].numCarro = 33;
    circuito[9].carroCompeticao[1].tempoVoltas = 1.12;

    circuito[9].carroCompeticao[2].nomePiloto = "Aryton Senna";
    circuito[9].carroCompeticao[2].modeloCarro = "McLaren MP4/4";
    circuito[9].carroCompeticao[2].numCarro = 1;
    circuito[9].carroCompeticao[2].tempoVoltas = 1.14;

    circuito[9].carroCompeticao[3].nomePiloto = "Michael Schumacher";
    circuito[9].carroCompeticao[3].modeloCarro = "Ferrari F2004";
    circuito[9].carroCompeticao[3].numCarro = 7;
    circuito[9].carroCompeticao[3].tempoVoltas = 1.13;

    circuito[9].carroCompeticao[4].nomePiloto = "Sebastian Vettel";
    circuito[9].carroCompeticao[4].modeloCarro = "Red Bull RB9";
    circuito[9].carroCompeticao[4].numCarro = 3;
    circuito[9].carroCompeticao[4].tempoVoltas = 1.11;


}

int main () {
    Pistas circuito [totalCircuitos];
    exibirPistas (circuito);
    registrarCarros (circuito);
    ordenarPorTempo (circuito);

    cout << "***** Classificacoes do GP de " << circuito[cirsuitoSelecionado].nomePista << " *****\n";
    for (int i = 1; i <= totalCarros; i++) {
        exibirResultados (circuito, i);
    }

    //contagemPontos (circuito);

    /*
    Quero saber quem ganhou a competição correndo todas as pistas, pretendo no minimo uma função para este problema.
    */




    return 0;
}
