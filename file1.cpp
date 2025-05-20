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
// Fungsi tampilkanInfo didefinisikan di luar class
void Barang::tampilkanInfo() {
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}
// Fungsi utama
int main() {
    Barang barang1("ASUS ROG ", 1001);
    Barang barang2("SAMSUNG S24", 1002);

    cout << "=== Barang 1 ===" << endl;
    barang1.tampilkanInfo();

    cout << "\n=== Barang 2 ===" << endl;
    barang2.tampilkanInfo();

    return 0;
}
