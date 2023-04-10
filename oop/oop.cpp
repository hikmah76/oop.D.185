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
    void inputMK; () {

        cout << "\nMasukkan jumkalh SKS= ";
        cin >> sks;
        cout << "\nMasukkan Kode MK== ";
        cin >> kode;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}


