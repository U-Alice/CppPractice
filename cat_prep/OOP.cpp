#include <iostream>
using namespace std;


class Circle{
    double radius;
    public:
        Circle(double r) : radius(r){}
        double area() {return radius *radius * 3.14;};
};


class Cylinder{
    Circle base;
    double height;
    public:
        Cylinder(double r, double h) :  base(r), height(h){};
        double volume() {return base.area() * height;};

};

class Rectangle {
    int width;
    int length;

    public:
        Rectangle(){
            width = 5;
            this->length = 5;
        }

        Rectangle(Rectangle *rect4){
            width =  rect4->width;
            length =  rect4->length;
        }

        void get_values(){
            cout << "Width: " << width << "Height: " << length;
        }
        Rectangle(int, int);

};

Rectangle::Rectangle(int x, int y) : width (x), length(y) {}

int main(){
    Rectangle rect1 = {3,4};
    Rectangle *pointer;
    Rectangle *rect2 =  new Rectangle(6,6);
    Rectangle *rect3 = new Rectangle(rect2);
    pointer = new Rectangle(2,2);
    pointer->get_values();
    rect1.get_values();
    cout << endl;
    rect2->get_values();
    cout << endl;
    rect3->get_values();
    delete rect2;
    return 0;
}
