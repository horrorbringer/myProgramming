
#include <iostream> 
#include <string> 
#include <iomanip>
#include <conio.h>


using namespace std; 


void menu()  
{
    cout<<"\t :(******* ): DIN RASIN 168 :( ******** ): \n";
    cout<<"\t :(******* ): DIN RASIN 168 :( ******** ): \n";
    cout<<"\t\t\t ================    ===============    ===============   ============== "<<endl;
    cout<<"\t\t\t | 1/.MOTORBIKE  |   |   2/. CAR   |    | 3/.PASSAPP   |  |  4/.EXIT    |"<<endl; 
    cout<<"\t\t\t ================    ===============    ===============   ============== "<<endl<<endl;
   
   
}
class RasinAuto168{
public:
  int n,i;
  bool isfound;
  int id_search,op_search,op_update,id_update,name_update,id_delete,all_update;
  string name_search;
  int id[100];
  int price[100];
  string name[100];
  string made_in[100];
  string year[100];
  string color[100];
  string model[100];
public:

  void input(){ 
    cout<<"\t ) : ******** INPUT  : ( ********* \n";
    cout<<"\t How many product do you want to buy : ";
    cin>>n;
    for(int i = 0; i < n; i++){
      cout<<"\tNo" << i + 1 << endl;
      cout<<"\t Enter id:";
      cin>>id[i];
      cout<<"\t Enter name:";
      cin>>name[i];  
      cout<<"\t Enter made_in:";
      cin>>made_in[i];  
      cout<<"\t Enter year:";
      cin>>year[i];
      cout<<"\t Enter color:";
      cin>>color[i];
      cout<<"\t Enter model:";
      cin>>model[i];
      cout<<"\t Enter price:";
      cin>>price[i];
      cout<<endl<<"\t  Press any key to continue ....... !! ";
    }
  }

    
void list(){
        cout<<"\t) : ********  LIST : ( *********\n"; 
            for(int i = 0; i < n; i++){                     
                cout<<"\tNo" << i + 1 << endl;
                cout<<"\t Enter id:"<<id[i]<< endl;
                cout<<"\t Enter name:"<<name[i]<< endl;  
                cout<<"\t Enter made_in:"<<made_in[i]<< endl;  
                cout<<"\t Enter year:"<<year[i]<< endl;
                cout<<"\t Enter color:"<<color[i]<< endl;
                cout<<"\t Enter model:"<<model[i]<< endl;
                cout<<"\t Enter price :"<<price[i]<< endl;
              }
}


void search(){ 
        search1:
             cout<<"\t ) : ******** SEARCH : ( ********* \n";
             cout<<"\t=======>>>1.Search by id\n";
             cout<<"\t=======>>>2.Search by name\n";
             cout<<"choose the option: ";
             cin>>op_search;
                    switch(op_search){
                            case 1:
                             cout<<"Enter id to search: ";
                             cin>>id_search;
                             isfound=0;
                             for( i= 0;i<n;i++){
                                if(id_search==id[i]){
                                        cout<<"\tNo:" <<i+1<< endl;
                                            cout<<"\t Enter id:"<<id[i]<<endl;
                                            cout<<"\t Enter name:"<<name[i]<<endl;
                                             cout<<"\t Enter made_in:"<<made_in[i];   
                                            cout<<"\t Enter year:"<<year[i]<<endl;
                                            cout<<"\t Enter color:"<<color[i]<<endl;
                                            cout<<"\t Enter model:"<<model[i]<<endl;
                                            cout<<"\t Enter price :"<<price[i]<<endl;
                                           
                                        isfound = 1;
                                        break;
                                }
                         }
                                if(isfound==0){
                                        cout<<"\tSearch is not found!!\n";
                                        goto search1;
                            }

                            break;

                            case 2:
         search2:
                                        cout<<"Enter name to search: ";
                                        cin>>name_search;
                                        isfound=0;
                                         for(int i = 0; i < n; i++){
                                               if(name_search==name[i]){
                                                cout<<"\t Enter id:";
                                                cin>>id[i];
                                                cout<<"\t Enter name:"<<endl;
                                                cin>>name[i];  
                                                 cout<<"\t Enter made_in:"<<endl;
                                                cin>>made_in[i];                
                                                cout<<"\t Enter year:"<<endl;
                                                cin>>year[i];
                                                cout<<"\t Enter color:"<<endl;
                                                cin>>color[i];
                                                cout<<"\t Enter model:"<<endl;
                                                cin>>model[i];
                                                cout<<"\t Enter price:"<<endl;
                                                cin>>price[i];
                                                isfound = 1;
                                                break;
                                               }
                                       }
                                               if(isfound==0){
                                            cout << "\tSearch is not found!!\n";
                                            goto search2;
                                         }

                            break;
                    }
                 }

void update(){
        cout<<"\t ):====>> Update Product <=====\n";
        cout<<"\t ):====>> 1.Update ID\n";
        cout<<"\t ):====>> 2.Update Name\n";
        cout<<"\t ):====>> 3.Update made_in\n";
        cout<<"\t ):====>> 4.Update year\n";
        cout<<"\t ):====>> 5.Update color\n";
        cout<<"\t ):====>> 5.Update model\n";
        cout<<"\t ):====>> choose the option\n";
        cin>>op_update;
        id_update:
            switch(op_update){
                case 1:
                id_update;
                  cout<<"\t) : ******** UPDATE : ( ********* \n";
                    cout<<"\tEnter id to update: ";
                      cin>>id_update;
                      isfound=0;
                      for(i=0;i<n;i++){ 
                      if(id_update == id[i]){
                        cout<<"\tNo="<<i+1<<endl;
                        cout<<"Product id= "<<id[i]<<endl;
                        cout<<"\tEnter New Id: ";
                        cin>>id[i];
                        isfound=1;
                        break;
                      }
                        }if (isfound==0){
                        cout<<"\tProduct id is not found\n";
                        
                        goto id_update;
                        break;
                   }    
                   case 2:
                    name_update:
                     cout<<"\t) : ******** UPDATE  NAME : ( ********* \n";
                     cout<<"\tEnter id to update Name: ";
                      cin>>id_update;
                      isfound=0;
                      for(i=0;i<n;i++){
                      if(id_update == id[i]){
                        cout<<"\tNo="<<i+1<<endl;
                        cout<<"Product name= "<<name[i]<<endl;
                        cout<<"\tEnter New name: ";
                        cin>>name[i];
                        isfound=1;
                        break;
                      }
}if (isfound==0){
                        cout<<"\tProduct id is not found\n";
                        }
                        goto name_update;
                   break;
            
                   case 3:
                   price_update:
                    cout<<"\t) : ******** UPDATE PRICE : ( ********* \n";
                     cout<<"\tEnter id to update made_in: ";
                      cin>>id_update;
                      isfound=0;
                      for(i=0;i<n;i++){
                      if(id_update == id[i]){
                        cout<<"\tNo="<<i+1<<endl;
                        cout<<"Product made_in= "<<made_in[i]<<endl;
                        cout<<"\tEnter New price: ";
                        cin>>made_in[i];
                        isfound=1;
                        break;
                      }
                        }if (isfound==0){
                        cout<<"\tProduct id is not found\n";
                      }
                        goto price_update;
                   break;
                   case 4:
                     cout<<"\t) : ******** UPDATE PRICE : ( ********* \n";
                     cout<<"\tEnter id to update year: ";
                      cin>>id_update;
                      isfound=0;
                      for(i=0;i<n;i++){
                      if(id_update == id[i]){
                        cout<<"\tNo="<<i+1<<endl;
                        cout<<"Product qty= "<<year[i]<<endl;
                        cout<<"\tEnter New price: ";
                        cin>>year[i];
                        isfound=1;
                        break;
                      }
                        }if (isfound==0){
                        cout<<"\tProduct id is not found\n";
                        
                      }
                        goto price_update;
                   break; 
                        case 5:
                        all_update:
                        cout<<"\t ****** ): > UPDATE All :(******* \n";
                        cout<<"\tEnter id to update:";
                        cin>>id_update;
                        isfound=0;
                          for(i=0;i<n;i++){
                               if(id_update == id[i]){
                                 cout<<"\tNo="<<i+1<<endl;
                                  cout<<"\tProduct id="<<id[i]<<endl;
                                  cout<<"\tProduct name="<<name[i]<<endl;
                                  cout<<"\tProduct price="<<made_in[i]<<endl;
                                  cout<<"\tProduct year="<<year[i]<<endl;
                                  cout<<"\tProduct color="<<color[i]<<endl;
                                  cout<<"\tProduct model="<<model[i]<<endl;
                                  cout<<"\tProduct price="<<price[i]<<endl;
                                  
                                  cout<<"\tNo="<<i+1<<endl;
                                  cout<<"\tEnter The New Product id:";
                                  cin>>id[i];
                                  cout<<"\tEnter The New Product name:";
                                  cin>>name[i];
                                  cout<<"\tEnter The New Product made_in:";
                                  cin>>made_in[i];
                                  cout<<"\tEnter The New Product year:";
                                  cin>>year[i];
                                  cout<<"\tEnter The New Product color:";
                                  cin>>color[i];
                                  cout<<"\tEnter The New Product model:";
                                  cin>>model[i];
                                  cout<<"\tEnter The New Product price:";
                                  cin>>price[i];
                                  isfound=1;
                            }
                        }if(isfound == 0){
                          cout<<"\tId is not found\n";
                          goto all_update;
                        }
                    break;
            }
                      }
void Delete(){
  delete1:
  cout<<"\t ****** ): > UPDATE All :(******* \n";
  cout<<"\tEnter id to delete:"; 
  cin>>id_delete;                                 
                        
      for(i=0;i<n;i++){ 
        if(id_delete==id[i]){
for(int j=1;j<n;j++){  
            id[j] = id[j+1]; 
            name[j] = name[j+1];
            made_in[j]= made_in[j+1];
            year[j] = year[j+1];
            color[j] = color[j+1];
            model[j] = model[j+1];
          }
          n--;
          isfound=1;
        }
  }if(isfound == 0){
    cout<<"\tDelete is not complete!!\n";
    goto delete1;
  }else{
    cout<<"\tDelete is completed\n";
  }
}   
};          
void login(){
  string username,password;
        login:
        cout<<"\tEnter username:";
        cin>>username;
        cout<<"\tEnter password:";
        cin>>password;
        if(username=="Rasin" && password=="9394"){
          cout<<"\tWelcome to the system!!\n";
        }else{
          cout<<"\tWrong Enter!\n";
          goto login;
        }

      }  
            
