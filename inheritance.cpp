#include<stdio.h>
#include<iostream>

using namespace std;

class Vehicle {

    public:
    int noOfTyres;
    string name;
    string model;

    void startEngine(){
        cout<<"Engine Start"<<endl;
    }

    void stopEngine(){
        cout<<"Stop Engine"<<endl;
    }

    Vehicle(int _noOfTyres, string _name, string _model){
        cout << "Vehicle Para Ctor" << endl;
        this->noOfTyres=_noOfTyres;
        this->name=_name;
        this->model=_model;
    }

    ~Vehicle(){
        cout << "Vehicle Dtor Called" << endl;
    }

};

class Car : public Vehicle {

    public:
    int noOfDoors;
    string transmissionType;

    void startAC(){
        cout << "Start AC of " << name << endl;
    }

    Car(int _noOfTyres, string _name, string _model, int _noOfDoors, string _transmissionType) : Vehicle(_noOfTyres, _name, _model){
        cout << "Car Para Ctor" << endl;
        // this->noOfTyres=_noOfTyres;
        // this->name=_name;
        // this->model=_model;
        this->noOfDoors=_noOfDoors;
        this->transmissionType=_transmissionType;
    }

    ~Car(){
        cout << "Car Dtor Called" << endl;
    }
};

int main() {

    Car City(4,"Honda","City",4,"AMT");
    City.startEngine();
    City.stopEngine();
    City.startAC();

    return 0;
}