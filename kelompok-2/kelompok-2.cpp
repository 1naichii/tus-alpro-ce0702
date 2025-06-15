#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

const int harga_paket1 = 100000;
const int harga_paket2 = 150000;
const int harga_paket3 = 180000;
const int harga_paket4 = 250000;
const int htm = 10000;

void welcome(string nama)
{
    cout << "Hi " << nama << " :)"<< endl;
    cout << endl;
    cout << "                      \033[46;30mSelamat Datang di Program Reservasi Tiket Wisata dan Penyewaan Tenda\033[0m" << endl;
    cout << endl;
    cout << "HTM (per orang) : Rp10.000" << endl;
    cout << endl;
    cout << "                         Silahkan pilih paket yang anda inginkan : " << endl;
    cout << endl;
    cout << "1. Paket 1 - Lite Camp" << endl;
    cout << "Kapasitas Tenda: Maks. 5 orang\nFasilitas:\nTenda standar\nMatras gulung (per orang)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
    cout << "Harga : Rp" << harga_paket1 << endl;
    cout << endl;
    cout << "2. Paket 2 - Plus Camp" << endl;
    cout << "Kapasistas Tenda: Maks. 8 orang\nFasilitas:\nTenda standar\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda\nApi unggun bersama\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
    cout << "Harga : Rp" << harga_paket2 << endl;
    cout << endl;
    cout << "3. Paket 3 - Max Camp" << endl;
    cout << "Kapasistas Tenda: Maks. 6 orang\nFasilitas:\nTenda besar (lebih luas, lebih tinggi)\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda dan colokan listrik portabel\nApi unggun bersama\nSnack malam + minuman hangat (kopi/teh)\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
    cout << "Harga : Rp" << harga_paket3 << endl;
    cout << endl;
    cout << "4. Paket 4 - Prime Camp" << endl;
    cout << "Kapasistas Tenda: Maks. 10 orang\nFasilitas:\nTenda eksklusif (ukuran besar, bahan tebal, tahan air)\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda dan colokan listrik\nApi unggun bersama\nSnack malam + minuman hangat (kopi/teh)\nAir mineral (1 botol per orang)\nAkses toilet dan kamar mandi khusus paket Prime Camp\nLokasi bebas pilih (selama tersedia)" << endl;
    cout << "Harga : Rp" << harga_paket4 << endl;
}

void paket(int pilih)
{
    if (pilih == 1){
        cout << "Anda memilih paket 1 - Lite Camp" << endl;
        cout << "Kapasitas Tenda: Maks. 5 orang\nFasilitas:\nTenda Standar\nMatras Gulung (per orang)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu Tenda\nAKses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket1 << endl;
    }
    else if (pilih == 2){
        cout << "Anda memilih paket 2 - Plus Camp" << endl;
        cout << "Kapasistas Tenda: Maks. 8 orang\nFasilitas:\nTenda standar\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda\nApi unggun bersama\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket2 << endl;
    }
    else if (pilih == 3){
        cout << "Anda memilih paket 3 - Max Camp" << endl;
        cout << "Kapasistas Tenda: Maks. 6 orang\nFasilitas:\nTenda besar (lebih luas, lebih tinggi)\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda dan colokan listrik portabel\nApi unggun bersama\nSnack malam + minuman hangat (kopi/teh)\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket3 << endl;
    }
    else if (pilih == 4){
        cout << "Anda memilih paket 4 - Prime Camp" << endl;
        cout << "Kapasistas Tenda: Maks. 10 orang\nFasilitas:\nTenda eksklusif (ukuran besar, bahan tebal, tahan air)\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda dan colokan listrik\nApi unggun bersama\nSnack malam + minuman hangat (kopi/teh)\nAir mineral (1 botol per orang)\nAkses toilet dan kamar mandi khusus paket Prime Camp\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket4 << endl;
    }
}

void penjumlahan(int pilih, int orang)
{
    //int paket1, paket2;

    if (pilih == 1){
        cout << "Anda memilih paket 1 - Lite Camp" << endl;
        cout << "Kapasitas Tenda: Maks. 5 orang\nFasilitas:\nTenda Standar\nMatras Gulung (per orang)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu Tenda\nAKses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket1 << endl;
        cout << "Jumlah orang : " << orang << endl;
        cout << "Total Harga Paket + HTM : Rp" << htm * orang + harga_paket1<< endl;
    }
    else if (pilih == 2){
        cout << "Anda memilih paket 2 - Plus Camp" << endl;
        cout << "Kapasistas Tenda: Maks. 8 orang\nFasilitas:\nTenda standar\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda\nApi unggun bersama\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket2 << endl;
        cout << "Jumlah orang : " << orang << endl;
        cout << "Total Harga Paket + HTM : Rp" << htm * orang + harga_paket2 << endl;
    }
    else if (pilih == 3){
        cout << "Anda memilih paket 3 - Max Camp" << endl;
        cout << "Kapasistas Tenda: Maks. 6 orang\nFasilitas:\nTenda besar (lebih luas, lebih tinggi)\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda dan colokan listrik portabel\nApi unggun bersama\nSnack malam + minuman hangat (kopi/teh)\nAkses toilet umum\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket3 << endl;
        cout << "Jumlah orang : " << orang << endl;
        cout << "Total Harga Paket + HTM : Rp" << htm * orang + harga_paket3 << endl;
    }
    else if (pilih == 4){
        cout << "Anda memilih paket 4 - Prime Camp" << endl;
        cout << "Kapasistas Tenda: Maks. 10 orang\nFasilitas:\nTenda eksklusif (ukuran besar, bahan tebal, tahan air)\nMatras ukuran penuh (1 per tenda)\nSleeping bag\nLayanan pasang dan bongkar tenda\nLampu tenda dan colokan listrik\nApi unggun bersama\nSnack malam + minuman hangat (kopi/teh)\nAir mineral (1 botol per orang)\nAkses toilet dan kamar mandi khusus paket Prime Camp\nLokasi bebas pilih (selama tersedia)" << endl;
        cout << "Harga : Rp" << harga_paket4 << endl;
        cout << "Jumlah orang : " << orang << endl;
        cout << "Total Harga Paket + HTM : Rp" << htm * orang + harga_paket4 << endl;
    }
}