int main(){
  system("cls");
  RasinAuto168 moto,car ,passapp;
    int option;
    login();
    system("cls");
    do{
      menu();
      option:
      cout<<"\tChoose the option\n";
      cin>>option;
              switch(option){
                  case 1:
                      cout << "======== Motobike ========\n";
                      cout<<"\t1.Input";
                      cout<<"\t2.List";
                      cout<<"\t3.Search";
                      cout<<"\t4.Update";
                      cout<<"\t5.Delete";
                      cout<<"\t6.Exit"<<endl;
                      cout<<"choose the option:"<<endl;
                        int opo;
                        cin>>opo;
                        switch (opo){
                            case 1:
                                moto.input();
                                break;
                                    case 2:
                                     moto.list();
                                      break;
                                      case 3:
                                        moto.search();
                                          break;
                                         case 4:
                                            moto.update();
                                              break;
                                               case 5:
                                                 moto.Delete();
                                                  break;
                                                   default:
                                                   cout<<"wrong input";
                                                                                              
                                }               
                               break ; 
                 case 2:       
                      cout << "========== Car ========\n";               
                      cout<<"\t1.Input";
                      cout<<"\t2.List";
                      cout<<"\t3.Search";
                      cout<<"\t4.Update";
                      cout<<"\t5.Delete";
                      cout<<"\t6.Exit"<<endl;
                      cout<<"choose the option:"<<endl;
                        int opt;
                        cin>>opt;
                        switch (opt){
                            case 1:
                                car.input();
                                break;
                                    case 2:
                                     car.list();
                                      break;
                                      case 3:
                                        car.search();
                                          break;
                                         case 4:
                                            car.update();
                                              break;
                                               case 5:
                                                 car.Delete();
                                                  break;
                                                   default:
                                                   cout<<"wrong input";
                                                                                              
                                }               
                            break ;
                       
                   case 3:
                      cout << "========= Passapp =========\n";
                        cout<<"\t1.Input";
                        cout<<"\t2.List";
                        cout<<"\t3.Search";
                        cout<<"\t4.Update";
                        cout<<"\t5.Delete";
                        cout<<"\t6.Exit"<<endl;
                        cout<<"choose the option:"<<endl;
                          int optr;
                          cin>>optr;
                          switch (optr){
                              case 1:
                                  passapp.input();
                                  break;
                                      case 2:
                                      passapp.list();
                                      break;
                                        case 3:
                                          passapp.search();
                                            break;
                                          case 4:
                                              passapp.update();
                                                break;
                                                case 5:
                                                  passapp.Delete();
                                                    break;
                                                    default:
                                                    cout<<"wrong input";
                                                                                                
                                     }               
                              break ;
                            
                                  case 4:
                                         exit(0);
                                           break;
                                           default:
                                            cout<<"\tWrong Options!!!\n";
                                             goto option;

                                              }
                                                  getch();
                                                  system("cls");
    }while(option!=5);
                                                
    
  return 0;

}