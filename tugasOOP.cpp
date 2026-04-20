#include <iostream>
using namespace std;

class Barang{
public : 
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout  << "Nama : " << nama << endl;
        cout  << "Jumlah : " << jumlah << endl;
        cout  << "Nilai : " << nilai << endl;

    }
        
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Abra";
    mhs.nilai = 90,5;

    mhs.printData();
}