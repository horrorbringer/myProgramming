#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius *radius);
    }
};

int main()
{
    // inheritance = A class can recieve attribute and methods from another class
    //               Children classes inheritance from Parent class
    //               Helps to reuse similar code found within multiple classes

    Cube cube(10);
    Sphere sphere(5);

    std::cout << "Area of Cube: " << cube.area << 'cm\n';
    std::cout << "Volume of Cube: " << cube.volume << 'cm\n';

    std::cout << "Area Sphere: " << cube.area << 'cm\n';
    std::cout << "Volume Sphere: " << cube.volume << 'cm\n';



    return 0;
}