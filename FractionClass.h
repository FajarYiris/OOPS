#pragma once
#include <iostream>
#include <math.h>
using namespace std;

// note to self this->data = first data that got inserted followed by overload data
class Fraction {
    protected:
    int bilangan; //bilangan utama
    int pembilang; //fraction bagian atas
    int penyebut; //fraction bagian bawah
    
    public:
    char pemisah = '/'; //pemisah untuk Fraction yang bertindak sebagai tanda bagi
    Fraction(){}
    void ReduceFractionValue(); //menyederhanakan
    void DisplayFraction();
    void setBilangan(int);
    void setpembilang(int);
    void setpenyebut(int);
    void getnum();
    int gcd(int,int);

    Fraction setBilangan() {
        bilangan = 0;
    }
    Fraction operator*(const Fraction& F) { //overload perkalian
        Fraction num;
        num.bilangan = this->bilangan * F.bilangan;
        num.pembilang = this->pembilang * F.pembilang;
        num.penyebut = this->penyebut * F.penyebut;
        return num;
    }

    Fraction operator/(const Fraction& F) { //overload pembagian
        Fraction num;
        num.bilangan = this->bilangan / F.bilangan;
        num.pembilang = this->pembilang * F.penyebut;
        num.penyebut = this->penyebut * F.pembilang;
        return num;
    }

    Fraction operator-(const Fraction& F) { //overload pengurangan
        Fraction num;
        num.bilangan = this->bilangan - F.bilangan;
        num.pembilang = (this->pembilang * F.penyebut) - (this->penyebut * F.pembilang);
        num.penyebut = this->penyebut * F.penyebut;
        return num;
    }

    Fraction operator+(const Fraction& F) { //overload penjumlahan
        Fraction num;
        num.bilangan = this->bilangan + F.bilangan;
        num.pembilang = (this->pembilang * F.penyebut) + (this->penyebut * F.pembilang);
        num.penyebut = this->penyebut * F.penyebut;
        cout << this->penyebut;
        return num;
    }

    Fraction operator==(const Fraction& F) {
        Fraction num;
        int boo = 0;
        if(this->bilangan != F.bilangan) boo += 1;
        if(this->pembilang != F.pembilang) boo += 1;
        if(this->penyebut != F.penyebut) boo += 1;
        if(boo == 0) cout << "pecahan sama";
        cout << "pecahan tak sama";
        return num;
    }
};

void Fraction::DisplayFraction(){
    cout << "bilangan saat ini adalah " << bilangan << " " << pembilang << pemisah << penyebut << endl;
}

void Fraction::setBilangan(int bilangan) {
    this->bilangan = bilangan;
}

void Fraction::setpembilang(int bilangan) {
    this->pembilang = bilangan;
}

void Fraction::setpenyebut(int builangan) {
    this->penyebut = builangan;
}

int Fraction::gcd(int a, int b){
    while(a!=b){
        if (a>b) a = a-b;
        b = b - a;
    }
    return a;
}

void Fraction::ReduceFractionValue() {
    int baru;
    baru = gcd(pembilang,penyebut);
    setpenyebut(penyebut/baru);
    setpembilang(pembilang/baru);
    if (pembilang>penyebut) {
        baru = (pembilang/penyebut)+bilangan;
        setBilangan(baru);
        setpembilang(pembilang%penyebut);
    }
}