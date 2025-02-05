#include<iostream>
#include<iomanip>
using namespace std;

class Phone{
    protected:
    string model,made_in,color;
    int capacity,made_in_year;
    float price;
// modeml color capacity price made_in made_in_year
};
class Iphone : public Phone{
    public:
        void inputIphone(){
            cout << "Enter Model: ";cin >> model;
            cout << "Enter Made In: ";cin >> made_in;
            cout << "Enter Capacity: ";cin >> capacity;
            cout << "Enter Price: ";cin >> price;
            cout << "Enter Made in year: ";cin >> made_in_year;
            cout << "Enter Color: ";cin >> color;
        }
        void ouputIphone(){
            cout
            << model
            << setw(14) << made_in 
            << setw(10) << capacity 
            << setw(13) << price 
            << setw(11) << made_in_year 
            << setw(10) << color;
        }
// derive by class phone 
};
class Oppo : public Iphone{
    protected:
        int warrenty;
    public:
        void inputOppo(){
            inputIphone();
            cout << "Enter Warrenty: "; cin >> warrenty;
        }
        void ouputOppo(){
            ouputIphone();
            cout << setw(10) << warrenty;
        }
// derive by class Iphone
// warrenty  កាធានា
};
class Samsung : public Oppo{
    protected:
        string sell_date;
    public:
        void inputSs(){
            inputOppo();
            cout << "Enter Sell date: "; cin >> sell_date;
        }
        void outputSs(){
            ouputOppo();
            cout << setw(10) << sell_date << endl;
        }
// derive by class Oppo
// sell_date
};
int main(){
    //1.iphone
    //2.oppo
    //3.samsung
    Iphone iphone;
    Oppo oppo;
    Samsung samsung;
    cout << "--------------- Input Infor Iphone ---------------\n";
    iphone.inputIphone();
    cout << "\n--------------- Input Infor Oppo ---------------\n";
    oppo.inputOppo();
    cout << "\n--------------- Input Infor Samsung ---------------\n";
    samsung.inputSs(); 
    cout << "\n--------------- Output Infor Iphone ---------------\n";
    cout << "IPHONE: ";iphone.ouputIphone();
    cout << "\n--------------- Output Infor Oppo ---------------\n";
    cout << "OPPO: ";oppo.ouputOppo();
    cout << "\n--------------- Output Infor Samsung ---------------\n";
    cout << "SAMSUNG: ";samsung.outputSs();
    return 0;
}
