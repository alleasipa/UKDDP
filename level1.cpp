#include<iostream>
using namespace std;

int main() {
    int totalDetik;
    int jam, menit, detik;

    cout << "Masukkan bilangan >1 " << endl;
    cin >> totalDetik;

    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detik = totalDetik % 60;

    cout << "Hasil Konversi: " << endl;
    cout << totalDetik << " detik = " << jam << " Jam," << menit << " Menit, " << detik << " Detik. " << endl;

    return 0; 
}