#include<stdio.h>
#include<iostream>

using namespace std;

class Add {

    public:

    int sum(int x, int y){
        cout << "Sum of 2 int : " << endl;
        return x+y ;
    }

    int sum(int x, int y, int z){
        cout << "Sum of 3 int : " << endl;
        return x+y+z;
    }

    double sum(double x, double y){
        cout << "Sum of 2 double : " << endl;
        return x+y;
    }
};

class Complex {
    public:
    int real;
    int imag;

    Complex(){
        real = imag = -1;
    }

    Complex(int r, int i){
        real = r;
        imag = i;
    }

    void print(){
        printf("%d + i%d\n", this->real, this->imag);
    }

    Complex operator+(const Complex &B){
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }
};

int main() {
    // int x=5,y=6,z=10;
    // double a=2.12,b=3.45;
    // Add add;
    // cout << add.sum(x,y) << endl;
    // cout << add.sum(x,y,z) << endl;
    // cout << add.sum(a,b) << endl;

    Complex A(2,5);
    A.print();
    Complex B(3,2);
    B.print();
    Complex C = A + B;
    C.print();

    return 0;
}