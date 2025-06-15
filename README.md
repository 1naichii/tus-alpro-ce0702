# Tugas Besar Algoritma Pemrograman
**Universitas Telkom Surabaya**

## Deskripsi
Repository ini berisi kumpulan tugas besar mata kuliah Algoritma Pemrograman yang mengimplementasikan sistem CRUD (Create, Read, Update, Delete) menggunakan bahasa pemrograman C++. Setiap kelompok mengembangkan aplikasi console dengan fokus pada penerapan konsep algoritma dan struktur data dasar.

## Informasi Kelas
- **Mata Kuliah**: Algoritma Pemrograman
- **Kelas**: CE-07-01
- **Universitas**: Telkom University Surabaya
- **Semester**: Genap 2024/2025

## Daftar Proyek Kelompok

### 📁 [Kelompok 2 - Sistem Reservasi Camping Wisata](./kelompok-2/)
**Tim Pengembang:**
- Roihan Adrio Hibban (101102400043)
- Fahmi Nuril Hasani (101102400024)
- M. Syawal Z (101102400017)

**Deskripsi:** Sistem reservasi camping wisata dengan fitur dual-role (Guest & Admin), CRUD lengkap untuk manajemen reservasi, validasi input, dan sistem booking code unik.

### 📁 [Kelompok 4 - Sistem Pendaftaran Driver Ojek Online WUTJEK](./kelompok-4/)
**Tim Pengembang:**
- Razan Fadhlurrahman Putra Zalman (101102400041)
- Ria Ramadhani (101102400031)
- Roberto Josua Situmorang (101102400025)

**Deskripsi:** Sistem pendaftaran driver ojek online dengan validasi dokumen KTP/SIM/STNK, rekomendasi motor berdasarkan berat badan, dan sistem approval admin.

### 📁 [Kelompok 7 - Sistem Manajemen Gudang](./kelompok-7/)
**Tim Pengembang:**
- Rhyan Elmanda (101102400002)
- Ardika Kalamulloh (101102400006)
- Fajar Aulia Rachman (101102400052)

**Deskripsi:** Sistem manajemen gudang dengan fitur CRUD untuk mengelola stok barang, lokasi penyimpanan, dan operasi keluar masuk barang di gudang.

## Fitur Utama Setiap Proyek

### Kelompok 2 - Camping Wisata:
- ✅ CRUD lengkap untuk reservasi
- ✅ Dual-role system (Guest & Admin)
- ✅ 4 paket camping (Lite, Plus, Max, Prime)
- ✅ Validasi input komprehensif
- ✅ Receipt printing system
- ✅ Database persistence (CSV/TXT)

### Kelompok 4 - Driver Ojek WUTJEK:
- ✅ CRUD untuk data pendaftar driver
- ✅ Validasi dokumen resmi (KTP, SIM, STNK)
- ✅ Sistem rekomendasi motor (125CC, 150CC, 500CC)
- ✅ Admin authentication system
- ✅ Status tracking pendaftaran
- ✅ Search berdasarkan ID

### Kelompok 7 - Manajemen Gudang:
- ✅ CRUD untuk manajemen stok barang
- ✅ Sistem login authentication
- ✅ Tambah barang dengan lokasi penyimpanan
- ✅ Monitoring stok real-time
- ✅ Operasi keluar masuk barang
- ✅ Validasi input dan error handling

## Cara Menjalankan Proyek
1. Navigate ke folder kelompok yang diinginkan
2. Compile file C++ menggunakan compiler (contoh: `g++ kelompok-x.cpp -o kelompok-x`)
3. Jalankan file executable yang dihasilkan
4. Ikuti instruksi yang muncul di console

## Struktur Direktori
```
tubes-alpro-2/
├── README.md                   # Dokumentasi utama
├── kelompok-2/                 # Sistem Reservasi Camping
│   ├── kelompok-2.cpp          # Source code
│   ├── kelompok-2.exe          # Executable
│   ├── README.md               # Dokumentasi kelompok
│   ├── note.txt                # Catatan pengembangan
│   ├── admin.txt               # Database admin
│   ├── reservasi.csv           # Database reservasi
│   └── receipts/               # Folder receipt
├── kelompok-4/                 # Sistem Driver Ojek WUTJEK
│   ├── kelompok-4.cpp          # Source code
│   ├── kelompok-4.exe          # Executable
│   ├── README.md               # Dokumentasi kelompok
│   ├── note.txt                # Catatan pengembangan
│   ├── admin.txt               # Database admin
│   ├── pendaftar.csv           # Database pendaftar
│   └── reports/                # Folder laporan
└── kelompok-7/                 # Sistem Manajemen Gudang
    ├── kelompok-7.cpp          # Source code
    ├── kelompok-7.exe          # Executable
    ├── README.md               # Dokumentasi kelompok
    ├── note.txt                # Catatan pengembangan
    └── data/                   # Database stok barang
```

## Requirements & Technologies
- **Bahasa Pemrograman**: C++
- **Compiler**: GCC/MinGW
- **Platform**: Windows
- **Data Storage**: File TXT/CSV
- **Features**: Full CRUD Operations

## Kontribusi
Setiap kelompok bertanggung jawab untuk mengembangkan dan mendokumentasikan proyek mereka masing-masing. Pastikan untuk mengikuti standar penulisan kode dan dokumentasi yang baik.

## Asisten Praktikum
- **Panji Aufa Ulinuha**
- **Irdani Sukma Ardihantoko**
- **Naufal Zakariya**
- **Kelas**: CE-07-01
- **Semester**: Genap 2024/2025

## Quick Start Guide
```bash
# Navigate to specific project
cd kelompok-[x]

# Compile and run (Windows)
g++ kelompok-[x].cpp -o kelompok-[x].exe
./kelompok-[x].exe

# Compile and run (Linux/Mac)
g++ kelompok-[x].cpp -o kelompok-[x]
./kelompok-[x]
```

## Validation & Best Practices
- ✅ Input validation untuk semua field
- ✅ Error handling yang komprehensif
- ✅ User-friendly interface dengan box design
- ✅ Database persistence untuk data continuity
- ✅ Modular programming dengan functions
- ✅ Dokumentasi code yang lengkap
- ✅ No memory leaks (array-based implementation)

---
**© 2025 - Algoritma Pemrograman CE-07-01, Telkom University Surabaya**  
*Repository ini dibuat untuk keperluan akademik mata kuliah Algoritma Pemrograman*
