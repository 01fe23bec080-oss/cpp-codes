#include <iostream>
using namespace std;

// Function declarations
int area(int);              // Square
int area(int, int);         // Rectangle
float area(float);          // Circle

int main()
{
    int side = 4;
    int length = 5, breadth = 3;
    float radius = 2.5;

    cout << "Area of square: " << area(side) << endl;
    cout << "Area of rectangle: " << area(length, breadth) << endl;
    cout << "Area of circle: " << area(radius) << endl;

    return 0;
}

// Function definitions
int area(int side)
{
    return side * side;
}

int area(int length, int breadth)
{
    return length * breadth;
}

float area(float radius)
{
    return 3.14 * radius * radius;
}
