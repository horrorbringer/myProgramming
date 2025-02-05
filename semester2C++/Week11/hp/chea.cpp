#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
#include<string>
using namespace std;

string username;
int password;
int id_search , id_update;
int i,n;
bool isfound;

void login(){
    log:
    system("cls");
        cout<<"\n\t**********>> Login <<**********\n\n";
        cout<<"\tEnter Username: "; cin>>username;
        cout<<"\tEnter Password: "; cin>>password;
            if (username=="love"&&password==168){
                cout<<"\tLoading...";
                    for (int i= 1; i <=20 ; i++){
                        Sleep(80);
                        system("color A");
                        cout<<".";   
                    }   
                        cout<<endl;
                        cout<<"\n\t\tWelcome to BiG Garage\n";
                        cout<<"\n\tPlease press any key to continue...\n";
                        getch();
                        system("cls");
            }else{
                cout<<"\tWrong Username and Password \n";
                cout<<"\tLoading...";
                    for (int i= 1; i <=20 ; i++){
                        Sleep(80);
                        system("color C");
                        cout<<".";
                    }    
                        cout<<"\n\tPlease press any key to continue...\n";     
                        getch();

        goto log;
    }


}


class Garage{
    protected:
    string model,color;
    float price;
    string made_in;
    int made_in_year,id;

    public:

    void input(){
    
            cout<<" No : "<<i+1<<endl;
            cout<<" Enter Color : ";cin>>color;
            cout<<" Enter ID : ";cin>>id;
            cout<<" Enter Model : ";cin>>model;
            cout<<" Enter made in :";cin>>made_in;
            cout<<" Enter made_in_year : ";cin>>made_in_year;
            cout<<" Enter Price ";cin>>price;
    }

    void list(){

            cout<<" Model : "<<model<<endl;
            cout<<" ID Model :"<<id<<endl;
            cout<<" Color : "<<color<<endl;
            cout<<" Made in : "<<made_in<<endl;
            cout<<" Made_in_Year : "<<made_in_year<<endl;
            cout<<" Price : "<<price<<endl;
    }

    int getId(){
        return id;
    }
    
};




void menu(){
    cout<<"--->> 1.Input :"<<endl;
    cout<<"--->> 2.List  :"<<endl;
    cout<<"--->> 3.Search:"<<endl;
    cout<<"--->> 4.Delete:"<<endl;
    cout<<"--->> 5.Update:"<<endl;
    cout<<"--->> 6.Exit  :"<<endl;
    cout<<"--->> Choose your Option :";

}

int main(){
    login();
    Garage moto[100],car[100],passapp[100];
   int op,op2,op3,op4,id;

    do{

        cout<<"\t\t===============>> BiG Garage <<=============== \n\n";
        cout<<" -------------------     -------------------     -------------------     -------------------\n";
        cout<<"|  [ 1 ] Motorbike  |   |   [ 2 ]  Car      |   |  [ 3 ]  PassApp   |   |   [ 6 ]  Exit     |\n";  
        cout<<" -------------------     -------------------     -------------------     ------------------- \n\n";

        cout<<"\t\t----->> Choose your Opion : ";cin>>op;

        switch(op){
            case 1:
            system("cls");
            cout<<"----->> Motobike <<-------\n\n";
            menu();
            cin>>op2;
                switch(op2){
                    case 1 :
                    cout<<"------>> Input Motobike <<-------\n";
                    cout<<"-->> How many you want : ";cin>>n;
                    for(i=0;i<n;i++){
                        moto[i].input();
                    }
                    break;
                    case 2:
                    cout<<"------->> Output Motobike <<--------\n";
                    for(i=0;i<n;i++){
                        moto[i].list();
                    }
                    break;
                    case 3:
                    cout<<"-------->> Search Motobike <<---------\n";
                    cout << "Enter id to search : ";cin>> id_search;
                    for(i=0;i<n;i++){
                        if(id_search == moto[i].getId()){
                            moto[i].list();
                            isfound = 1;
                            break;
                        }
                    }
                    isfound = 0;
                    if(isfound == 0){
                        cout << "This search not found int list!";
                    }
                    break;
                    case 4:
                    cout<<"-------->> Delete Motobike<<---------\n";
                    cout << "Enter id to search : ";cin>> id_search;
                    for(i=0;i<n;i++){
                        if(id_search == moto[i].getId()){
                            moto[i] = moto[i+1];
                            isfound = 1;
                            n--;
                            cout << "Motobike Deleted!\n";
                            break;
                        }
                    }

                    //     moto[1] = moto[1+1]
                    //      id = 11;
                    //      name = jj;
                    //     moto[2]
                    //      id = 2;
                    //      name = kk;
                    //      11 = 11
                    isfound = 0;
                    if(isfound == 0){
                        cout << "This search not found int list!";
                    }
                    break;
                    case 5:
                    cout << "Enter id to search : ";cin>> id_search;
                    for(i=0;i<n;i++){
                        if(id_search == moto[i].getId()){
                            moto[i].input();
                            isfound = 1;
                            break;
                        }
                    }
                    isfound = 0;
                    if(isfound == 0){
                        cout << "This search not found int list!";
                    }
                    break;
                    }
                    cout<<"Press Any key to continue ..... "; 
                getch();
            break;

            case 2:
            system("cls");
            cout<<"------->> Car <<--------\n";
            menu();

            cin>>op3;
                switch(op3){
                    case 1 :
                    cout<<"------>> Input Car <<-------\n";
                    cout<<"-->> How many you want : ";cin>>n;
                    
                    break;
                    case 2:
                    cout<<"------->> Output Car <<--------\n";
                    
                    break;
                    case 3:
                    cout<<"-------->> Search Car <<---------\n";
                    
                    break;
                    case 4:
                    cout<<"-------->> Delete Car<<---------\n";
                    
                    break;
                    case 5:
                    cout<<"------->> Update Car <<--------\n";
                    
                    break;
                }
                    cout<<"Press Any key to continue ..... ";
                    getch();
            break;
            case 3:
            system("cls");
            cout<<"----------->> PassApp <<---------\n";
            menu();
            cin>>op4;
                switch(op4){
                    case 1 :
                    cout<<"------>> Input PassApp <<-------\n";
                    cout<<"-->> How many you want : ";cin>>n;

                    break;
                    case 2:
                    cout<<"------->> Output PassApp<<--------\n";
                        
                    break;
                    case 3:
                    cout<<"-------->> Search PassApp <<---------\n";
                        
                    break;
                    case 4:
                    cout<<"-------->> Delete PassApp <<---------\n";
                        
                    break;
                    case 5:
                    cout<<"------->> Update PassApp <<--------\n";
                        
                    break;
                }
                    cout<<"Press Any key to continue ..... ";
                    getch();
            break;
            case 4:
            exit(0);
            break;
        }
    }while(op!=5);


    return 0;
}