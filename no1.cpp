#include <iostream>
#include <string.h>

using namespace std;

template <class t>
t total(t x, t y,t z)
{
    t result;
    result = x+y+z;
    //cout << "harga tiket total adalah " << result << endl;
    return (result);
}


class BasicTicket
{
protected:
    string penumpang;
    string kotadatang;
    int penerbangan;
    int harga;
public:
    BasicTicket() {
        penumpang = "def";
        kotadatang = "def";
        penerbangan = 1000;
        harga = 10000;
    };//kosntruktor
    virtual void GetPrice();

    BasicTicket operator+(const BasicTicket& F) {
    BasicTicket num;
    num.harga = this->harga + num.harga;
    return num;
}
    
};

void BasicTicket::GetPrice(){
    cout << "harga tiket adalah " << harga << endl;
}





class PremiumTicket : BasicTicket
{
    protected:
    public:
    PremiumTicket()
    {
        penumpang = "def";
        kotadatang = "def";
        penerbangan = 1000;
        harga = 11000;
    }
    virtual void GetPrice();
    PremiumTicket operator+(const PremiumTicket& F){
        PremiumTicket num;
        num.harga = this->harga + num.harga;
        return num;
    }
};

void PremiumTicket::GetPrice()
{
    cout << "harga tiket adalah " << (harga) << endl;
}





int main() {
    cout << "soal 1\n";
    BasicTicket ticket1;
    ticket1.GetPrice();
    PremiumTicket ticket2;
    ticket2.GetPrice();
    BasicTicket ticket12;
    PremiumTicket ticket21;
    cout << "soal 2\n";
    BasicTicket ticket4 = ticket1 + ticket12;
    ticket4.GetPrice();
    PremiumTicket ticket3 = ticket2 + ticket21;
    ticket3.GetPrice();
    cout << "soal 3\n";
    BasicTicket ticket111 = total(ticket4,ticket1,ticket12);
    ticket111.GetPrice();

    PremiumTicket ticket222 = total(ticket3,ticket2,ticket21);
    ticket222.GetPrice();
}