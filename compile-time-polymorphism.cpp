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

int main() {
    int x=5,y=6,z=10;
    double a=2.12,b=3.45;
    Add add;
    cout << add.sum(x,y) << endl;
    cout << add.sum(x,y,z) << endl;
    cout << add.sum(a,b) << endl;
    return 0;
}