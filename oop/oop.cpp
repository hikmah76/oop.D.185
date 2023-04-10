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
public: 
    int sks;
    string kode;
    string namaMK;

};
int main()
{
    std::cout << "Hello World!\n";
}