void pembayaran(int pilih, int orang)
{
    if (pilih == 1){
        cout << "                      \033[46;30mPembayaran\033[0m" << endl;
        cout << endl;
        cout << "Transfer" << endl;
        cout << "BNI : 9173845619" << endl;
        cout << "BCA : 1234567890" << endl;
        cout << "Atas Nama : Fahmi Nuril Hasani" << endl;
        cout << "Total Harga Paket + HTM yang harus dibayar : Rp" << htm * orang + harga_paket1 << endl;
    }
    else if (pilih == 2){
        cout << "                      \033[46;30mPembayaran\033[0m" << endl;
        cout << endl;
        cout << "Transfer" << endl;
        cout << "BNI : 9173845619" << endl;
        cout << "BCA : 1234567890" << endl;
        cout << "Atas Nama : Fahmi Nuril Hasani" << endl;
        cout << "Total Harga Paket + HTM yang harus dibayar : Rp" << htm * orang + harga_paket2 << endl;
    }
    else if (pilih == 3){
        cout << "                      \033[46;30mPembayaran\033[0m" << endl;
        cout << endl;
        cout << "Transfer" << endl;
        cout << "BNI : 9173845619" << endl;
        cout << "BCA : 1234567890" << endl;
        cout << "Atas Nama : Fahmi Nuril Hasani" << endl;
        cout << "Total Harga Paket + HTM yang harus dibayar : Rp" << htm * orang + harga_paket3 << endl;
    }
    else if (pilih == 4){
        cout << "                      \033[46;30mPembayaran\033[0m" << endl;
        cout << endl; 
        cout << "Transfer" << endl;
        cout << "BNI : 9173845619" << endl;
        cout << "BCA : 1234567890" << endl;
        cout << "Atas Nama : Fahmi Nuril Hasani" << endl;
        cout << "Total Harga Paket + HTM yang harus dibayar : Rp" << htm * orang + harga_paket4 << endl;
    }
}

int main()
{
    string nama, kondisi;
    int pilih, orang;

    cout << "Masukan nama Anda : "; cin >> nama;
    system("cls");
start:
    welcome(nama);
    cout << "\nPilih paket : "; cin >> pilih;
    system("cls");

    paket(pilih);
    cout << endl;
    cout << "Ingin mengubahnya (y/n) : "; cin >> kondisi;
    cout << endl;
    if (kondisi == "y" || kondisi == "Y"){
        goto start;
    }
orang:
    cout << "Untuk berapa orang : "; cin >> orang; 
    system("cls");

    penjumlahan(pilih, orang);
    cout << endl;
    cout << "Ingin mengubah paket (y/n)" << endl;
    cout << "Ingin mengubah jumlah orang (t/n)" << endl;
    cin >> kondisi;
    cout << endl;
    if (kondisi == "y" || kondisi == "Y"){
        goto start;
    } 
    if(kondisi == "t" || kondisi == "T"){
        goto orang;
    }
    system("cls");

    pembayaran(pilih, orang);
    cout << "Membayar... (y/n)" << endl;
    cin >> kondisi; 
    if (kondisi == "y" || kondisi == "Y"){
        system("cls");
        cout << "                      \033[46;30mPembayaran Berhasil!\033[0m" << endl;
        cout << endl;
        time_t timestamp;
        time(&timestamp);
        cout << "Nota : " << nama << "                             " << "Tanggal : "  << ctime(&timestamp) << endl;
        cout << "Nama                Jml                  Harga                     Total" << endl;
        
        if (pilih == 1){
            cout << "HTM                  " << orang << "                   " << htm <<"                     " << orang * htm << endl;
            cout << "Lite Camp            1                  " << harga_paket1 << "                    " <<harga_paket1 << endl;
            cout << "                                                     Grand Total: " << htm * orang + harga_paket1 << endl;
            cout << endl;
            cout << "                         \033[46;30mTerima Kasih\033[0m" << endl;
        }
        else if (pilih == 2){
            cout << "HTM                  " << orang << "                   " << htm <<"                     " << orang * htm << endl;
            cout << "Plus Camp            1                  " << harga_paket2 << "                    " <<harga_paket2 << endl;
            cout << "                                                     Grand Total: " << htm * orang + harga_paket2 << endl;
            cout << endl;
            cout << "                         \033[46;30mTerima Kasih\033[0m" << endl;       
        }
        else if (pilih == 3){
            cout << "HTM                  " << orang << "                   " << htm <<"                     " << orang * htm << endl;
            cout << "Max Camp             1                  " << harga_paket3 << "                    " <<harga_paket3 << endl;
            cout << "                                                     Grand Total: " << htm * orang + harga_paket3 << endl;
            cout << endl;
            cout << "                         \033[46;30mTerima Kasih\033[0m" << endl;
        }
        else if (pilih == 4){
            cout << "HTM                  " << orang << "                   " << htm <<"                     " << orang * htm << endl;
            cout << "Prime Camp           1                  " << harga_paket4 << "                    " <<harga_paket4 << endl;
            cout << "                                                     Grand Total: " << htm * orang + harga_paket4 << endl;
            cout << endl;
            cout << "                         \033[46;30mTerima Kasih\033[0m" << endl;
        }
    }
 
    cin.ignore();
    cin.get();
    return 0;
}
