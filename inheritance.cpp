#include<stdio.h>
#include<iostream>

using namespace std;

class toplevel{
    protected:
    bool topl;

    void tlout(){
        cout << "Top Level Out" << endl;
    }

    public:
    toplevel(bool _topl){
        cout << "top level ctor" << endl;
        this->topl = _topl;
    }

    ~toplevel(){
        cout << "top level dtor" << endl;
    }
};

class Vehicle : protected toplevel {

    protected:
    int noOfTyres;
    string name;
    string model;

    void startEngine(){
        cout<<"Engine Start"<<endl;
    }

    void stopEngine(){
        cout<<"Stop Engine"<<endl;
    }

    public:
    Vehicle(int _noOfTyres, string _name, string _model, bool _topl) : toplevel(_topl){
        cout << "Vehicle Para Ctor" << endl;
        this->noOfTyres=_noOfTyres;
        this->name=_name;
        this->model=_model;
        this->topl=_topl;
    }

    ~Vehicle(){
        tlout();
        cout << "Vehicle Dtor Called" << endl;
    }

};

class highSpeed{
    protected:
    bool fastMode;

    private:
    void warning(){
        cout << "Alert: Overspeeding" << endl;
    }

    public:
    highSpeed(bool _fastMode){
        cout << "HighSpeed ctor" << endl;
        this->fastMode=_fastMode;
    }

    ~highSpeed(){
        warning();
        cout << "HighSpeed dtor" << endl;
    }
};

class Car : public Vehicle {

    public:
    int noOfDoors;
    string transmissionType;

    void startAC(){
        cout << "Start AC of " << name << endl;
    }

    Car(int _noOfTyres, string _name, string _model, int _noOfDoors, string _transmissionType, bool _topl) : Vehicle(_noOfTyres, _name, _model,_topl){
        cout << "Car Para Ctor" << endl;
        //this->noOfTyres=_noOfTyres;
        // this->name=_name;
        // this->model=_model;
        this->noOfDoors=_noOfDoors;
        this->transmissionType=_transmissionType;
        startAC();
        this->startEngine();
        this->stopEngine();
    }

    ~Car(){
        cout << "Car Dtor Called" << endl;
    }
};

class Bike : public Vehicle, public highSpeed {

    public:
    string handleType;
    string suspensionType;

    void startWheelie(){
        cout << "Start wheelie of " << name << endl;
    }

    Bike(int _noOfTyres, string _name, string _model, string _handleType, string _suspensionType, bool _fastMode, bool _topl) : Vehicle(_noOfTyres, _name, _model,_topl), highSpeed(_fastMode){
        cout << "Bike Para Ctor" << endl;
        this->handleType=_handleType;
        this->suspensionType=_suspensionType;
        //this->fastMode=_fastMode;
        startWheelie();
        this->startEngine();
        this->stopEngine();
    }

    ~Bike(){
        cout << "Bike Dtor Called" << endl;
    }
};

int main() {

    Car City(4,"Honda","City",4,"AMT",true);
    cout << "--------------" << endl;
    // City.startEngine();
    // City.stopEngine();
    City.startAC();

    Bike B(2,"Honda","Activa","U","Soft",true,false);
    B.startWheelie();

    return 0;
}