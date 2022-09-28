#include <iostream>
#include "ClassBuku.h"
#include <string.h>
using namespace std;
// Buku::Buku(string judul, string Pengarang) {
//     this->Judul = judul;
//     this->pengarang = Pengarang;
// }

void Buku::SetJudul(string title){
    Judul = title;
}

void Buku::SetPengarang(string creator){
    pengarang = creator;
}

void Buku::GetJudul(){
    cout << Judul << "\n";
}

void Buku::GetPengarang(){
    cout << pengarang << "\n";
}

void Fiction::GetTingkatMembaca(){
    cout << tingkat_Membaca << "\n";
}

void Fiction::SetTingkatMembaca(int num){
    tingkat_Membaca = num;
}

int main(){
    Buku buku1("makan", "minum");
    buku1.SetJudul("makan");
    // buku1.SetPengarang("jono");
    // buku1.GetPengarang();
    buku1.GetJudul();
    Fiction nuan(2);
    nuan.SetJudul("party");
    nuan.SetPengarang("Fajar");
    nuan.SetTingkatMembaca(2);
    nuan.GetTingkatMembaca();
    nuan.GetJudul();
    nuan.GetPengarang();
}