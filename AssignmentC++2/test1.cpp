#include<iostream>
using namespace std;

class Box{
protected:
    double length{1.0};
    double width{1.0};
    double height{1.0};
public:
    Box() = default;
    Box(double lv, double wv, double hv):length{lv},width{wv},height{hv}{}
    // Function to show the vulume of an object
    void showVolume() const{
        cout << "Box usable volume is " << volume() << endl;
    }
    // Function  to calculate the volume  of a Box object
    double volume() const { return length * width * height;}
};

int main(){
    Box box{29.2,34.23,14.2};
    box.showVolume();

    return 0;
}