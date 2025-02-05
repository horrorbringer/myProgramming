#include<iostream>
using namespace std;
int main(){
    int op ,n=0,i,idsearch , isSearch;
    int id[100];
    string name[100],gender[100];
    double salary[100];

    do{
        cout<<"1.Input staff"<<endl;
        cout<<"2.Output staff"<<endl;
        cout<<"3.Search staff"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Input your choice: ";cin>>op;
        switch(op){
            case 1:
                cout<<"============= Input Staff Information ============="<<endl;
                cout<<"Input staff id : ";cin>> id[n];
                cout<<"Input staff name : ";cin>>name[n];
                cout<<"Input staff gender : ";cin>>gender[n];
                cout<<"Input staff salary : ";cin>>salary[n];
                n++;
            break;
            case 2:
                cout<<"=========== List Staff ============"<<endl;
                for ( i = 0; i < n; i++)
                {
                    cout<<id[i]<<"\t";
                    cout<<name[i]<<"\t";
                    cout<<gender[i]<<"\t";
                    cout<<salary[i]<<endl;
                }
                
            break;
            case 3:
            cout<<"=========== Search Staff by id ============="<<endl;
            cout <<"Pleas Input staff id to search : ";cin>>idsearch;
            isSearch = 0;
                for(i=0 ; i<n ;i++){
                    if(idsearch == id[i]){
                        cout<<"<<<<<<<<<< Search Found >>>>>>>>>>"<<endl;
                        cout<<id[i]<<"\t";
                        cout<<name[i]<<"\t";
                        cout<<gender[i]<<"\t";
                        cout<<salary[i]<<endl;
                        isSearch == 1;
                        break;
                    }
                }
                if(isSearch == 0){
                    cout<<idsearch<<" not found in list. Please try agian "<<endl;
                }
            break;
            case 4:
            exit(0);
            break;
        }
    }while (op != 4);
}