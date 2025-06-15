# Sistem Manajemen Gudang

## Tim Pengembang
| No | Nama | NIM |
|----|------|-----|
| 1 | [Nama Anggota 1] | [NIM] |
| 2 | [Nama Anggota 2] | [NIM] |
| 3 | [Nama Anggota 3] | [NIM] |

## Deskripsi Program
Program ini adalah sistem manajemen gudang yang dibuat menggunakan bahasa pemrograman C++. Sistem ini memungkinkan pengguna untuk melakukan operasi manajemen barang gudang termasuk menambah barang, menampilkan stok, mengeluarkan barang, dan pencarian data barang.

## Rekomendasi Perbaikan Program

### 1. **Penggantian Vector dengan Array Dinamis**
Mengganti penggunaan `vector<Barang> gudang` dengan implementasi array dinamis untuk memenuhi requirement program. Implementasi ini akan menggunakan array biasa dengan pengelolaan ukuran array secara manual, sehingga tetap mempertahankan fleksibilitas penyimpanan data tanpa ketergantungan pada STL container.

### 2. **Sistem Autentikasi Dinamis dengan Database File**
Mengganti sistem login statis hardcoded dengan sistem yang membaca data user dari file eksternal (users.txt atau users.csv). Implementasi ini memungkinkan penambahan, penghapusan, dan modifikasi user tanpa perlu mengubah source code. Sistem akan mendukup berbagai level akses user dan menyediakan fleksibilitas dalam manajemen akun pengguna.

### 3. **Sistem Persistensi Data dengan File CSV/TXT**
Implementasi penyimpanan data barang ke file eksternal (barang.csv) untuk mempertahankan data setelah program ditutup. Sistem akan dilengkapi dengan fitur auto-save saat keluar program dan auto-load saat program dimulai. Format CSV dipilih untuk kompatibilitas dengan aplikasi spreadsheet dan kemudahan dalam analisis data lebih lanjut.

### 4. **Validasi Input Kontekstual dan Sanitasi Data**
Menerapkan validasi input yang sesuai dengan konteks masing-masing field untuk mencegah input karakter tidak valid seperti yang terlihat pada contoh data (nama: !@#$%^&*(, jumlah: !@#$%^&). Validasi akan mencakup:
- Nama Barang: hanya huruf, angka, dan spasi, maksimal 50 karakter
- Jumlah: hanya angka positif (integer)
- Lokasi: dipilih dari array lokasi yang telah ditentukan menggunakan input angka
- ID Barang: auto-generated dengan format unik

### 5. **Implementasi Array Lokasi Penyimpanan dengan Input Numerik**
Mengganti input lokasi berbentuk text dengan sistem pemilihan lokasi menggunakan array lokasi yang telah ditetapkan. User akan memilih lokasi berdasarkan nomor pilihan, sehingga memastikan konsistensi dan validitas data lokasi penyimpanan. Contoh implementasi:
```
Pilih Lokasi Penyimpanan:
1. Rak A-01
2. Rak A-02  
3. Rak B-01
4. Rak B-02
5. Gudang Utama
Pilihan (1-5): 
```

### 6. **Refactor Menu "Tambah Barang" menjadi "Barang Masuk"**
Mengubah terminologi dan fungsionalitas dari "Tambah Barang" menjadi "Barang Masuk" untuk lebih mencerminkan proses bisnis gudang yang sebenarnya. Fitur ini akan mencatat transaksi barang masuk dengan informasi tambahan seperti tanggal masuk, supplier, dan nomor dokumen.

### 7. **Fitur Pencarian Barang Berdasarkan ID**
Implementasi menu pencarian barang berdasarkan ID untuk menampilkan detail satu barang secara spesifik. Fitur ini akan memungkinkan user untuk mencari dan melihat informasi lengkap barang berdasarkan ID unik yang diberikan sistem.

### 8. **Fitur Pencarian Barang Berdasarkan Nama**
Implementasi menu pencarian barang berdasarkan nama dengan dukungan pencarian partial dan multiple results. Jika ditemukan beberapa barang dengan nama yang sama atau mirip, semua hasil akan ditampilkan dalam list untuk memberikan pilihan kepada user.

### 9. **Implementasi Clear Screen (cls)**
Menambahkan fungsi clear screen menggunakan `system("cls")` di setiap perpindahan menu untuk meningkatkan user experience dan menjaga tampilan interface tetap bersih dan terorganisir.

### 10. **Perbaikan Fungsi Keluarkan Barang**
Memperbaiki validasi input pada fungsi keluarkan barang untuk mencegah input karakter non-numerik pada field jumlah. Implementasi validasi yang lebih ketat akan memastikan data yang diproses sesuai dengan tipe data yang diharapkan dan mencegah error saat pemrosesan data.

### 11. **Fitur Update Data Barang**
Menambahkan fitur update/edit data barang yang memungkinkan user untuk mengubah informasi barang yang sudah ada, termasuk nama, jumlah, dan lokasi penyimpanan. Fitur ini penting untuk maintenance data dan koreksi informasi yang salah.

## Struktur File Program
```
kelompok-7/
├── kelompok-7.cpp          # File source code utama
├── kelompok-7.exe          # File executable
├── README.md               # Dokumentasi program
├── users.txt               # Database user login
├── barang.csv              # Database data barang
└── reports/                # Folder untuk laporan dan export data
    └── export_barang.txt
```

## Teknologi yang Digunakan
- Bahasa Pemrograman: C++
- Compiler: GCC/MinGW
- Format Data: CSV/TXT files
- Platform: Windows

## Menu Program
1. **Barang Masuk** - Menambahkan barang baru ke gudang
2. **Tampilkan Stok** - Menampilkan semua barang dalam gudang
3. **Keluarkan Barang** - Mengurangi stok barang dari gudang
4. **Pencarian Barang (ID)** - Mencari barang berdasarkan ID
5. **Pencarian Barang (Nama)** - Mencari barang berdasarkan nama
6. **Update Data Barang** - Mengubah informasi barang
7. **Keluar** - Keluar dari program

---
**Catatan**: Dokumen ini merupakan panduan pengembangan untuk meningkatkan fungsionalitas dan kualitas sistem manajemen gudang.
