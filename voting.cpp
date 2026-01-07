#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlahpemilih;
    int pilihan;

    string kandidat [3] = {"adit", "akhan" , "paro"};
    int suara [3] ={0, 0, 0};

    cout << "SISTEM VOTING SEDERHANA" <<endl;
    cout << "masukan jumlah pemilih = ";
    cin >> jumlahpemilih;

    for (int i = 1; i <=jumlahpemilih ;i++) {
        cout << "pemilihan ke-" << i << endl;
        cout << "1. " << kandidat[0] <<endl;
        cout <<"2. " << kandidat[1] <<endl;
        cout << "3. " << kandidat[2] << endl;
        cout << "Pilih kandidat (1 - 3) = ";
        cin >> pilihan;
        

        if (pilihan >=1 && pilihan <=3){
            suara [pilihan-1]++;
        }else {
            cout << "input salah silahkan di ulang !"<<endl;
        }
    }
    cout << "HASIL VOTING" <<endl;
    for (int i = 0 ; i <=3; i++) {
        cout << kandidat[i] <<" : " << suara[i] << "suara"<< endl;
    }
    
    return 0;
}