#include <iostream>
using namespace std;

class Area
{
public:

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
};

int main()
{
    Area obj;

    int side = 4;
    int length = 5, breadth = 3;
    float radius = 2.5;

    cout << "Area of square: " << obj.area(side) << endl;
    cout << "Area of rectangle: " << obj.area(length, breadth) << endl;
    cout << "Area of circle: " << obj.area(radius) << endl;

    return 0;
}
