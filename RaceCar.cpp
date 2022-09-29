#include <iostream>
using namespace std;
class Car
{
protected:
    int NumberCar;
    bool isIgnitionOn;
    int speed;
    int Miles;

public:
    void setNumber(int);
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();
    void getJarak();
    void getNumber();
};
void Car::showCar()
{
    if (isIgnitionOn)
        cout << "Ignition is on. ";
    else
        cout << "Ignition is off. ";
    cout << "Speed is " << speed << endl;
    Car::getNumber();
    Car::getJarak();
}
void Car::turnIgnitionOn()
{
    speed = 0;
    Miles = 0;
    isIgnitionOn = true;
}
void Car::turnIgnitionOff()
{
    isIgnitionOn = false;
}
void Car::setSpeed(int mph)
{
    const int STD_LIMIT = 65;
    if (isIgnitionOn)
        if (mph <= STD_LIMIT)
            speed = mph;
        else
            speed = STD_LIMIT;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}
void Car::setNumber(int num)
{
    NumberCar = num;
}
void Car::getJarak()
{
    cout << "jaraknya adalah " << Miles << endl;
}
void Car::getNumber()
{
    cout << "nomor kendaraan adalah " << NumberCar << endl;
}
class Convertible : public Car
{
private:
    bool isTopUp;

public:
    void putTopUp();
    void putTopDown();
    void showCar();
};
void Convertible::putTopUp()
{
    isTopUp = true;
}
void Convertible::putTopDown()
{
    isTopUp = false;
}
void Convertible::showCar()
{
    Car::showCar();
    if (isTopUp){
        cout << "Top is up." << endl;
    }
    else{
        cout << "Top is down." << endl;
    }
    
}
class RaceCar : public Car
{
public:
    void setSpeed(int mph);
};
void RaceCar::setSpeed(int mph)
{
    const int MAX_SPEED = 200;
    if (isIgnitionOn) {
        if (mph <= MAX_SPEED){
            speed = mph;
        }
        else {
            speed = MAX_SPEED;
        }
    Miles += speed;
    }   
    else
        cout << "Can't set speed - ignition is off!" << endl;
}
int main()
{
    srand(time(0));
    RaceCar aRaceCar;
    RaceCar Racer2;
    aRaceCar.turnIgnitionOn();
    Racer2.turnIgnitionOn();
    int car1 = 0,car2 = 0;
    Racer2.setNumber(238752);
    aRaceCar.setNumber(177013);
    while (true) {
    int speed = rand()%200;
    Racer2.setSpeed(speed);
    car1 += speed;
    if (car1 > 500) {
        cout << "Mobil Car1 menang";
        break;
    }
    speed = rand()%200;
    aRaceCar.setSpeed(speed);
    car2 += speed;
    if (car2 > 500) {
        cout << "Mobil Car2 menang";
        break;
    }
    }
    return 0;
}