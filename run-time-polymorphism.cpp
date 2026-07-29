#include<stdio.h>
#include<iostream>

using namespace std;

class Shape {

    public:
    virtual void draw(){
        cout << "Draw Shape" << endl;
    }
};

class Circle : public Shape {

    public:
    void draw() override {
        cout << "Draw Circle" << endl;
    }
};

class Rectangle : public Shape {

    public:
    void draw() final {
        cout << "Draw Rectangle" << endl;
    }
};

void ShapeDrawing(Shape *s){
    s->draw();
}

int main() {
    Circle c;
    Rectangle r;
    ShapeDrawing(&c);
    ShapeDrawing(&r);

    cout << "======================" << endl;

    Shape *s = new Shape();
    s->draw();

    Shape *s2 = new Circle();
    s2->draw();

    Circle *c1 = new Circle();
    c1->draw();

    Shape *s5 = new Shape();
    Circle *c4 = (Circle *)s5;
    c4->draw();


    return 0;
}