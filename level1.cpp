#include<iostream>
using namespace std;

int main() {
    int totalDetik;
    int jam, menit, detik;

    cout << "=========================================" << endl;
    cout << " KONVERSI DETIK KE JAM, MENIT, DETIK " << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan bilangan >1 " << endl;
    cin >> totalDetik;

    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detik = totalDetik % 60;

    cout << "Hasil Konversi: " << endl;
    cout << totalDetik << " detik = " << jam << " Jam," << menit << " Menit, " << detik << " Detik. " << endl;

    cout << "================================================" << endl;
    cout << "Terima kasih telah menggunakan konverter waktu!" << endl;
    
    return 0; 
}
