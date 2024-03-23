#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

//Standard Library C++
using namespace std;

struct User {
    string nama;
    string nim;
};

struct Hewan {
    string nama;
    char umur[10];
    float berat;
    int harga;
};

struct DataHewan {
    Hewan sapi[5];
    Hewan kambing[5];
};

bool login(User& user) {
    const int maxAttempts = 3;
    int attempts = 0;

    const User correctUser = {"muhammad agill firmansyah", "2309106018"};

    while (attempts < maxAttempts) {
        cout << "Masukkan Nama: ";
        getline(cin, user.nama);

        cout << "Masukkan NIM: ";
        getline(cin, user.nim);

        if (user.nama == correctUser.nama && user.nim == correctUser.nim) {
            cout << "Login berhasil!\n";
            return true;
        } else {
            cout << "Login gagal. Silakan coba lagi.\n";
            attempts++;
        }
    }

    cout << "Anda telah gagal login sebanyak 3 kali. Program berhenti.\n";
    return false;
}

//Prosedur atau Fungsi untuk menampilkan tampilan awal program
void intro()
{
    cout<<"=========================================================================="<<endl;
	cout<<"                      Program Pendataan Hewan Kurban                      "<<endl;
    cout<<"=========================================================================="<<endl;
    cout<<"                 Silahkan Isi Data Hewan Terlebih Dahulu !                "<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan hewan
void pilih_hewan()
{
    cout<<"[A] Sapi"<<endl;
    cout<<"[B] Kambing"<<endl;
    cout<<"\nMasukkan dengan Huruf Kapital !"<<endl;
}

// Deklarasi nested struct
DataHewan dataHewan;

//Deklarasi Array di dalam Struct pada data Sapi dan Kambing (Variabel Global)
struct Hewan Sapi[5];
struct Hewan Kambing[5];

//Prosedur atau Fungsi untuk menampilkan menu "Isi Data" pada "Sapi"
void isi_data_sapi()
{
    //Pendeklarasian
    //i = indeks
    int i = 0;
    
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                                 Data Sapi                                "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    //Perulangan dengan menggunakan for
    for (i = 0; i < 3; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : ";

        //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
        //pada program agar tidak terjadi hambatan pada saat dipanggil
        cin>>Sapi[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[i].harga;fflush(stdin);
        cout<<endl;
    }
}

//Prosedur atau Fungsi untuk menampilkan menu "Isi Data" pada "Kambing"
void isi_data_kambing()
{
    //Pendeklarasian
    //i = indeks
    int i = 0;

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                                Data Kambing                              "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    
    //Perulangan dengan menggunakan for
    for (i = 0; i < 3; i++)
    {
        cout<<"Kambing Nomor "<<i+1<<endl;
        cout<<"Nama     : ";

        //fflush(stdin) digunakan untuk menyimpan data yang telah diinputkan oleh user
        //pada program agar tidak terjadi hambatan pada saat dipanggil
        cin>>Kambing[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[i].harga;fflush(stdin);
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
    cout<<"                          Data Berhasil Tersimpan                         "<<endl;
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";

    //Untuk memberi jeda
    getch();

    //Untuk membersihkan atau menghapus hasil sebelumnya agar tidak penuh 
    //pada layar windows
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu "Tampil Data" pada "Sapi"
void tampil_data_sapi()
{
    //Pendeklarasian
    //i = indeks
    int i = 0;

    //Perulangan dengan menggunakan for
    for (i = 0; i < 5; i++)
    {
        cout<<"Sapi Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Sapi[i].nama<<endl;
        cout<<"Umur     : "<<Sapi[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Sapi[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Sapi[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu "Tampil Data" pada "Kambing"
void tampil_data_kambing()
{
    //Pendeklarasian
    //i = indeks
    int i = 0;

    //Perulangan dengan menggunakan for
    for (i = 0; i < 5; i++)
    {
        cout<<"Kambing Nomor "<<i+1<<endl;
        cout<<"Nama     : "<<Kambing[i].nama<<endl;
        cout<<"Umur     : "<<Kambing[i].umur<<" Tahun"<<endl;
        cout<<"Berat    : "<<Kambing[i].berat<<" Kg"<<endl;
        cout<<"Harga    : Rp. "<<Kambing[i].harga<<endl;
        cout<<endl;
    }
    cout<<"=========================================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu "Tampil Data" secara keseluruhan pada Sapi dan Kambing
void tampil_data()
{
    //Pendeklarasian
    //i = indeks
    int i = 0;

    //pilih = pilihan hewan apa yang diinputkan oleh user
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin ditampilkan"<<endl;

    //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    pilih_hewan();

    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else dalam mengelompokkan hewan apa yang ingin ditampilkan datanya oleh
    //user
    if (pilih == "A")
    {
        tampil_data_sapi();
    }
    else if (pilih == "B")
    {
        tampil_data_kambing();
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia"<<endl;
        cout<<"=========================================================================="<<endl;
    }
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu "Tambah Data"
void tambah_data()
{
    //Pendeklarasian
    //i = indeks
    int i = 3;

    //pilih = pilihan hewan apa yang diinputkan oleh user
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin ditambahkan"<<endl;

    //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    pilih_hewan();
    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else dalam mengelompokkan hewan apa yang ingin ditampilkan datanya oleh
    //user
    if (pilih == "A")
    {
        cout<<"Nama     : ";
        cin>>Sapi[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                         Data Berhasil Ditambahkan                        "<<endl;
    }
    else if (pilih == "B")
    {
        cout<<"Nama     : ";
        cin>>Kambing[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                         Data Berhasil Ditambahkan                        "<<endl;
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia";
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu "Edit Data"
void edit_data()
{
    //Pendeklarasian
    //i = indeks
    int indeks, i;

    //pilih = pilihan hewan apa yang diinputkan oleh user
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin diperbarui"<<endl;

    //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    pilih_hewan();
    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else dalam mengelompokkan hewan apa yang ingin ditampilkan datanya oleh
    //user
    if (pilih == "A")
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data_sapi
        tampil_data_sapi();
        cout<<"Masukkan Nomor Sapi yang ingin diperbarui : ";
        cin>>indeks;
        cout<<"=========================================================================="<<endl;

        //Perhitungan indeks agar sesuai dengan indeks yang ada pada data array
        //(dimulai dengan angka 0 bukan 1)
        i = indeks - 1;

        cout<<"Nama     : ";
        cin>>Sapi[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Sapi[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Sapi[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Sapi[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Diperbarui                        "<<endl;
    }
    else if (pilih == "B")
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data_sapi
        tampil_data_kambing();
        cout<<"Masukkan Nomor Kambing yang ingin diperbarui : ";
        cin>>indeks;
        cout<<"=========================================================================="<<endl;

        //Perhitungan indeks agar sesuai dengan indeks yang ada pada data array
        //(dimulai dengan angka 0 bukan 1)
        i = indeks - 1;

        cout<<"Nama     : ";
        cin>>Kambing[i].nama;fflush(stdin);
        cout<<"Umur     : ";
        cin>>Kambing[i].umur;fflush(stdin);
        cout<<"Berat    : ";
        cin>>Kambing[i].berat;fflush(stdin);
        cout<<"Harga    : ";
        cin>>Kambing[i].harga;fflush(stdin);
        cout<<"=========================================================================="<<endl;
        cout<<"                          Data Berhasil Diperbarui                        "<<endl;
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia";
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu "Hapus Data"
void hapus_data()
{
    //Pendeklarasian
    //hapus = inputan user ingin menghapus indeks nomor berapa
    //i = indeks
    int hapus, i;

    //pilih = pilihan hewan apa yang diinputkan oleh user
    string pilih;

    cout<<"Silahkan Pilih Data Hewan yang ingin dihapus"<<endl;

    //Pemanggilan Fungsi atau Prosedur void pilih_hewan
    pilih_hewan();
    cout<<"Masukkan Pilihan Data [A/B] : ";
    cin>>pilih;
    cout<<"=========================================================================="<<endl;

    //Percabangan if else dalam mengelompokkan hewan apa yang ingin ditampilkan datanya oleh
    //user
    if (pilih == "A")
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data_sapi
        tampil_data_sapi();
        cout<<"Masukkan Nomor Sapi yang ingin dihapus : ";
        cin>>hapus;
        if (hapus < 6)
        {
            //Perulangan dengan menggunakan for
            for (i = hapus - 1; i < 4 ; i++)
            {
                Sapi[i] = Sapi [i + 1];fflush(stdin);
            }
            cout<<"=========================================================================="<<endl;
            cout<<"                            Data Berhasil Dihapus                         "<<endl;
        }
        else 
        {
            cout<<"Mohon Maaf Nomor Sapi yang dimasukkan Tidak Tersedia"<<endl;
        }
    }
    else if (pilih == "B")
    {
        //Pemanggilan Fungsi atau Prosedur void tampil_data_kambing
        tampil_data_kambing();
        cout<<"Masukkan Nomor Kambing yang ingin dihapus : ";
        cin>>hapus;
        if (hapus < 6)
        {
            //Perulangan dengan menggunakan for
            for (i = hapus - 1; i < 4 ; i++)
            {
                Kambing[i] = Kambing [i + 1];fflush(stdin);
            }
            cout<<"=========================================================================="<<endl;
            cout<<"                            Data Berhasil Dihapus                         "<<endl;
        }
        else 
        {
            cout<<"Mohon Maaf Nomor Kambing yang dimasukkan Tidak Tersedia"<<endl;
        }
    }
    else 
    {
        cout<<"Mohon Maaf Data Hewan yang Anda Pilih Tidak Tersedia";
    }
    cout<<"=========================================================================="<<endl;
    cout<<"Tekan Enter untuk Kembali ke Menu ";
    getch();
    system("cls");
}

//Prosedur atau Fungsi untuk menampilkan pilihan menu CRUD dan Exit
int pilih_menu() {
    int choice;
    cout<<"Silahkan Pilih Menu"<<endl;
    cout<<"[1] Menampilkan Data"<<endl;
    cout<<"[2] Menambahkan Data"<<endl;
    cout<<"[3] Mengedit Data"<<endl;
    cout<<"[4] Menghapus Data"<<endl;
    cout<<"[5] Keluar"<<endl;
    cout<<"\nMasukkan Pilihan Menu [1, 2, 3, 4, atau 5] : ";
    
    // Loop hingga input yang valid diterima
    while (!(cin >> choice) || cin.peek() != '\n' || choice < 1 || choice > 5) {
        cout << "Masukkan harus berupa angka bulat antara 1 hingga 5. Silakan coba lagi: ";
        cin.clear(); // Menghapus status error pada cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Menghapus input sebelumnya dari buffer
    }

    // Menghapus input yang tidak dibutuhkan dari buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return choice;
}

// Fungsi rekursif untuk menampilkan menu berulang
void pilih_menu_rekursif() {
    int choice = pilih_menu();
    switch (choice) {
        case 1:
            tampil_data();
            break;
        case 2:
            tambah_data();
            break;
        case 3:
            edit_data();
            break;
        case 4:
            hapus_data();
            break;
        case 5:
            cout << "Terima Kasih!" << endl;
            return; // Keluar dari rekursi
        default:
            cout << "Pilihan tidak valid. Silahkan pilih lagi.\n";
    }
    // Panggil rekursi untuk menampilkan menu lagi
    pilih_menu_rekursif();
}

int main()
{
     User currentUser;

    if (login(currentUser)) {

        cout << "Selamat datang, " << currentUser.nama << "!\n";
    //Pendeklarasian
    //jawab = Jawaban user terkait pilihan menu yang ingin dijalankan
    int jawab;

    //Pemanggilan Fungsi atau Prosedur intro
    intro();

    //Permanggilan Fungsi atau Prosedur isi_data_sapi
    isi_data_sapi();

    //Permanggilan Fungsi atau Prosedur isi_data_sapi
    isi_data_kambing();

    //Label yang digunakan sebagai tempat pengulangan menu ketika dipanggil dengan
    //menggunakan perintah goto
    kembali:

    // Memanggil fungsi rekursif untuk menampilkan menu
    pilih_menu_rekursif();
    }

    return 0;
}

