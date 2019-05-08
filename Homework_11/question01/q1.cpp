#include <iostream>

using namespace std;

class Shape{
public:
    virtual void draw(){
        cout << "Shape::draw()" << endl;
    }
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Circle::draw()" << endl;
    }
};

class Square : public Shape{
public:
    void draw(){
        cout << "Square::draw()" << endl;
    }
};

class Triangle : public Shape{
public:
    void draw(){
        cout << "Triangle::draw()" << endl;
    }
};


int main(){
    Shape *shapes[4];
    shapes[0] = new Circle;
    shapes[1] = new Square;
    shapes[2] = new Triangle;

    shapes[0]->draw();
    shapes[1]->draw();
    shapes[2]->draw();

    for(int i = 0; i > 4; i++)
        delete shapes[i];
    return 0;
}
