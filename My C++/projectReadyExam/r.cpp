#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

string user;
int password;
int id_search , id_update;
int i,n;
bool isfound;

void log(){
    logg:
    cout<<"------->> Login <<----------\n";
    cout<<" Enter Username : ";cin>>user;
    cout<<" Enter Password : ";cin>>password;
    if(user == "sal" && password == 2233){
        cout<<"\t log complete \n";
    }else{
        cout<<" log fail : \n";
        goto logg;
    }
}


class shop{
    protected:
    string model[100],color[100];
    float price[100];
    string made_in[100];
    int made_in_year[100],id[100];

    public:

    void input(){
        for(i=0 ; i<n ; i++){
        cout<<" No : "<<i+1<<endl;
        cout<<" Enter Color : ";cin>>color[i];
        cout<<" Enter ID : ";cin>>id[i];
        cout<<" Enter Model : ";cin>>model[i];
        cout<<" Enter made in :";cin>>made_in[i];
        cout<<" Enter made_in_year : ";cin>>made_in_year[i];
        cout<<" Enter Price ";cin>>price[i];
        }
    }

    void list(){

        for(i=0 ; i<n ; i++){
        cout<<" Model : "<<model[i]<<endl;
        cout<<" ID Model :"<<id[i]<<endl;
        cout<<" Color : "<<color[i]<<endl;
        cout<<" Made in : "<<made_in[i]<<endl;
        cout<<" Made_in_Year : "<<made_in_year[i]<<endl;
        cout<<" Price : "<<price[i]<<endl;
        }
    }


    void search(){

        search1:
        cout<<"\tEnter id to search:";
        cin>>id_search;
        for(i = 0; i < n; i++){
            if (id_search == id[i]){
                cout << "\tNo :" <<i+1<<endl;
                cout << "\tInformation id            :" <<id[i]<<endl;
                cout << "\tInformation Model         :" <<model[i]<<endl;
                cout << "\tInformation color         :" <<color[i]<<endl;
                break;
                }else{
                cout << "\tSearch Not found!!\n";
                goto search1;
                }
            }
        }

    void Delete(){
        deletePro:

        cout << "\tEnter id do you want delete: ";cin>>id_search;
        for(i = 0; i < n; i++){
            if(id_search == id[i]){
                id[i] = id[1];
                model[i] = "model[i]";
                made_in[i] = "made_in[i]";
                made_in_year[i] = made_in_year[i];
                color[i] = "color[i]";
                n--;
            }else{
            cout << "\tDelet Fail!\n";
            goto deletePro;
            }
        }   
    }
    void update(){
        Id_update:

        cout << "\tEnter id to update: ";
        cin>>id_update;
        isfound = 0;
        for (i=0;i<n;i++){
            if (id_update == id[i]){
            cout << "\tNo=" << i + 1 <<endl;
            cout << "\tid :" <<id[i] <<endl;
            cout << "\tEnter new  id: ";
            cin >> id[i];
            }else{
            cout << "\tId update not found!!\n";
            goto Id_update;
            }
        }

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
    log();
    shop mato,lan,toktok;
   int op,op2,op3,op4;
   int id;
    do{
    cout<<endl;
    cout<<"---------->> Shop <<----------\n";
    cout<<"|| 1.Motobike || "<<" || 2.car || "<<" || 3.Passapp || "<<" || 4.Exit ||"<<endl;
    cout<<setw(15)<<"----->> Choose your Opion : ";cin>>op;
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
                mato.input();
                break;
                case 2:
                cout<<"------->> Output Motobike <<--------\n";
                mato.list();
                break;
                case 3:
                cout<<"-------->> Search Motobike <<---------\n";
                mato.search();
                break;
                case 4:
                cout<<"-------->> Delete Motobike<<---------\n";
                mato.Delete();
                mato.list();
                break;
                case 5:
                mato.update();
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
                lan.input();
                break;
                case 2:
                cout<<"------->> Output Car <<--------\n";
                lan.list();
                break;
                case 3:
                cout<<"-------->> Search Car <<---------\n";
                lan.search();
                break;
                case 4:
                cout<<"-------->> Delete Car<<---------\n";
                lan.Delete();
                break;
                case 5:
                cout<<"------->> Update Car <<--------\n";
                lan.update();
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
                toktok.input();
                break;
                case 2:
                cout<<"------->> Output PassApp<<--------\n";
                toktok.list();
                break;
                case 3:
                cout<<"-------->> Search PassApp <<---------\n";
                toktok.search();
                break;
                case 4:
                cout<<"-------->> Delete PassApp <<---------\n";
                toktok.Delete();
                break;
                case 5:
                cout<<"------->> Update PassApp <<--------\n";
                toktok.update();
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
