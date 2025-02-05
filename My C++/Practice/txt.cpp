#include<iostream>
#include<iomanip>
#include<conio.h>
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
            << setw(10) << made_in 
            << setw(10) << capacity 
            << setw(10) << price << " $"
            << setw(15) << price * 4000 << " KHR"
            << setw(10) << made_in_year 
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
void sword(){
    cout << "\n\n\n\n                                     |X|         \n";
    cout << "                                   ))))))))))))       \n";
    cout << "                                   )))))))))))))       \n";
    cout << "                                   )))))))))) )))      \n";
    cout << "          )                         )))))))))) )))       \n";
    cout << "        )))))))))))))))))))))))))))))))))))))) )))       \n";
    cout << "        ))))             ))))))))))))))))))))) )))       \n";
    cout << "                                )))))))))))))))))       \n";
    cout << "                                   )))))))))))))       \n";
    cout << "                                   ))))))))))))       \n";
    cout << "                                   )))))))))))       \n";
    cout << "                                      ";
}
int main(){
    //1.iphone
    //2.oppo
    //3.samsung
    Iphone iphone[100];
    Oppo oppo[100];
    Samsung samsung[100];
    int nPh=0,hm;
    int nOp=0;
    int nSs=0;
    int option;
    do{
        system("cls");
        cout << "==================================================================================\n\n";
        cout << "1 <o>  I N P U T  I N F O  I P H O N E  <o>\n";
        cout << "\n2 <o>  I N P U T  I N F O  O P P O  <o>\n";
        cout << "\n3 <o>  I N P U T  I N F O  S A M S U N G  <o>\n";
        cout << "\n4 <o>  O U T P U T  I N F O  I P H O N E  <o>\n";
        cout << "\n5 <o>  O U T P U T  I N F O  O P P O  <o>\n";
        cout << "\n6 <o>  O U T P U T  I N F O  S A M S U N G  <o>\n";
        cout << "\n7 <o>  C L O S E  P R O G R A M  <o>\n\n";
        cout << "==================================================================================\n\n";
        cout << "\n\t\t\tS E L E C T: ";
        cin >> option;
        switch(option){
            case 1:
            system("cls");
                cout << "--------------- Input Infor Iphone ---------------\n";
                cout << "How many Iphone do want input: ";cin>> hm;
                for(int i = 0; i < hm; i++){
                    iphone[nPh].inputIphone();
                    nPh++;
                }
            break;
            case 2:
                system("cls");
                cout << "\n--------------- Input Infor Oppo ---------------\n";
                cout << "How many OPPO do want input: ";cin>> hm;
                for(int i = 0; i < hm; i++){
                    oppo[nOp].inputOppo();
                    nOp++;
                }
            break;
            case 3:
                system("cls");
                cout << "\n--------------- Input Infor Samsung ---------------\n";
                cout << "How many Iphone do want input: ";cin>> hm;
                for(int i = 0; i < hm; i++){
                    samsung[nSs].inputSs();
                    nSs++;
                }
            break;
            case 4:
                system("cls");
                cout << "\n--------------- Output Infor Iphone ---------------\n";
                cout << "IPHONE: ";
                for(int i = 0; i < nPh; i++){
                    iphone[i].ouputIphone();
                }
                sword();
                getch();
            break;
            case 5:
                system("cls");
                cout << "\n--------------- Output Infor Oppo ---------------\n";
                cout << "OPPO: ";
                for(int i = 0; i < nOp; i++){
                    oppo[i].ouputOppo();
                }
                sword();
                getch();
            break;
            case 6:
                system("cls");
                cout << "\n--------------- Output Infor Samsung ---------------\n";
                cout << "SAMSUNG: ";
                for(int i = 0; i < nSs; i++){
                    samsung[i].outputSs();
                }
                sword();
                getch();
            break;
        }
    }while(option !=7);
    return 0;
}
