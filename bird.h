#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

using namespace std;

class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
};

class Sparrow : public Bird{
    private:
    void eat(){
        cout << "Sparrow Eats" << endl;
    }
    void fly(){
        cout << "Sparrow Flys" << endl;
    }
};

class Eagle: public Bird{
    private:
    void eat(){
        cout << "Eagle Eats" << endl;
    }
    void fly(){
        cout << "Eagle Flys" << endl;
    }
};

#endif