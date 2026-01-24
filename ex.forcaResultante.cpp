# include <iostream>
using namespace std;

double forcaResultante, massa, acel;
string res;
int main () {
    cout << "Fr = m * a \n Atraves da formula acima, deseja o que pretende calcular: ";
    cin >> res;

    if (res != "Fr" || res != "m" || res != "a"){
        cout << "Insira uma variavel valida: ";
        cin >> res;
    }

    if (res == "Fr"){ // Fazer calculo p/ Fr e devolver o resultado

            cout << "Ok, voce deseja saber a Forca Resultante \n Insira o valor da massa(Kg) : ";
            cin >> massa;
            cout << "Insira o valor da aceleracao(m/s^2): ";
            cin >> acel;
            forcaResultante = massa * acel;
            cout << "O valor da sua Forca resultante foi de " << forcaResultante << "N";
        }

    if (res == "m"){ // Fazer calculo p/ Massa e devolver o resultado
            cout << "Ok, voce deseja saber a Massa \n Insira o valor da Forca Resultante(Newtons): ";
            cin >> forcaResultante;
            cout << "Insira o valor da aceleracao(m/s^2): ";
            cin >> acel;
            massa = forcaResultante / acel;
            cout << "O valor da sua massa e de " << massa << "kg";
        }

    if (res == "a"){ // Fazer calculo p/ Acel e devolver o resultado
            cout << "Ok, voce deseja saber a Aceleracao \n Insira o valor da Forca Resultante(Newtons): ";
            cin >> forcaResultante;
            cout << "Insira o valor da massa: ";
            cin >> massa;
            acel = forcaResultante / massa;
            cout << "O valor da aceleracao e de: " << acel << "m/s^2";
        }

    return 0;
}
