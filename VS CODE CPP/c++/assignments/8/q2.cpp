#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;   // Pure virtual function
};

class Rectangle : public Shape
{
public:
    float l, w;

    void area()
    {
        cout << "Enter length and width of the rectangle: ";
        cin >> l >> w;
        cout << "Area of the rectangle: " << l * w << endl;
    }
};

class Triangle : public Shape
{
public:
    float b, h;

    void area()
    {
        cout << "\nEnter base and height of the triangle: ";
        cin >> b >> h;
        cout << "Area of the triangle: " << (b * h) / 2 << endl;
    }
};

int main()
{
    Rectangle r;
    Triangle t;

    r.area();
    t.area();

    return 0;
}