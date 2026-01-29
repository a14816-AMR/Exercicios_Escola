#include <iostream>
using namespace std;

int main () {
    string food = "Pizza";
    string* ptr = &food;
    *ptr = "Legumes";


    cout << food << "\n" << &food;
    cout << ptr << "\n" << *ptr;
    return 0;
}

