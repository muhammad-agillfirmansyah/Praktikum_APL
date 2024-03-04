#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Fungsi untuk mengonversi Rupiah ke mata uang lain
double rupiahKeMataUang(double rupiah, double kurs) {
    return rupiah / kurs;
}

// Fungsi untuk mengonversi mata uang lain ke Rupiah
double mataUangKeRupiah(double mataUang, double kurs) {
    return mataUang * kurs;
}

int main() {
    string nama, nim;
    int kesalahanLogin = 0;
    double rupiah, dollar, euro, yen;
    double kursDollar = 14200; // Kurs Dollar ke Rupiah
    double kursEuro = 16700; // Kurs Euro ke Rupiah
    double kursYen = 130; // Kurs Yen ke Rupiah

    // Input Nama dan Nim
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);

    // Login (maksimal 3 kali kesalahan)
   while (kesalahanLogin < 3) {
        string inputNama, inputNim;
        cout << "Masukkan Nama (untuk login): ";  
        getline(cin, inputNama);
        cout << "Masukkan Nim (untuk login): ";
        getline(cin, inputNim);
        if (inputNama == nama && inputNim == nim) {
            break;
        } else {
            cout << "Login gagal. Silakan coba lagi." << endl;
            kesalahanLogin++;
            if (kesalahanLogin == 3) {
                cout << "Anda telah gagal login sebanyak 3 kali. Anda Akan Keluar dari Program." << endl;
                return 0;
            }
        }
    }

    // Menu konversi mata uang
    int pilihan;
    do {
        cout << "\nMenu Konversi Mata Uang:" << endl;
        cout << "1. Rupiah ke Dollar, Euro, Yen" << endl;
        cout << "2. Dollar ke Rupiah, Euro, Yen" << endl;
        cout << "3. Euro ke Rupiah, Dollar, Yen" << endl;
        cout << "4. Yen ke Rupiah, Dollar, Euro" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah Rupiah: ";
                cin >> rupiah;
                dollar = rupiahKeMataUang(rupiah, kursDollar);
                euro = rupiahKeMataUang(rupiah, kursEuro);
                yen = rupiahKeMataUang(rupiah, kursYen);
                cout << fixed << setprecision(2);
                cout << "Hasil konversi:" << endl;
                cout << "Dollar: $" << dollar << endl;
                cout << "Euro: €" << euro << endl;
                cout << "Yen: ¥" << yen << endl;
                break;
            case 2:
                 cout << "Masukkan jumlah Dollar: ";
                cin >> dollar;
                rupiah = mataUangKeRupiah(dollar, kursDollar);
                euro = rupiahKeMataUang(rupiah, kursEuro);
                yen = rupiahKeMataUang(rupiah, kursYen);
                cout << fixed << setprecision(2);
                cout << "Hasil konversi:" << endl;
                cout << "Rupiah: Rp" << rupiah << endl;
                cout << "Euro: €" << euro << endl;
                cout << "Yen: ¥" << yen << endl;
                break;
            case 3:
                cout << "Masukkan jumlah Euro: ";
                cin >> euro;
                rupiah = mataUangKeRupiah(euro, kursEuro);
                dollar = rupiahKeMataUang(rupiah, kursDollar);
                yen = rupiahKeMataUang(rupiah, kursYen);
                cout << fixed << setprecision(2);
                cout << "Hasil konversi:" << endl;
                cout << "Rupiah: Rp" << rupiah << endl;
                cout << "Dollar: $" << dollar << endl;
                cout << "Yen: ¥" << yen << endl;
                break;
            case 4:
                cout << "Masukkan jumlah Yen: ";
                cin >> yen;
                rupiah = mataUangKeRupiah(yen, kursYen);
                dollar = rupiahKeMataUang(rupiah, kursDollar);
                euro = rupiahKeMataUang(rupiah, kursEuro);
                cout << fixed << setprecision(2);
                cout << "Hasil konversi:" << endl;
                cout << "Rupiah: Rp" << rupiah << endl;
                cout << "Dollar: $" << dollar << endl;
                cout << "Euro: €" << euro << endl;
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program konversi mata uang!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang benar." << endl;
        }
    } while (pilihan != 5);

    return 5;
}

