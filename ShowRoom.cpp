#include <iostream>
#include <string>
using namespace std;

// Uas Algoritma
// gunakan for / while
// pake if else
// pake array
// menggunakan konsep CRUD
// ada 5 pilihan
// 1. tambahkan data mobil
// 2. menampilkan list mobil
// 3. update data mobil
// 4. hapus data mobil
// 5. exit 


int main () {

    string nama [100], merek [100];
    int harga [100];
    int jumlah = 0;
    int pilihan;


    while (true){
        cout << "SELAMAT DATANG DI PROGRAM SHOWROOM" <<endl;
        cout << "1. TAMBAHKAN DATA MOBIL" <<endl;
        cout << "2. TAMPILKAN LIST DATA MOBIL" <<endl;
        cout << "3. UPDATE DATA MOBIL" <<endl;
        cout << "4. HAPUS DATA MOBIL" <<endl;
        cout << "5. EXIT" <<endl;
        cout << "MASUKAN PILIHAN = " ;
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "MASUKAN NAMA MOBIL = ";
            cin >> nama[jumlah];
            cout << "MASUKAN MEREK MOBIL = ";
            cin >> merek[jumlah];
            cout << "MASUKAN HARGA MOBIL = ";
            cin >> merek[jumlah];
            jumlah++;

            cout << "\nDATA BERHASIL DI TAMBAHKAN !" << endl;
        } else if (pilihan == 2) {
            if (jumlah == 0){
                cout << "BELUM ADA DATA YANG DI MASUKAN !" <<endl;
            }else {
                cout << "====DAFTAR MOBIL===="<< endl;
                for (int i = 0; i < jumlah ; i++){
                    cout << i + 1 << ". "
                         << nama[i] << " | "
                         << merek[i] << " |Rp."
                         << harga [i]<< endl;

                }
            }
        } else if (pilihan == 3) {
                 if (jumlah == 0){
                cout << "BELUM ADA DATA YANG DI MASUKAN !" <<endl;
            }else {
                cout << "====DAFTAR MOBIL===="<< endl;
                for (int i = 0; i < jumlah ; i++){
                    cout << i + 1 << ". "
                         << nama[i] << " | "
                         << merek[i] << " |Rp."
                         << harga [i]<< endl;

                }
                int index;
                cout << "MASUKAN NOMOR MOBIL YANG INGIN DI UPDATE = ";
                cin >>index;
                
                if (index > 0 && index <= jumlah){
                    cout << "MASUKAN NAMA MOBIL BARU = ";
                    cin >> nama [index - 1];
                     cout << "MASUKAN MEREK MOBIL BARU = ";
                    cin >> merek [index - 1];
                     cout << "MASUKAN HARGA MOBIL BARU = ";
                    cin >> harga [index - 1];
                    cout << "DATA BERHASIL DI UPDATE! " << endl;
                }
            }
        } else if (pilihan == 4) {
                if (jumlah == 0){
                cout << "BELUM ADA DATA YANG DI MASUKAN !" <<endl;
            }else {
                cout << "====DAFTAR MOBIL===="<< endl;
                for (int i = 0; i < jumlah ; i++){
                    cout << i + 1 << ". "
                         << nama[i] << " | "
                         << merek[i] << " |Rp."
                         << harga [i]<< endl;

                }
                int index;
                cout << "MASUKAN NOMOR MOBIL YANG INGIN DI UPDATE = ";
                cin >>index;


                if (index > 0 && index <= jumlah){
                    for (int i = index -1 ; i <= jumlah -1; i++){
                        nama [i] = nama [i + 1];
                        merek [i] = merek [i + 1];
                        harga [i] = harga [i + 1];
                        cout << "DATA BERHASIL DI HAPUS!" <<endl;
                    }
                    
                }
                jumlah --;
            }
        } else if (pilihan == 5){
        cout << "TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI" <<endl ;
        break;
            }


    }

    return 0;
}