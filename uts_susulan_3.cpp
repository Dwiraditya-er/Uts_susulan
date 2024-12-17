#include <iostream>
using namespace std;

int jumlahGenap(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Masukkan nilai N: ";
    cin >> n;
    cout << "Jumlah bilangan genap dari 1 hingga " << n << " adalah: " << jumlahGenap(n) << endl;
    return 0;
}
