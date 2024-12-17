#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Masukkan sebuah angka: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " adalah Genap." << endl;
    } else {
        cout << number << " adalah Ganjil." << endl;
    }

    return 0;
}
