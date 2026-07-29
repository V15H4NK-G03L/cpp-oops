#include<iostream>
#include "bird.h"

using namespace std;

void birdDoes(Bird *&bird){
    bird->fly();
    bird->eat();
};

int main() {
    //Bird *B = new Sparrow();
    Bird *B = new Eagle();
    birdDoes(B);

    return 0;
}