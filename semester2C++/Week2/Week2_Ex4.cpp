#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;

int id[100],n=0,op,id_tmp,x;
string name[100],name_search,name_tmp;
int qty[100],id_saerch,tmp_qty;
float price[100],tmp_price;
bool isSearch,sortName,deletePro;
char p = 95, q = 124, r= 218 ;

// 1.insert , 2.display , 3.search(by id,name) 4.update(name,id,price,qty,all) ,5.delete(id,), 6,sort(name,id) 7.exit

void Table(){
    for(int i = 1; i <= 81; i++){
        if(i==1 ){
            cout <<q;
        }else if(i==6 ){
            cout <<q;
        }else if( i==17 ){
            cout <<q;
        }else if(i==49){
            cout <<q;
        }  else if(i==65){
            cout <<q;
        }else if(i==81){
            cout <<q;
        }else{
        cout <<p;
        }
    }
    cout <<endl;
}
void Menu(){
    cout << "\n\t\t--------------> BIU SHOP <--------------\n";
    cout << "\t\t1.Insert Product\n";
    cout << "\t\t2.Display Product\n";
    cout << "\t\t3.Search Product\n";
    cout << "\t\t4.Sort Product\n";
    cout << "\t\t5.Updat Product\n";
    cout << "\t\t6.Delete Product\n";
    cout << "\t\t7.Exit\n";
}
void Insert(){
    cout << "\n\t------------> Insert Product detail <---------------\n";
    cout <<"\tHow many product do you want to input: ";
    cin >> x;
    for(int i = 0; i < x; i++){
        cout << "\tNo = "<<n+1<<endl;
        cout << "\tEnter Product id:      ";
        cin >>       id[n];
        cout << "\tEnter Procut name:     ";
        cin.ignore();getline(cin,name[n]);
        cout << "\tEnter Product price:   ";
        cin >>    price[n];
        cout << "\tEnter Product Quatity: ";
        cin >>      qty[n];
        cout << " \n";
        n++;
    }
}  
void Display(){
    cout << "\n\t\t---------------> Display Product <--------------\n\n";
    cout <<"_________________________________________________________________________________\n";
    cout << "| No |"<<"\tID"<<"\t| NAME"<<"\t\t\t\t| PRICE"<<"\t\t| QUANITY\t|\n";
    Table();
    // cout << "|____|__________|_______________________________|_______________|_______________|\n";
    for(int i = 0; i < n ; i++){
        cout <<"| "<<i+1<<"  |";
        cout << "\t"    <<   id[i];    
        cout << "\t| "<< name[i];      
        cout << "\t\t\t\t| "  <<price[i];        
        cout << "\t\t| "    <<  qty[i]<<"\t\t|"<<endl;
        Table();
    }
}
void Search(){
    cout << "\n\t--------------> Search Product <--------------\n";
    cout << "\t1.Search by id\n";
    cout << "\t2.Search by name\n";
    cout << "\tChoose option: ";
    cin >> op;
    switch(op){
        case 1:
            isSearch = 0;
            search:
            cout << "\t------------> Search Product by id <--------------\n";
            cout << "\tEnter id: ";cin >> id_saerch;
            cout <<"_________________________________________________________________________________\n";
            cout << "| No |"<<"\tID"<<"\t|\tNAME"<<"\t\t\t|\tPRICE"<<"\t|\tQUANITY\t|\n";
            Table();
            for(int i = 0; i < n; i++){
                if(id_saerch == id[i]){
                    cout <<"| "<<i+1<<"  |";
                    cout << "\t"    <<   id[i];    
                    cout << "\t|\t"    << name[i];      
                    cout << "\t\t\t|\t"  <<price[i];        
                    cout << "\t|\t"    <<  qty[i]<<"\t|"<<endl;
                    Table();
                    isSearch = 1;
                    cout << "\tPress any key to continue...!\n";
                    getch();
                    break;
                }
            }
            if(isSearch == 0){
                cout << "\tThis id "<<id_saerch<<" search no found!!!\n";
                goto search; 
            }
        break;
        case 2:
            isSearch = 0;
            search1:
            cout << "\t------------> Search Product by name <--------------\n";
            cout << "\tEnter name do you want search: ";cin.ignore();getline(cin,name_search);
            cout <<"_________________________________________________________________________________\n";
            cout << "| No |"<<"\tID"<<"\t|\tNAME"<<"\t\t\t|\tPRICE"<<"\t|\tQUANITY\t|\n";
            Table();
            for(int i = 0; i < n; i++){
                if(name_search == name[i]){
                    cout <<"| "<<i+1<<"  |";
                    cout << "\t"    <<   id[i];    
                    cout << "\t|\t"    << name[i];      
                    cout << "\t\t\t|\t"  <<price[i];        
                    cout << "\t|\t"    <<  qty[i]<<"\t|"<<endl;
                    Table();
                    isSearch = 1;
                    cout << "\tPress any key to continue...!\n";
                    getch();
                    break;
                }
            }
            if(isSearch == 0){
                cout << "\tThis name "<<name_search<<" search not found!!!\n";
                goto search1;
            }
        break;
    }
}
void Sort(){
    cout << "\n\t---------------> Sort <---------------\n";
    cout << "\t1.Sort Product by id\n";
    cout << "\t2.Sort Product by name\n";
    cout << "\tChoose option: ";cin >> op;
    switch(op){
        case 1:
            sortName = 0;
            cout << "\t------------> Sort Product by id <-----------\n";
            for(int i = 0; i < n - 1; i++){
                for(int j = i + 1; j < n; j++){
                    if( id[i]  >  id[j]){
                        id_tmp = id[i];
                        id[i]  = id[j];
                        id[j]  = id_tmp;

                        name_tmp=name[i];
                        name[i]=name[j];
                        name[j]=name_tmp;

                        tmp_price=price[i];
                        price[i]=price[j];
                        price[j]=tmp_price;

                        tmp_qty=qty[i];
                        qty[i]=qty[j];
                        qty[j]=tmp_qty;
                        sortName = 1;
                    }
                }
            }
            if(sortName == 1){
                cout << "\tSort id completed!\n";
            }else{
                cout << "\tSort id not completed!\n";
            }
        break;
        case 2:
            sortName = 0;
            cout << "\t------------> Sort Product by name(A->Z) <-----------\n";
            for(int i = 0; i < n - 1; i++){
                for(int j = i + 1; j < n; j++){
                    if(name[i] > name[j]){
                        name_tmp = name[i];
                        name[i]  = name[j];
                        name[j]  = name_tmp;

                        id_tmp = id[i];
                        id[i]  = id[j];
                        id[j]  = id_tmp;

                        tmp_price = price[i];
                        price[i]  = price[j];
                        price[j]  = tmp_price;

                        tmp_qty = qty[i];
                        qty[i]  = qty[j];
                        qty[j]  = tmp_qty;

                        sortName = 1;
                    }
                }
            }
            if(sortName == 1){
                cout << "\tSort id completed!\n";
            }else{
                cout << "\tSort id not completed!\n";
            }
    }
}
void Update(){
    agian:
    cout << "\n\t-----------------> Update <-------------------\n";
    cout << "\t1.Update name\n";
    cout << "\t2.Update id\n";
    cout << "\t3.Update price\n";
    cout << "\t4.Update qty\n";
    cout << "\t5.Update all\n";
    cout << "\tChoose option: ";
    cin >> op;
    switch(op){
        case 1:
            isSearch = 0;
            cout << "\n\t-------------> Update name <-----------------\n";
            cout << "\tEnter id do you want update: ";cin>>id_tmp;
            for(int i = 0; i < n; i++){
                if(id_tmp == id[i]){
                    cout << "\tEnter new name: ";cin.ignore();getline(cin,name[i]);
                    isSearch = 1;
                    break;
                }
            }
            if(isSearch == 0){
                cout << "\tThis id "<< id_tmp <<" can't be found in the list\n";
            }
            break;
        case 2:
            isSearch = 0;
            cout << "\n\t-------------> Update id <----------------\n";
            cout << "\tEnter id do you want update: ";cin >> id_tmp;
            for(int i = 0; i < n; i++){
                if(id_tmp == id[i]){
                    cout << "\tEner new Id: ";cin>> id[i];
                    isSearch = 1;
                    break;
                }
            }
            if(isSearch == 0){
                cout << "\tThis id "<< id_tmp <<" can't be found in the list\n";
            }
            break;
        case 3:
            isSearch = 0;
            cout << "\n\t---------------> Update price <---------------\n";
            cout << "\tEnter id do you want update: ";cin >> id_tmp;
            for(int i = 0; i < n; i++){
                if(id_tmp == id[i]){
                    cout << "\tEnter new price: ";cin>> price[i];
                    isSearch = 1;
                    break;
                }
            }
            if(isSearch == 0){
                cout << "\tThis id "<< id_tmp <<" can't be found in the list\n";
            }
            break;
        case 4:
            isSearch = 0;
            cout << "\n\t---------------> Update quanity <---------------\n";
            cout << "\tEnter id do you want update: ";cin >> id_tmp;
            for(int i = 0; i < n; i++){
                if(id_tmp == id[i]){
                    cout << "\tEnter new quanity: ";cin>> qty[i];
                    isSearch = 1;
                    break;
                }
            }
            if(isSearch == 0){
                cout << "\tThis id "<< id_tmp <<" can't be found in the list\n";
            }
            break;
        case 5:
            isSearch = 0;
            cout << "\n\t---------------> Update all <-----------------\n";
            cout << "\tEnter id to update all: ";cin >> id_tmp;
            cout <<"_________________________________________________________________________________\n";
            cout << "| No |"<<"\tID"<<"\t|\tNAME"<<"\t\t\t|\tPRICE"<<"\t|\tQUANITY\t|\n";
            Table();
            for(int i = 0; i < n; i++){
                if(id_tmp == id[i]){
                    cout <<"| "<<i+1<<"  |";
                    cout << "\t"    <<   id[i];    
                    cout << "\t|\t"<< name[i];      
                    cout << "\t\t\t|\t"  <<price[i];        
                    cout << "\t|\t"    <<  qty[i]<<"\t|"<<endl;
                    Table();

                    cout << "\n";
                    cout << "\tNo = "<<n+1<<endl;
                    cout << "\tEnter new Id:         ";cin>> id[i];
                    cout << "\tEnter new name:       ";cin.ignore();getline(cin,name[i]);
                    cout << "\tEnter new price:      ";cin>> price[i];
                    cout << "\tEnter new quanity:    ";cin>> qty[i];
                    isSearch = 1;
                    break;
                }
            }
            break;
        default:
        cout << "\tWrong option\n";
        goto agian;
    }
}
void Delete(){
    deletePro = 0;
    cout << "\n\t---------------> Delete <-----------------\n";
    cout << "\tEnter id do you want delete: ";cin >> id_saerch;
    for(int i = 0; i < n; i++){
        if(id_saerch == id[i]){
            id[i] = id[i+1];
            name[i] = name[i+1];
            price[i] = price[i+1];
            qty[i] = qty[i+1];
            n--;
            deletePro = 1;
        }
    }
    if(deletePro == 0){
        cout << "\tCan not found this id "<<id_saerch<<" in list...!\n";
    }else{
        cout << "\tDelet completed!\n";
    }
}
 
int main(){
    system("cls");
    do{
    Menu();
    cout <<fixed<<showpoint<<setprecision(2);
    cout << "\n\t\tChoose option: ";
    cin >> op;
    switch(op){
        case 1:
            Insert();
            break;
        case 2:
            Display();
            break;
        case 3:
            Search();
            break;
        case 4:
            Sort();
            break;
        case 5:
            Update();
            break;
        case 6:
            Delete();
            break;
    }
    cout << "\n\tPress any key to continue...!\n";
    getch();
    system("cls");
    }while( op != 7);
    return 0;
}