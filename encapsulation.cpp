#include<stdio.h>
#include<iostream>

using namespace std;

class Student {
    public:
    int age;
    string name;
    int id;
    void test(){
        cout << "Testing for " << this->name << endl;
    }

    private:
    string collegeName;
    void bunk(){
        cout << this->name << " is bunking class" << endl;
    }

    public:
    Student(){
        cout << "Default Constructor" << endl;
    }

    Student(int age, string name, int id, string collegeName){
        cout << "Parameterised ctor" << endl;
        this->id = id;
        this->age=age;
        this->name=name;
        this->collegeName=collegeName;
    }

    ~Student(){
        cout << "Default Destructor" << endl;
    }
};


int main() {
    cout << "Hi" << endl;
    Student stA;
    stA.age = 24;
    // stA.collegeName = "ABC";
    // stA.bunk();
    cout << stA.age << endl;
    cout << stA.name << endl;
    cout << stA.id << endl;

    Student B(24,"NoName",12345,"NoCollege");
    //B.test();

    return 0;
}