#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    void tampil() {
        cout << "NIM= " << nim;
        cout << "\nNama= " << nama;
    }
};

class Matakuliah {
private: 
    int sks;
    string kode;
    string namaMK;
public:
    void inputMK() {

        cout << "\nMasukkan jumkalh SKS= ";
        cin >> sks;
        cout << "\nMasukkan Kode MK== ";
        cin >> kode;
        cout << "\nMasukkan Nama MK= ";
        cin >> namaMK;
    }

    void tampilMK() {
        cout << "\nJumlah SKS= " << sks;
        cout << "\nKode MK= " << kode;
        cout << "\nNama MK= " << namaMK << endl;
    }
};
int main() 
{
    Mahasiswa mhs;
    Matakuliah mk;

    cout << "\nMasukkan NIM= ";
    cin >> mhs.nim;
    cout << "\nMasukkan nama= ";
    cin >> mhs.nama;

    mk.inputMK();
    mhs.tampil();
    cout << endl;
    mk.tampilMK();
   
  
}


