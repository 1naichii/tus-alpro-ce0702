#include <iostream>
#include <algorithm>  // untuk transform huruf
using namespace std;

string motorRekomendasi(double berat) {
    if (berat >= 50 && berat <= 65) return "125 CC";
    else if (berat > 65 && berat <= 75) return "150 CC";
    else if (berat > 75 && berat <= 100) return "500 CC";
    else return "";
}

int main() {
    string nama, jawaban, nomorHP;
    int umur;
    double berat;

    cout << "Selamat Datang di WUTJEK\n";
    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "Ingin Menjadi Driver Kami? (YA/TIDAK): ";
    getline(cin, jawaban);
    transform(jawaban.begin(), jawaban.end(), jawaban.begin(), ::toupper);

    if (jawaban == "YA") {
        cout << "Masukkan Umur: ";
        cin >> umur;
        cin.ignore();  // untuk membersihkan newline setelah input umur

        if (umur >= 20) {
            cout << "Masukkan Berat Badan Anda (kg): ";
            cin >> berat;
            cin.ignore();  // membersihkan newline setelah input berat

            cout << "Masukkan Nomor HP Anda: ";
            getline(cin, nomorHP);

            if (berat > 0) {
                string motor = motorRekomendasi(berat);
                if (!motor.empty()) {
                    cout << "Motor yang direkomendasikan: " << motor << "\n";
                    cout << "Selamat Anda Diterima Menjadi Driver WUTJEK!!\n";
                    cout << "Data Anda: \n";
                    cout << "Nama: " << nama << "\n";
                    cout << "Umur: " << umur << "\n";
                    cout << "Berat: " << berat << " kg\n";
                    cout << "Nomor HP: " << nomorHP << "\n";
                } else {
                    cout << "Maaf Anda Tidak Sesuai Kriteria\n";
                }
            } else {
                cout << "Berat badan tidak valid.\n";
            }
        } else {
            cout << "Maaf Anda Tidak Sesuai Kriteria\n";
        }
    } else {
        cout << "Terima Kasih Sudah Mengunjungi Platform WUTJEK\n";
    }

    return 0;
}