 #include <iostream>
 #include <stdio.h>
 using namespace std;

 int main () {
    int numerosTotal = 5, aux1 = 0;
    int numeros [numerosTotal] = {9, 2, 0, 6, 4};

    // Linha 1
    for (int i = 0; i <= (numerosTotal - 1) ; i++) {
        cout << " | " << numeros[i];
    }

    cout << "\n";
    // Linha 2
    for (int i = (numerosTotal - 1) ; i >= 0; i--) {
        cout << " | " << numeros[i];
    }
    cout << "\n";

    // Linha 3
    for (int i = (numerosTotal - 1) ; i >= (numerosTotal/2); i--) {
        cout << " | " << numeros [i];
        if (i != ((numerosTotal-1)-i)){
            cout << " | " << numeros[(numerosTotal-1)-i];
        }
    }
    cout << "\n";

    // Linha 4
    for (int i = (numerosTotal - 1) ; i >= (numerosTotal/2); i--) {
        cout << " | " << numeros[(numerosTotal-1)-i];
        if (i != ((numerosTotal-1)-i)){
            cout << " | " << numeros [i];
        }
    }
    cout << "\n";

    // Linha 5
    for (int i = (numerosTotal/2) ; i <= (numerosTotal - 1); i++) {
        cout << " | " << numeros[(numerosTotal-1)-i];
        if (i != ((numerosTotal-1)-i)){
            cout << " | " << numeros [i];
        }
    }

    return 0;
 }



 /*
TPC 
- Pedir ao ultilizador mais 5 numeros e adicionar no array (9, 2, 0, 6, 4, ...)
- Criar 2 ararys um de numeros pares e o outro de numeros impar e filtrar o array de cima e colocar nos 2 arrays (Par e imapr)
- Mostrar os arrays par e impar



W3 scholls controlar array sem posição definidas 
*/




