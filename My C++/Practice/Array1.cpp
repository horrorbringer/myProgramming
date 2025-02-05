#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main (){
    system("clear");
    int id[100], qty[100], idTmp, qtyTmp;
    string name[100], nameTmp;
    float price[100], priceTmp;
    int option;
    int n=0, i,j,isSearch, isDelete ,isUpdate ;
    do{
        cout<<"1.Input"<<endl;;
        cout<<"2.Output"<<endl;
        cout<<"3.Search"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Update"<<endl;
        cout<<"6.Sort name (A->Z)"<<endl;
        cout<<"7.Sort name (Z->A)"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Input your choice (1->8): ";cin>>option;
        switch(option){
            case 1:
                cout<<"========== Input produce info ========="<<endl;
                cout<<"Input produce id : ";cin>>id      [n];
                cout<<"Input produce name : ";cin.clear();cin.ignore();getline(cin,name[n] );
                cout<<"Input produce qty : ";cin>>qty    [n] ;
                cout<<"Input prodrce price : ";cin>>price[n] ;
                n++;
                break;
            case 2:
                cout<<"========== Output produce info ========="<<endl;
                cout<<setw(10)<<"ID";
                cout<<setw(10)<<"Name";
                cout<<setw(10)<<"Qty";
                cout<<setw(10)<<"Price"<<endl;
                for(i=0; i<n ;i++){
                    cout<<setw(10)<<id      [i];
                    cout<<setw(10)<<name    [i];
                    cout<<setw(10)<<qty     [i];
                    cout<<setw(10)<<price   [i]<<endl;
                }
                break;
            case 3:
                cout<<"======== Search produce info ========="<<endl;
                cout<<"Input produce id to search : ";cin>>idTmp;
                isSearch = 0;
                for( i = 0 ; i < n ; i++ ){
                    if(idTmp ==id[i] ){
                        cout<<"Produce id "<<"<"<<idTmp<<">"<<" found in list"<<endl;
                        isSearch = 1;
                        break;
                    }
                }
                if(isSearch == 0){
                    cout<<"Produce id search not found !"<<endl;
                }
                break;
            case 4:
                cout<<"====== Delete produce info ========="<<endl;
                cout<<"Input produce id to delete :";cin>>idTmp;
                isDelete =0;
                for(i=0 ; i<n ; i++){
                    if(idTmp ==id[i]){
                        //22 == [3,4,333,22,44,55,333]
                        for( j = i ; j < n ; j++ ){
                            id      [j] = id    [j+1];
                            name    [j] = name  [j+1];
                            qty     [j] = qty   [j+1];
                            price   [j] = price [j+1];
                        }
                        n--;
                        isDelete = 1;
                    }
                }
                if(isDelete ==0){
                    cout<<"Delete not complete!"<<endl;
                }else{
                    cout<<"Delete complete!"<<endl;
                }
                break;
            case 5:
                cout<<"======= Search produce info ======="<<endl;
                cout<<"Input id to update :";cin>>idTmp;
                // [23,44,55,66,77,44,3333]
                isUpdate = 0;
                for(i = 0 ; i < n ; i++){
                    if(idTmp == id[i]){
                        cout<<"Input new produce name : ";cin>>name[i];
                        cout<<"Input new qty : ";cin>>qty[i];
                        cout<<"input new price : ";cin>>price[i];
                        isUpdate = 1;
                        break;
                    }
                }
                if(isUpdate == 0){
                    cout<<"Update not complete!"<<endl;
                }else{
                    cout<<"Update complete!"<<endl;
                }
                break;
            case 6:
                cout<<"======= Sort produce name A->Z ======="<<endl;
                for(i = 0 ; i < n; i++){
                    for(j = i + 1; j < n ;j++ ){
                        if(name[i] > name[j]){
                            idTmp = id[i];
                            id[i] = id[j];
                            id[j] = idTmp;

                            nameTmp = name[i];
                            name[i] = name[j];
                            name[j] = nameTmp;

                            qtyTmp = qty[i];
                            qty[i] = qty[j];
                            qty[j] = qtyTmp;

                            priceTmp = price[i];
                            price[i] = price[j];
                            price[j] = priceTmp;

                        }
                    }
                }
                cout<<"Sort name A->Z completed!"<<endl;
                break;
            case 7:
                cout<<"======= Sort produce name Z->A ======="<<endl;
                for(i = 0 ; i < n; i++){
                    for(j = i + 1; j < n ;j++ ){
                        if(name[i] < name[j]){
                            idTmp = id[i];
                            id[i] = id[j];
                            id[j] = idTmp;

                            nameTmp = name[i];
                            name[i] = name[j];
                            name[j] = nameTmp;

                            qtyTmp = qty[i];
                            qty[i] = qty[j];
                            qty[j] = qtyTmp;

                            priceTmp = price[i];
                            price[i] = price[j];
                            price[j] = priceTmp;

                        }
                    }
                }
                cout<<"Sort name Z->A completed!"<<endl;
                break;
            case 8:
                exit(0);      
        }
    }while (option!=8 );
    return 0;
}