#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string namaBarang;
    int kodeBarang;
    // Deklarasi constructor
    Barang(string nama, int kode);
    // Fungsi untuk menampilkan informasi barang
    void tampilkanInfo();
};

// Constructor didefinisikan di luar class
Barang::Barang(string nama, int kode) {
    namaBarang = nama;
    kodeBarang = kode;
} 
