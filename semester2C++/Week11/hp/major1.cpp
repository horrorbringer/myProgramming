#include<iostream>
using namespace std;
void lg(){
    string username;
    string password;
    cout<<"\t====>>Login<<====\n";
    cout<<"\tEnter Username:";
    cin>>username;
    cout<<"\tEnter Password:";
    cin>>password;
    if (username=="Admin"&&password=="1234"){
        cout<<"\tWelcome to 168 Auto Garage\n";
    }else{
        cout<<"\tWrong Username or Password\n";
    }
}
class Shop169{
    protected:
        string name[100];
        int id[100];
        int year[100];
        string made_in[100];
        string color[100];
        float price[100];
        bool isfound;
        int op, id_search,op_update,id_update,id_delete;
        int i,n=0,j,x;
    public:
        void input(){
            cout<<"\t====>>do you want to input\n";
            cin>>x;
            for(int i=0;i<x;i++){
                cout<<"\t No="<<i+1<<endl;
                cout<<"\tEnter Name:";
                cin>>name[n];
                cout<<"\tEnter Id:";
                cin>>id[n];
                cout<<"\tEnter Year:";
                cin>>year[n];
                cout<<"\tEnter Made In:";
                cin>>made_in[n];
                cout<<"\tEnter Color:";
                cin>>color[n];
                cout<<"\tEnter Price:";
                cin>>price[n];
                n++;
            }
        }
        void List(){
            for(i=0;i<n;i++){
                cout<<"\t No="<<i+1<<endl;
                cout<<"\tName="<<name[i]<<endl;
                cout<<"\tId="<<id[i]<<endl;
                cout<<"\tYear="<<year[i]<<endl;
                cout<<"\tMade In="<<made_in[i]<<endl;
                cout<<"\tColor ="<<color[i]<<endl;
                cout<<"\tPrice="<<price[i]<<"$"<<endl;
            }
        }
        void search(){
                search:
                cout<<"\t Enter id to search:";
                cin>>id_search;
                isfound=0;
                    for(int i=1;i<n;i++){
                        if(id_search == id[i]){
                            cout<<"\t No="<<i+1<<endl;
                            cout<<"\tPorduct Name="<<name<<endl;
                            cout<<"\tProduct id="<<id<<endl;
                            cout<<"\tProduct price="<<price<<"$"<<endl;
                            cout<<"\tYear="<<year<<endl;
                            cout<<"\tMade In="<<made_in<<endl;
                            cout<<"\tPrice="<<price<<"$"<<endl;
                            isfound=1;
                            break;
                        }
                    }if(isfound==0){
                        cout<<"\tSearch not fount\n";
                    goto search;
                }
        }
        void update(){
            isfound=0;
            all_update:
            cout<<"\t====>>Update All<<====\n";
            cout<<"\t Enter id to update:";
            cin>>id_update;
            for(int i=1;i<n;i++){
                if(id_update == id[i]){
                    cout<<"\t No="<<i+1<<endl;
                    cout<<"\tPorduct Name="<<name[i]<<endl;
                    cout<<"\tProduct id="<<id[i]<<endl;
                    cout<<"\tEnter Year:"<<year[i]<<endl;
                    cout<<"\tMade In="<<made_in[i]<<endl;
                    cout<<"\tProduct price="<<price[i]<<"$"<<endl;
                    cout<<"\tProduct color="<<color[i]<<endl;
                    cout<<"\t No="<<i+1<<endl;
                    cout<<"\tEnter Name:";
                    cin>>name[i];
                    cout<<"\tEnter Id:";
                    cin>>id[i];
                    cout<<"\tEnter Year:";
                    cin>>year[i];
                    cout<<"\tEnter Made In:";
                    cin>>made_in[i];
                    cout<<"\tEnter Color:";
                    cin>>color[i];
                    cout<<"\tEnter Price:";
                    cin>>price[i];        
                    isfound=1;
                    break;
                }
        }
        if(isfound == 0){
            cout<<"\tId not found\n";
            goto all_update;
        }
        }
        void Delete(){
        delete1:
        cout<<"====>>Delete Product<<====\n";
        cout<<"\t Enter id to Delete:";
        cin>>id_delete;
            for(i=0;i<n;i++){
                if(id_delete == id[1]);
                    for(int j=i;j<n;j++){
                        id[j] = id[j+1];
                        name[j] = name[j+1];
                        year[j]=year[j];
                        made_in[j]=made_in[i];
                        color[j]=color[j];
                        price[j] = price[j+1];
                    }
                    n--;
                    isfound=1;
            
            }if(isfound==0){
                cout<<"\tDelete is not complete!!\n";
                goto delete1;
            }
        }
};

int main(){
    int option,op;
    Shop169 Moto,Car,Pass;
    lg();
    do{
        cout << "[1] MOTOBIKE      [2] CAR      [3] PASS APP     [4] EXIT\n";
        cout << "Please select: ";cin >> option;
        switch(option){
            case 1:
                cout << "1.input motobik\n";
                cout << "2.output motobike\n";
                cout << "3.Search motobike\n";
                cout << "4.update motobike\n";
                cout << "5.delete motobike\n";
                cout << "Please choose: ";cin>>op;
                switch (op){
                    case 1: 
                        Moto.input();
                    break;
                    case 2: break;
                    case 3: break;
                    case 4: break;
                    case 5: break;
                }
            break;
            case 2:
                cout << "1.input motobik\n";
                cout << "2.output motobike\n";
                cout << "3.Search motobike\n";
                cout << "4.update motobike\n";
                cout << "5.delete motobike\n";
                cout << "Please choose: ";cin>>op;
                switch (op){
                    case 1: 
                        Car.input();
                    break;
                    case 2: break;
                    case 3: break;
                    case 4: break;
                    case 5: break;
                }
            break;
            case 3:
                cout << "1.input motobik\n";
                cout << "2.output motobike\n";
                cout << "3.Search motobike\n";
                cout << "4.update motobike\n";
                cout << "5.delete motobike\n";
                cout << "Please choose: ";cin>>op;
                switch (op){
                    case 1: 
                        Pass.input();
                    break;
                    case 2: break;
                    case 3: break;
                    case 4: break;
                    case 5: break;
                }
            break;
        }
    }while(option !=0);
    return 0;
}