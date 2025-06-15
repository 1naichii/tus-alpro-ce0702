#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Barang;
bool login();
void tambahBarang();
void tampilkanStok();
void keluarkanBarang();

struct Barang {
    string nama;
    int jumlah;
    string lokasi;
};

vector<Barang> gudang;

int main() {
    cout << "============================\n";
    cout << "     MANAJEMEN GUDANG\n";
    cout << "============================\n\n";

    if (!login()) {
        cout << "Login gagal. Program berhenti.\n";
        return 0;
    }

    int pilihan;
    do {
        cout << "\n=== Menu Manajemen Gudang ===\n";
        cout << "1. Tambah Barang\n";
        cout << "2. Tampilkan Stok\n";
        cout << "3. Keluarkan Barang\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-4): ";
        
        if (!(cin >> pilihan)) {
            cout << "Input tidak valid. Program akan direset.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (pilihan) {
            case 1:
                tambahBarang();
                break;
            case 2:
                tampilkanStok();
                break;
            case 3:
                keluarkanBarang();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan aplikasi.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}

bool login() {
    string username, password;
    cout << "=== Login ===\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    return username == "admin" && password == "123";
}

void tambahBarang() {
    Barang b;
    cout << "\n--- Tambah Barang ---\n";
    cout << "Nama Barang: ";
    cin.ignore(); // Membersihkan newline sebelum getline
    getline(cin, b.nama);
    
    cout << "Jumlah: ";
    while (!(cin >> b.jumlah)) {
        cout << "Input tidak valid. Masukkan angka: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    cout << "Lokasi Penyimpanan: ";
    cin.ignore();
    getline(cin, b.lokasi);
    
    gudang.push_back(b);
    cout << "Barang berhasil ditambahkan!\n";
}

void tampilkanStok() {
    cout << "\n--- Daftar Stok Barang ---\n";
    if (gudang.empty()) {
        cout << "Gudang kosong.\n";
        return;
    }

    for (size_t i = 0; i < gudang.size(); i++) {
        cout << i + 1 << ". " << gudang[i].nama
             << " | Jumlah: " << gudang[i].jumlah
             << " | Lokasi: " << gudang[i].lokasi << endl;
    }
}

void keluarkanBarang() {
    string nama;
    int jumlah;
    cout << "\n--- Keluarkan Barang ---\n";
    cout << "Nama Barang: ";
    cin.ignore();
    getline(cin, nama);
    
    cout << "Jumlah yang dikeluarkan: ";
    while (!(cin >> jumlah)) {
        cout << "Input tidak valid. Masukkan angka: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    bool ditemukan = false;
    for (size_t i = 0; i < gudang.size(); i++) {
        if (gudang[i].nama == nama) {
            ditemukan = true;
            if (gudang[i].jumlah >= jumlah) {
                gudang[i].jumlah -= jumlah;
                cout << "Barang berhasil dikeluarkan.\n";
            } else {
                cout << "Stok tidak mencukupi.\n";
            }
            break;
        }
    }

    if (!ditemukan) {
        cout << "Barang tidak ditemukan.\n";
    }
}