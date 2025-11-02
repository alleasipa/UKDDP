#include <iostream>
using namespace std;

int main() {
    long long totalDetik;
    long long hari, jam, menit, detik;

    cout << "Masukkan bilangan >=0 : ";
    cin >> totalDetik;

    hari = totalDetik / 86400;
    long long sisaDetik = totalDetik % 86400;

    jam = sisaDetik / 3600;
    sisaDetik %= 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;

    cout << "Hasil Konversi:" << endl;
    cout << totalDetik << " detik = " << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;

    return 0;
}