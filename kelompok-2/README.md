# Sistem Reservasi Camping Wisata

## Tim Pengembang
| No | Nama | NIM |
|----|------|-----|
| 1 | Roihan Adrio Hibban | 101102400043 |
| 2 | Fahmi Nuril Hasani | 101102400024 |
| 3 | M. Syawal Z | 101102400017 |

## Deskripsi Program
Program ini adalah sistem reservasi camping wisata yang dibuat menggunakan bahasa pemrograman C++. Sistem ini memungkinkan pengguna (guest) untuk melakukan reservasi paket camping dan admin wisata untuk mengelola data reservasi dengan operasi CRUD (Create, Read, Update, Delete) yang lengkap.

## Rekomendasi Perbaikan Program

### 1. **Implementasi Validasi Input Komprehensif**
Menambahkan sistem validasi input yang robust untuk mencegah error dan memastikan data yang dimasukkan sesuai dengan format yang diharapkan. Validasi akan mencakup:
- Nama: hanya huruf dan spasi, maksimal 50 karakter
- Nomor telepon: format Indonesia (10-15 digit)
- Jumlah orang: sesuai kapasitas maksimal paket
- Pilihan menu: validasi range angka yang tersedia
- Input handling untuk mencegah crash saat input tidak valid

### 2. **Implementasi CRUD Lengkap untuk Sistem Reservasi**
Mengembangkan operasi CRUD yang komprehensif untuk manajemen data reservasi:
- **Create**: Buat reservasi baru dengan ID unik auto-increment
- **Read**: Tampilkan semua reservasi dalam format tabel yang rapi
- **Update**: Modifikasi data reservasi (status, jumlah orang, paket)
- **Delete**: Hapus reservasi dengan konfirmasi (soft delete)
- Pencarian reservasi berdasarkan booking code atau nama

### 3. **Sistem Dual-Role dengan Autentikasi Admin**
Mengimplementasikan sistem yang mendukung dua jenis pengguna:
- **Guest**: Dapat membuat reservasi dan cek status reservasi
- **Admin**: Memerlukan login untuk mengakses fitur manajemen CRUD
- Database admin tersimpan dalam file `admin.txt` atau `admin.csv`
- Sistem login dengan username dan password yang aman
- Level akses berbeda untuk guest dan admin

### 4. **Database Persistence dengan File CSV/TXT**
Implementasi penyimpanan data permanen menggunakan file eksternal:
- `admin.txt`: Database kredensial admin
- `reservasi.csv`: Database data reservasi dengan format CSV
- Auto-save setiap perubahan data
- Auto-load saat program dimulai
- Backup otomatis untuk mencegah kehilangan data

### 5. **Sistem Printout dan Receipt Professional**
Menambahkan fitur cetak nota reservasi yang professional:
- Generate booking code unik untuk setiap reservasi
- Printout receipt setelah pemesanan berhasil
- Format nota yang rapi dengan header, detail, dan footer
- Export receipt ke file text dalam folder `receipts/`
- Template nota dengan informasi lengkap (tanggal, booking code, rincian biaya)

### 6. **Flow Program yang Terstruktur untuk Guest**
Mengimplementasikan alur program yang jelas dan user-friendly:
```
Menu Utama → Buat Pesanan → Tampilkan Nama Paket → 
Tampilkan Rincian Paket → Konfirmasi → Pesanan Berhasil Dibuat
```
- Interface yang intuitif dengan menu hierarki
- Navigasi yang mudah dipahami
- Konfirmasi di setiap langkah penting
- Error handling yang informatif

### 7. **Implementasi Array dan Struktur Data Optimal**
Mengganti penggunaan struktur data yang tidak efisien:
- Menggunakan array alih-alih vector untuk compliance requirement
- Struktur data terorganisir dengan struct untuk Paket dan Reservasi
- Array 2 dimensi untuk data master paket camping
- Manajemen memori yang efisien tanpa dynamic allocation

### 8. **Sistem Navigasi dengan Switch-Case (Tanpa GOTO)**
Mengganti semua penggunaan GOTO dengan struktur kontrol yang proper:
- Switch-case untuk semua menu selection
- Loop yang terstruktur untuk navigasi program
- Function-based programming untuk modularitas
- Error handling yang elegant tanpa GOTO statements

### 9. **User Interface (UI) yang Enhanced**
Memperbaiki tampilan antarmuka pengguna:
- Box design dengan karakter ASCII
- Color coding untuk different sections
- Clear spacing dan alignment
- Progress indicators untuk multi-step processes
- Emoji dan icons untuk visual appeal

### 10. **Sistem ID Unik untuk Setiap Pesanan**
Implementasi sistem tracking reservasi:
- Auto-increment ID untuk setiap reservasi baru
- Booking code yang unik dan mudah diingat
- Timestamp untuk tracking waktu pemesanan
- Status tracking (Pending, Confirmed, Cancelled)

## Struktur File Program
```
kelompok-2/
├── kelompok-2.cpp          # File source code utama
├── kelompok-2.exe          # File executable
├── README.md               # Dokumentasi program
├── note.txt                # Catatan pengembangan
├── admin.txt               # Database kredensial admin
├── reservasi.csv           # Database data reservasi
└── receipts/               # Folder untuk file receipt reservasi
    └── receipt_{booking_code}.txt
```

## Fitur Utama Program

### Guest Features:
- 🏕️ Reservasi paket camping (Lite, Plus, Max, Prime Camp)
- 📋 Lihat detail paket dan fasilitas
- 💰 Kalkulasi biaya otomatis (HTM + Paket)
- 🎫 Generate booking code unik
- 📄 Print receipt reservasi
- 🔍 Cek status reservasi

### Admin Features:
- 🔐 Sistem login yang aman
- 📊 Lihat semua reservasi (READ)
- ✏️ Update data reservasi (UPDATE)
- 🗑️ Hapus reservasi (DELETE)
- 📈 Dashboard dan laporan reservasi
- 👥 Manajemen data guest

## Paket Camping Tersedia

| Paket | Harga | Kapasitas | Fasilitas Utama |
|-------|-------|-----------|-----------------|
| Lite Camp | Rp 100.000 | 5 orang | Tenda standar, matras gulung, sleeping bag |
| Plus Camp | Rp 150.000 | 8 orang | Tenda standar, matras penuh, api unggun |
| Max Camp | Rp 180.000 | 6 orang | Tenda besar, colokan listrik, snack malam |
| Prime Camp | Rp 250.000 | 10 orang | Tenda eksklusif, fasilitas premium, toilet khusus |

*HTM (Harga Tiket Masuk): Rp 10.000 per orang*

## Teknologi yang Digunakan
- Bahasa Pemrograman: C++
- Compiler: GCC/MinGW
- Format Data: CSV/TXT files
- Platform: Windows
- File Handling: iostream, fstream
- Data Structure: Array, Struct

## Cara Menjalankan Program
1. Compile source code: `g++ kelompok-2.cpp -o kelompok-2.exe`
2. Jalankan executable: `./kelompok-2.exe`
3. Pilih role (Guest/Admin)
4. Ikuti menu yang tersedia

## Default Admin Credentials
- Username: `admin`
- Password: `admin123`

---
**Catatan**: Dokumen ini merupakan panduan pengembangan untuk meningkatkan fungsionalitas dan kualitas sistem reservasi camping wisata sesuai dengan requirements yang tercantum dalam note.txt.
