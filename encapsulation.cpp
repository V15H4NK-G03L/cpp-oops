#include<stdio.h>
#include<iostream>

using namespace std;

class Student {
    public:
    int age;
    string name;
    int id;

    private:
    string collegeName;
    void bunk(){
        cout << this->name << " is bunking class" << endl;
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
    return 0;
}