#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int gaji_pokok, golongan, banyak_anak, tunjangan_anak, total_gaji;
    string nama;
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan golongan Anda (1, 2, atau 3): ";
    cin >> golongan;
    cout << "Masukkan jumlah anak Anda: ";
    cin >> banyak_anak;
    switch (golongan) {
        case 1:
            gaji_pokok = 5000000;
            break;
        case 2:
            gaji_pokok = 3000000;
            break;
        case 3:
            gaji_pokok = 2500000;
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
            break;
    }
    if (banyak_anak > 2) {
        tunjangan_anak = 750000;
    } else if (banyak_anak > 0) {
        tunjangan_anak = 500000;
    } else {
        tunjangan_anak = 0;
    }
    total_gaji = round((gaji_pokok * 0.95) + tunjangan_anak);
    cout << "Total gaji Anda adalah: " << total_gaji << endl;
}