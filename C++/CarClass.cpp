#include <iostream>
using namespace std;

class Car {
    // Write your constructor and printCarInfo method here.
    int gear;
    string color;
    Car(int g,string c){
        this->gear=g;
        this->color=c;
    }
    void printCarInfo(int g,string c){
        cout<<g;
        cout<<c;
    }
};


class RaceCar: public Car {
    // Write your constructor and printRaceCarInfo method here.
int gear,maxspeed;
    string color;
    RaceCar(int g,string c, int ms){
        this->gear=g;
        this->color=c;
        this->maxspeed=ms;
    }
    void printInfo(int g,string c ,int ms){
        cout<<g;
        cout<<c;
        cout<<ms;
    }
    
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo(noOfGear,color,maxSpeed);
    return 0;
}