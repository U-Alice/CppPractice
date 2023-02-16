#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int length;

    public:

        Rectangle(){
            width = 5;
            length = 5;
        }

        void get_values(){
            cout << "Width: " << width << "Height: " << length;
        }
        Rectangle(int, int );

};

Rectangle::Rectangle(int x, int y){
            width = x;
            length = y;
}

int main(){
    Rectangle rect1{3,4};
    Rectangle rect2;
    rect1.get_values();
    rect2.get_values();
    return 0;
}
