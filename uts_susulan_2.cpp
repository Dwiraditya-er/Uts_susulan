#include <iostream>
using namespace std;

void cetakbilangan(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Bilangan dari 1 hingga " << n << " adalah: ";
    cetakbilangan(n);
    return 0;
}
