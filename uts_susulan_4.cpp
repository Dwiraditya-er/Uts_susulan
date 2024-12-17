#include <iostream>
using namespace std;

int hitungkali(int a, int b) {
    return a * b;
}

int main() {
    int number, number2;
    cout << "Masukkan bilangan pertama: ";
    cin >> number;
    cout << "Masukkan bilangan kedua: ";
    cin >> number2;

    cout << "Hasil kali dari " << number << " dan " << number2 << " adalah: " << hitungkali(number, number2) << endl;
    return 0;
}
