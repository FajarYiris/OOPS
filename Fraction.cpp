#include <iostream>
#include <math.h>
#include "FractionClass.h"
using namespace std;

int main(){
    srand(time(0));
    Fraction num,num1,num2;
    int pembilang[10];
    int penyebut[10];
    int bilangan[10];
    int temp,choice;
    for (int i = 0;i<10;i++) {
        temp = rand()%5;
        while (temp == 0) {
            temp = rand()%5;
        }
        pembilang[i] = temp;

        temp = rand()%10;
        while (temp == 0) {
            temp = rand()%10;
        }
        penyebut[i] = temp;

        temp = rand()%5;
        while (temp == 0) {
            temp = rand()%5;
        }
        bilangan[i] = temp;
        num.setBilangan(bilangan[i]);
        num.setpembilang (pembilang[i]);
        num.setpenyebut (penyebut[i]);
        num.ReduceFractionValue();
        num.DisplayFraction();
    }
    cout << "masukan bilangan ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        for (int i = 0;i<5;i++) {
            num.setBilangan(bilangan[i]);
            num.setpembilang (pembilang[i]);
            num.setpenyebut (penyebut[i]);
            num1.setBilangan(bilangan[5+i]);
            num1.setpembilang (pembilang[5+i]);
            num1.setpenyebut (penyebut[5+i]);
            num2 = num + num1;
            num2.DisplayFraction();
        }
        break;

    case 2:
        for (int i = 0;i<5;i++) {
            num.setBilangan(bilangan[i]);
            num.setpembilang (pembilang[i]);
            num.setpenyebut (penyebut[i]);
            num1.setBilangan(bilangan[5+i]);
            num1.setpembilang (pembilang[5+i]);
            num1.setpenyebut (penyebut[5+i]);
            num2 = num - num1;
            num2.DisplayFraction();
        }
        break;

    case 3:
        for (int i = 0;i<5;i++) {
            num.setBilangan(bilangan[i]);
            num.setpembilang (pembilang[i]);
            num.setpenyebut (penyebut[i]);
            num1.setBilangan(bilangan[5+i]);
            num1.setpembilang (pembilang[5+i]);
            num1.setpenyebut (penyebut[5+i]);
            num2 = num / num1;
            num2.DisplayFraction();
        }
        break;
    
    case 4:
        for (int i = 0;i<5;i++) {
            num.setBilangan(bilangan[i]);
            num.setpembilang (pembilang[i]);
            num.setpenyebut (penyebut[i]);
            num1.setBilangan(bilangan[5+i]);
            num1.setpembilang (pembilang[5+i]);
            num1.setpenyebut (penyebut[5+i]);
            num2 = num * num1;
            num2.DisplayFraction();
        }
        break;
    
    default:
        break;
    }
}