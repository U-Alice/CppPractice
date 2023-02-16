#include <iostream>


using namespace std;

class Rectangle{
        int width, height;
    public:
        void set_values(int, int);
        int area() {return width*height;};
    
};

void Rectangle::set_values(int length, int width){
    width = width;
    length =  length;
}

int main(){
    Rectangle rect;
    rect.set_values(3, 4);
    cout <<  "Area: " << rect.area() << endl;
}