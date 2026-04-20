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
        cout  << "Kategori : " << kategori << endl;
        cout  << "TanggalProduksi : " << tanggalProduksi << endl;
    }
        
    }; //batas Barang

int main(){
    Barang elektronik;
    elektronik.nama = "Handphone";
    elektronik.jumlah = 1;
    elektronik.kategori = elektronik;
    elektronik.tanggalProduksi = 

    Barang nonElektronik;
    nonElektronik.nama = "Buku"
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = nonElektronik;
    nonElektronik.tanggalProduksi =

    elektronik.printData();
    nonElektronik.printData();
}
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Abra";
    mhs.nilai = 90,5;

    mhs.printData();
}