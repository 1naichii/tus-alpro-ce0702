# Sistem Pendaftaran Driver Ojek Online WUTJEK

## Tim Pengembang
| No | Nama | NIM |
|----|------|-----|
| 1 | Razan Fadhlurrahman Putra Zalman | 101102400041 |
| 2 | Ria Ramadhani | 101102400031 |
| 3 | Roberto Josua Situmorang | 101102400025 |

## Deskripsi Program
Program ini adalah sistem pendaftaran driver ojek online WUTJEK yang dibuat menggunakan bahasa pemrograman C++. Sistem ini memungkinkan calon driver untuk mendaftar sebagai driver ojek online dan admin untuk mengelola data pendaftar dengan operasi CRUD (Create, Read, Update, Delete) yang lengkap. Program ini mengimplementasikan validasi dokumen sesuai standar KTP, SIM, dan STNK untuk memastikan kelengkapan administrasi driver.

## Rekomendasi Perbaikan Program

### 1. **Implementasi CRUD Lengkap untuk Manajemen Pendaftar**
Mengembangkan operasi CRUD yang komprehensif untuk sistem pendaftaran driver ojek online:
- **Create**: Registrasi pendaftar baru dengan ID unik auto-increment
- **Read**: Tampilkan semua pendaftar dalam format tabel yang terstruktur
- **Update**: Modifikasi data pendaftar (status, dokumen, informasi personal)
- **Delete**: Hapus data pendaftar dengan konfirmasi (soft delete)
- Pencarian pendaftar berdasarkan ID untuk kemudahan tracking

### 2. **Validasi Input Dokumen Administrasi Sesuai KTP, SIM, STNK**
Menerapkan validasi input yang sesuai dengan standar dokumen resmi Indonesia untuk pendaftaran ojek online:
- **NIK (KTP)**: Validasi 16 digit angka sesuai format KTP Indonesia
- **Nomor SIM**: Validasi 12 digit angka sesuai format SIM Indonesia
- **Nomor STNK**: Validasi format alfanumerik sesuai standar STNK
- **Nama**: Hanya huruf dan spasi, minimal 3 karakter, maksimal 50 karakter
- **Nomor HP**: Format Indonesia (08xxxxxxxxx), 10-15 digit
- **Alamat**: Validasi karakter yang diperbolehkan dan panjang maksimal
- **Umur**: Minimal 18 tahun untuk driver ojek online
- **Berat Badan**: Range yang masuk akal (40-150 kg) untuk rekomendasi motor

### 3. **Sistem Dual-Role dengan Autentikasi Admin**
Mengimplementasikan sistem yang mendukung dua jenis pengguna dengan tingkat akses berbeda:
- **Pendaftar**: Dapat mendaftar sebagai driver baru dan cek status pendaftaran
- **Admin**: Memerlukan login untuk mengakses fitur manajemen CRUD
- Database admin tersimpan dalam file `admin.txt` dengan enkripsi sederhana
- Sistem autentikasi yang aman dengan username dan password
- Session management untuk mencegah akses tidak sah

### 4. **Database Persistence dengan File TXT/CSV**
Implementasi penyimpanan data permanen menggunakan file eksternal untuk persistensi data:
- `admin.txt`: Database kredensial admin dengan format username|password
- `pendaftar.csv`: Database lengkap data pendaftar dengan format CSV
- Auto-save setiap perubahan data untuk mencegah kehilangan informasi
- Auto-load saat program dimulai untuk kontinuitas data
- Backup otomatis berkala untuk keamanan data

### 5. **Fungsi Pencarian Pendaftar Berdasarkan ID**
Menambahkan sistem pencarian yang efisien untuk tracking pendaftar:
- Pencarian berdasarkan ID unik pendaftar
- Pencarian berdasarkan NIK untuk verifikasi dokumen
- Pencarian berdasarkan nama dengan partial matching
- Display detail lengkap pendaftar dalam format yang rapi
- Status tracking (Pending, Approved, Rejected, Under Review)

### 6. **Sistem ID Unik untuk Setiap Pendaftar**
Implementasi sistem tracking dan identifikasi yang robust:
- Auto-increment ID untuk setiap pendaftar baru
- Format ID: WUTJEK001, WUTJEK002, dst.
- Timestamp registrasi untuk tracking waktu pendaftaran
- Status workflow yang jelas (Pending → Under Review → Approved/Rejected)
- Reference number untuk komunikasi dengan pendaftar

### 7. **Implementasi Array dan Struktur Data Optimal**
Mengganti penggunaan struktur data yang tidak efisien dengan implementasi array:
- Menggunakan array fixed-size alih-alih vector untuk compliance requirement
- Struktur data terorganisir dengan struct untuk Pendaftar dan Admin
- Array untuk menyimpan data master (jenis motor, status, dll.)
- Manajemen memori yang efisien tanpa dynamic allocation

