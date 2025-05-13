#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(); //Constructor
};

mahasiswa::mahasiswa(){
    cout<<"Contructor Terpanggil"<<endl; //Definisi constructor
}

int main(){
    mahasiswa mhs;//pembuatan Object

    return 0;
}