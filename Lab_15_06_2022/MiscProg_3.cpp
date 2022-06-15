#include <iostream>

using namespace std;

class Areator;
class Circle;
class Triangle;
class Rectangle;

class Areator
{
public:
    virtual void computeArea() = 0;
};

class Circle : private Areator
{
private:
    float radius;
    float area;

public:
    Circle();
    Circle(float r);

    virtual void computeArea();
    friend void printArea(Circle &obj);
};

class Triangle : private Areator
{
private:
    float base;
    float height;
    float area;

public:
    Triangle();
    Triangle(float b, float h);

    virtual void computeArea();
    friend void printArea(Triangle &obj);
};

class Rectangle : private Areator
{
private:
    float length;
    float breadth;
    float area;

public:
    Rectangle();
    Rectangle(float l, float b);

    virtual void computeArea();
    friend void printArea(Rectangle &obj);
};

Circle::Circle()
{
    radius = 0;
    area = 0;
}

Circle::Circle(float r)
{
    radius = r;
    area = 0;
}

void Circle::computeArea()
{
    area = (3.14 * radius * radius);
}

void printArea(Circle &obj)
{
    cout << "The area of the circle is : " << obj.area;
}

Triangle::Triangle()
{
    base = 0;
    height = 0;
    area = 0;
}

Triangle::Triangle(float b, float h)
{
    base = b;
    height = h;
    area = 0;
}

void Triangle::computeArea()
{
    area = (0.5 * base * height);
}

void printArea(Triangle &obj)
{
    cout << "The area of the triangle is : " << obj.area;
}

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
    area = 0;
}

Rectangle::Rectangle(float l, float b)
{
    length = l;
    breadth = b;
    area = 0;
}

void Rectangle::computeArea()
{
    area = (length * breadth);
}

void printArea(Rectangle &obj)
{
    cout << "The area of the rectangle is : " << obj.area;
}

int main(int argc, char const *argv[])
{
    Circle circle(5);
    Triangle triangle(5, 10);
    Rectangle rectangle(5, 5);

    circle.computeArea();
    triangle.computeArea();
    rectangle.computeArea();

    printArea(circle);
    cout << endl;
    printArea(triangle);
    cout << endl;
    printArea(rectangle);
    cout << endl;

    return 0;
}