### 8. **Sistem Navigasi dengan Switch-Case**
Mengganti semua flow program dengan struktur kontrol yang proper:
- Switch-case untuk semua menu selection dan navigasi
- Nested menu system yang intuitive dan user-friendly
- Error handling yang comprehensive tanpa menggunakan goto
- Loop yang terstruktur untuk navigasi program
- Function-based programming untuk modularitas code

### 9. **User Interface (UI) yang Enhanced**
Memperbaiki tampilan antarmuka pengguna untuk pengalaman yang lebih baik:
- Box design dengan karakter ASCII untuk section headers
- Color coding untuk different types of messages (success, error, warning)
- Clear spacing, alignment, dan formatting yang konsisten
- Progress indicators untuk multi-step registration process
- Emoji dan icons untuk visual appeal dan clarity
- Loading animations untuk feedback user experience

### 10. **Validasi Komprehensif Input Data**
Implementasi sistem validasi yang robust untuk semua input:
- Real-time validation dengan feedback langsung ke user
- Range checking untuk data numerik (umur, berat badan)
- Format validation untuk dokumen resmi (KTP, SIM, STNK)
- Duplicate checking untuk mencegah registrasi ganda
- Data sanitization untuk mencegah input malicious

## Struktur File Program
```
kelompok-4/
├── kelompok-4.cpp          # File source code utama
├── kelompok-4.exe          # File executable
├── README.md               # Dokumentasi program
├── note.txt                # Catatan pengembangan
├── admin.txt               # Database kredensial admin
├── pendaftar.csv           # Database data pendaftar driver
└── reports/                # Folder untuk laporan dan export data
    └── driver_{id}_{nik}.txt
```

## Fitur Utama Program

### Pendaftar Features:
- 🏍️ Registrasi driver baru dengan validasi dokumen lengkap
- 📋 Input data sesuai KTP, SIM, STNK
- ⚖️ Sistem rekomendasi motor berdasarkan berat badan
- 📱 Validasi nomor HP dan dokumen administrasi
- 🔍 Cek status pendaftaran dengan ID atau NIK
- 📄 Print konfirmasi pendaftaran

### Admin Features:
- 🔐 Sistem login yang aman
- 📊 Lihat semua pendaftar (READ)
- ✏️ Update data pendaftar (UPDATE)
- 🗑️ Hapus data pendaftar (DELETE)
- 🔍 Pencarian berdasarkan ID pendaftar
- 📈 Dashboard dan statistik pendaftar
- ✅ Approve/Reject pendaftar
- 📋 Generate laporan pendaftar

## Kriteria Penerimaan Driver

### Persyaratan Umum:
- Usia minimal 18 tahun
- Memiliki KTP, SIM C, dan STNK yang valid
- Nomor HP aktif
- Berat badan sesuai dengan kategori motor

### Rekomendasi Motor:
| Berat Badan | Jenis Motor | Keterangan |
|-------------|-------------|------------|
| 50-65 kg | 125 CC | Motor ringan, efisien untuk jarak pendek |
| 66-75 kg | 150 CC | Motor sedang, cocok untuk berbagai kondisi |
| 76-100 kg | 500 CC | Motor besar, untuk driver berpengalaman |

### Status Pendaftaran:
- **Pending**: Baru mendaftar, menunggu verifikasi
- **Under Review**: Sedang dalam proses review dokumen
- **Approved**: Diterima sebagai driver WUTJEK
- **Rejected**: Ditolak karena tidak memenuhi kriteria

## Teknologi yang Digunakan
- Bahasa Pemrograman: C++
- Compiler: GCC/MinGW
- Format Data: CSV/TXT files
- Platform: Windows
- File Handling: iostream, fstream, iomanip
- Data Structure: Array, Struct

## Cara Menjalankan Program
1. Compile source code: `g++ kelompok-4.cpp -o kelompok-4.exe`
2. Jalankan executable: `./kelompok-4.exe`
3. Pilih role (Pendaftar/Admin)
4. Ikuti menu yang tersedia

## Default Admin Credentials
- Username: `admin`
- Password: `wutjek123`

## Flow Program

### For Pendaftar:
```
Menu Utama → Daftar Driver → Input Data KTP/SIM/STNK → 
Validasi Data → Rekomendasi Motor → Konfirmasi → 
Pendaftaran Berhasil
```

### For Admin:
```
Menu Utama → Login Admin → Dashboard Admin → 
Pilih Operasi CRUD → Kelola Data Pendaftar → 
Generate Report (Optional)
```

---
**Catatan**: Dokumen ini merupakan panduan pengembangan untuk meningkatkan fungsionalitas dan kualitas sistem pendaftaran driver ojek online WUTJEK sesuai dengan requirements yang tercantum dalam note.txt.
