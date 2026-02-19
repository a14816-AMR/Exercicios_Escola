#include <iostream>
using namespace std;
void mudarXY (int &x1, int &y1) {
    int aux;
    aux = x1;
    x1 = y1;
    y1 = aux;

}

int main () {
    int x = 1, y = 2, z = 3, w = 4;
    mudarXY (y, w);
    mudarXY (x, y);
    mudarXY (z, w);

    cout << "X | Y | Z | W \n-------------\n" << x << " | " << y << " | " << z << " | " << w;


    /*cout << "\nx: " << x;
    cout << "\ny: " << y;
    cout << "\nz: " << z;
    cout << "\nw: " << w;*/
    return 0;
}
