#include <iostream>
using namespace std;

int main() {
    int number;

    // Meminta pengguna untuk memasukkan angka
    cout << "Masukkan sebuah angka: ";
    cin >> number;

    // Memeriksa apakah angka genap atau ganjil
    if (number % 2 == 0) {
        cout << number << " adalah Genap." << endl;
    } else {
        cout << number << " adalah Ganjil." << endl;
    }

    return 0;
}
