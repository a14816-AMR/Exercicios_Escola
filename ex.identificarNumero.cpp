#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Insira um numero a sua escolha: ";
    cin >> num1;
    if (num1 < 0) {
        cout << " Numero Negativo.";
    } else if (num1 == 0){
        cout << " Numero Neutro.";
    } else if (num1 > 0 && num1 < 100){
        cout << "Numero Positivo Pequeno.";
    } else {
        cout << " Numero Enorme";
    }

    return 0;
}
