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
    void bunk() const{
        cout << this->name << " is bunking class" << endl;
    }
    string noChange;

    public:
    Student(){
        cout << "Default Constructor" << endl;
    }

    Student(int age, string name, int id, string collegeName,string noChange){
        cout << "Parameterised ctor" << endl;
        this->id = id;
        this->age=age;
        this->name=name;
        this->collegeName=collegeName;
        this->noChange=noChange;
    }

    void setCollege(string collegeName){
        this->collegeName=collegeName;
        cout << "College New Name Set" << endl;
    }

    void getHidden() const{
        cout << this->collegeName << endl;
        this->bunk();
        cout << this->noChange << endl;
    }

    ~Student(){
        cout << "Default Destructor" << endl;
    }
};


int main() {
    // cout << "Hi" << endl;
    // Student stA;
    // stA.age = 24;
    // // stA.collegeName = "ABC";
    // // stA.bunk();
    // cout << stA.age << endl;
    // cout << stA.name << endl;
    // cout << stA.id << endl;

    Student B(24,"NoName",12345,"NoCollege","HelloNoChange");
    //B.test();
    B.setCollege("NewTech College");
    B.getHidden();

    return 0;
}