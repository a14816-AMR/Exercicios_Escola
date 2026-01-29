#include <iostream>
#include <string>
using namespace std;


int expoencial (int numX, int expoX) {
    if (expoX > 0) return numX * expoencial (numX, expoX - 1);
    return 1;
}

int main () {
    int num=2, expo=4;
    expoencial (num, expo);
    cout << expoencial (num, expo);
    return 0;
}

