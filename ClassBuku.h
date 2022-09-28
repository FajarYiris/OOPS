#pragma once
#include <string.h>
using namespace std;

class Buku
{
private:
    string Judul = "def";
    string pengarang = "def";
public:
        Buku(string judul, string pengarang){
            judul = "def";
            pengarang = "def";
        };
        Buku(){}
        
    void GetJudul();
    void SetJudul(string judul);
    void GetPengarang();
    void SetPengarang(string pengarang);
};

// derived Class
class Fiction : public Buku {
private:
    int tingkat_Membaca;
public:
    Fiction(int tingkat_Membaca) {
        tingkat_Membaca = 0;
}
    void GetTingkatMembaca();
    void SetTingkatMembaca(int tingkat_Membaca);
};

class NonFiction : public Buku {
private:
    int Jumlah_Halaman;
public:
    
NonFiction(int Jumlah_Halaman) {
    Jumlah_Halaman = 0;
}
    void GetJumlah_Halaman();
    void SetJumlah_Halaman(int Jumlah_Halaman);
};



