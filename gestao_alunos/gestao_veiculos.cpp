#include <iostream>
#include <string>
using namespace std;

struct Viatura {
    string matricula;
    string tipoVeiculo;
    string marca;
    string modelo;
    string dataMatricula;
    string nomeDono;
    int nifDono;
};

string mostraCarroMaisNovo(Viatura carroX, Viatura carroY) {
    int carroXano = stoi(carroX.dataMatricula.substr(0, 4));
    int carroXmes = stoi(carroX.dataMatricula.substr(5, 2));
    int carroXdia = stoi(carroX.dataMatricula.substr(8, 2));

    int carroYano = stoi(carroY.dataMatricula.substr(0, 4));
    int carroYmes = stoi(carroY.dataMatricula.substr(5, 2));
    int carroYdia = stoi(carroY.dataMatricula.substr(8, 2));
    string res = carroX.matricula;

    if (carroXano > carroYano) {
        res = carroX.matricula;
    } else if (carroXano < carroYano) {
        res = carroY.matricula;
    } else {
        if (carroXmes > carroYmes) {
        res = carroX.matricula;
        } else if (carroXmes < carroYmes) {
            res = carroY.matricula;
        } else {
            if (carroXdia > carroYdia) {
            res = carroX.matricula;
            } else if (carroXdia < carroYdia) {
                res = carroY.matricula;
            } else {

            }
        }
    }

    return res;

}

int main() {
    Viatura carro1;
    Viatura carro2;

    carro1.matricula = "EU22KJ";
    carro1.tipoVeiculo = "Carro";
    carro1.marca = "Porshe";
    carro1.modelo = "Panamera";
    carro1.dataMatricula = "2018-02-24";
    carro1.nomeDono = "Mestre Luis Santos";
    carro1.nifDono = 33319245;

    carro2.matricula = "OI75LA";
    carro2.tipoVeiculo = "Carro";
    carro2.marca = "Porshe";
    carro2.modelo = "911";
    carro2.dataMatricula = "2018-02-24";
    carro2.nomeDono = "Filipe";
    carro2.nifDono = 12311515;

    cout <<  mostraCarroMaisNovo(carro1, carro2);
    // cout << (stoi(carro2.dataMatricula.substr(0, 4)) + 1);

    return 0;
}
