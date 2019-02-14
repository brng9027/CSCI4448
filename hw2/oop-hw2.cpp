#include <iostream>
using namespace std;

class Shape{
public:
  virtual string display() const = 0;
};

class Rectangle: public Shape {
private:
  string shape = "rectangle";
public:
  virtual string display() const {return shape;}
};

class Circle: public Shape {
private:
  string shape = "circle";
public:
  virtual string display() const {return shape;}
};

class Triangle: public Shape {
private:
  string shape = "triangle";
public:
  virtual string display() const {return shape;}
};

int main() {
  //didn't know how to make an array of varying type objects in c++
  Rectangle r;
  Triangle t;
  Triangle t2;
  Circle c;
  Rectangle r2;
  Circle c2;
  Circle c3;
  Triangle t3;
  Rectangle r3;

  cout << "Number of shapes: 9" << endl;

  Shape* shape = &r;
  cout << "Display " + shape->display() << endl;
  shape = &t;
  cout << "Display " + shape->display() << endl;
  shape = &t2;
  cout << "Display " + shape->display() << endl;
  shape = &c;
  cout << "Display " + shape->display() << endl;
  shape = &r2;
  cout << "Display " + shape->display() << endl;
  shape = &c2;
  cout << "Display " + shape->display() << endl;
  shape = &c3;
  cout << "Display " + shape->display() << endl;
  shape = &t3;
  cout << "Display " + shape->display() << endl;
  shape = &r3;
  cout << "Display " + shape->display() << endl;

  return 0;
}
// #include <iostream>
//
//
// /// A simple Shape interface which provides a method to get the Shape's area
// class Shape {
// public:
//     virtual float getArea() const = 0;
// };
//
//
// /// A Rectangle is a Shape with a specific width and height
// class Rectangle : public Shape {
// private:
//     float width;
//     float height;
//
// public:
//     Rectangle(float width, float height) : width(width), height(height) { }
//     virtual float getArea() const { return width * height; }
// };
//
//
// /// A Circle is a Shape with a specific radius
// class Circle : public Shape {
// private:
//     float radius;
//
// public:
//     Circle(float radius) : radius(radius) { }
//     virtual float getArea() const { return 3.14159f * radius * radius; }
// };
//
//
// /// Prints the area of a Shape to standard output.
// /// Note that polymorphism only works with pointer and reference types:
// /// 'void printArea(const Shape* shape) { ... }' would also be valid, but
// /// 'void printArea(Shape shape) { ... }' would not.
// void printArea(const Shape& shape) {
//     std::cout << "Area: " << shape.getArea() << std::endl;
// }
//
//
// /// Main function to experiment with our Shapes
// int main() {
//
//     // Instantiate Rectangle 2 units wide and 6 units high
//     Rectangle r(2, 6);
//
//     // Remember, polymorphism only works with pointer and reference types, so
//     // declare a Shape pointer, and tell it to point to the Rectangle. This
//     // variable has a static type of Shape, and a dynamic type of Rectangle.
//     // 'Shape& shape = r' would also be valid, but
//     // 'Shape shape = r' would not.
//     Shape* shape = &r;
//
//     std::cout << r.getArea() << std::endl;      // Calls Rectangle.printArea()
//     std::cout << shape->getArea() << std::endl; // Calls shape's dynamic-type's
//                                                 // printArea()
//
//     // Instantiate Circle with radius of 5 units
//     Circle c(5);
//
//     // Tell Shape pointer to point to the Circle; The variable
//     // 'shape' always has a static type of Shape, but its dynamic
//     // type is now Circle
//     shape = &c;
//
//     printArea(r);       // Print Rectangle's area
//     printArea(c);       // Print Circle's area
//     printArea(*shape);  // Print shape's dynamic-type (Circle)'s area
//
//     return 0;
// }
