#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int id[100],age[100] ,math[100],khmer[100],bilogy[100],cemestry[100],physic[100];
    
    string name[100] ,name_search;
    char gender[100];
    float socre_total[100],averge[500];
    int chase;
    int n = 0 , i , id_search , age_search , isid,isSearch; 
    do{
    cout<<"\t\t\tOption 1 Input Infomation"<<endl;
    cout<<"\t\t\tOption 2 Output Infomation"<<endl;
    cout<<"\t\t\tOption 3 Serch Name Infomation"<<endl;
    cout<<"\t\t\tOption 4 Serch ID Infomation"<<endl;
    cout<<"\t\t\tOption 5 Serch Age Infomation"<<endl;
    cout<<"\t\t\tOption 6 Serch Gender Infomation"<<endl;
    cout<<"\t\t\tOption 7 Serch Total Score Infomation"<<endl;
    cout<<"\t\t\tOption 8 Serch Averge Infomation"<<endl;
    cout<<"\t\t\tOption 9 Result"<<endl;
    cout<<"\t\t\tOption 0 Getout"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\tChoice chase 0 --> 9 : ";cin>>chase; 
    switch(chase){
        case 1:
            cout<<"\t=================================== Input Data ====================================\n";
            cout<<"\t\t\tEnter Your id : ";cin>>id                                    [n] ;
            cout<<"\t\t\tEnter Your name : ";cin.clear();cin.ignore();getline(cin,name[n]);
            cout<<"\t\t\tEnter Your age : ";cin>>age                                  [n] ;
            cout<<"\t\t\tEnter Your gender : ";cin>>gender                            [n] ; 
            cout<<"\t\t\tEnter Your score math : ";cin>>math                          [n] ;
            cout<<"\t\t\tEnter Your score khmer : ";cin>>khmer                        [n] ;
            cout<<"\t\t\tEnter Your score bilogy : ";cin>>bilogy                      [n] ;
            cout<<"\t\t\tEnter Your score cemestry : ";cin>>cemestry                  [n] ;
            cout<<"\t\t\tEnter Your score physic : ";cin>>physic                      [n] ;
            socre_total[n] = math[n]+khmer[n]+bilogy[n]+cemestry[n]+physic[n];
            averge[n] = socre_total[n]/5;
                if(averge[n] <500 && averge[n] >=400){
                    cout<<"\tYour Total Score : "<<socre_total[n]<<endl;
                    cout<<"\tYour Averge Is : "<<averge[n]<<endl;
                    cout<<"\tYour Rank is Exellent!\n";
                }else if(averge[n] <400 && averge[n] >=300){
                    cout<<"\tYour Total Score : "<<socre_total[n]<<endl;
                    cout<<"\tYour Averge :"<<averge[n]<<endl;
                    cout<<"\tYour Rank is Perfect!\n";
                }else if(averge[n] <300 && averge[n] >=200){
                    cout<<"\tYour Total Score : "<<socre_total[n]<<endl;
                    cout<<"\tYour Averge : "<<averge[n]<<endl;
                    cout<<"\tYour Rank is Very Good!\n";
                }else if(averge[n] <200 && averge[n] >=100){
                    cout<<"\tYour Total Score : "<<socre_total[n]<<endl;
                    cout<<"\tYour Averge : "<<averge[n]<<endl;
                    cout<<"\tYour Rank is Good!\n";
                }else if(averge[n] <100 && averge[n] >0){
                    cout<<"\tYou Total Score : "<<socre_total[n]<<endl;
                    cout<<"\tYou Averge : "<<averge[n]<<endl;
                    cout<<"\tYou Need Result Exam!\n"<<endl;
                }
            n++;
            break;
        case 2:
                cout<<"\t======================================================== Your Data ==========================================================="<<endl;
                cout<<setw(32)<<"name";
                cout<<setw(32)<<"id";
                cout<<setw(32)<<"age";
                cout<<setw(32)<<"gender";
                cout<<setw(32)<<"Math";
                cout<<setw(32)<<"Khmer";
                cout<<setw(32)<<"Bioloy";
                cout<<setw(32)<<"Cemesty";
                cout<<setw(32)<<"Physic";
                cout<<setw(32)<<"TScore";
                cout<<setw(32)<<"Averge"<<endl;
            for(i = 0; i < n; i++){
                cout<<setw(32)<<name        [i];
                cout<<setw(32)<<id          [i];
                cout<<setw(32)<<age         [i];
                cout<<setw(32)<<gender      [i];
                cout<<setw(32)<<math        [i];
                cout<<setw(32)<<khmer       [i];
                cout<<setw(32)<<bilogy      [i];
                cout<<setw(32)<<cemestry    [i];
                cout<<setw(32)<<physic      [i];
                cout<<setw(32)<<socre_total [i];
                cout<<setw(32)<<averge      [i]<<endl;
            }
            break;
        case 3:
            cout<<"\t=========================== name search ============================"<<endl;
            cout<<"\tPlease Enter Name You Want Search : ";cin>>name_search;
            isSearch == 0;
            for(i = 0 ; i < n; i++){
                if(name_search == name[i]){
                    cout<<setw(12)<<"name";
                    cout<<setw(12)<<"id";
                    cout<<setw(12)<<"age";
                    cout<<setw(12)<<"gender";
                    cout<<setw(12)<<"Math";
                    cout<<setw(12)<<"Khmer";
                    cout<<setw(12)<<"Bioloy";
                    cout<<setw(12)<<"Cemesty";
                    cout<<setw(12)<<"Physic";
                    cout<<setw(12)<<"TScore";
                    cout<<setw(12)<<"Averge"<<endl;
                    
                    cout<<setw(12)<<name        [i];
                    cout<<setw(12)<<id          [i];
                    cout<<setw(12)<<age         [i];
                    cout<<setw(12)<<gender      [i];
                    cout<<setw(12)<<math        [i];
                    cout<<setw(12)<<khmer       [i];
                    cout<<setw(12)<<bilogy      [i];
                    cout<<setw(12)<<cemestry    [i];
                    cout<<setw(12)<<physic      [i];
                    cout<<setw(12)<<socre_total [i];
                    cout<<setw(12)<<averge      [i]<<endl;
                    
                    isSearch == 1;
                    break;  
                }
            }
            if(isSearch == 0){
                cout<< "\tName <<< " <<name_search<<" >>> not found in list .... !"<<endl;
            }
        break;
        case 4:
            cout<<"\t================ Search ID ================="<<endl;
            cout<<"\tPlease Input ID which you want Search : "<<id_search<<endl;
            isid == 0;
            for(i = 0; i < n; i++){
                if(id[i] == id_search){
                    cout<<setw(12)<<"name";
                    cout<<setw(12)<<"id";
                    cout<<setw(12)<<"age";
                    cout<<setw(12)<<"gender";
                    cout<<setw(12)<<"math";
                    cout<<setw(12)<<"khmer";
                    cout<<setw(12)<<"biology";
                    cout<<setw(12)<<"cemestry";
                    cout<<setw(12)<<"physic";
                    cout<<setw(12)<<"tscore";
                    cout<<setw(12)<<"averge";

                    cout<<setw(12)<<name         [i];
                    cout<<setw(12)<<id           [i];
                    cout<<setw(12)<<age          [i];
                    cout<<setw(12)<<gender       [i];
                    cout<<setw(12)<<math         [i];
                    cout<<setw(12)<<khmer        [i];
                    cout<<setw(12)<<bilogy       [i];
                    cout<<setw(12)<<cemestry     [i];
                    cout<<setw(12)<<physic       [i];
                    cout<<setw(12)<<socre_total  [i];
                    cout<<setw(12)<<averge       [i];  
                    isid == 1;
                    break;                  
                }
            }
            if(isid==0){
                cout<<"This <<< "<<id_search<<"Search not found .... !"<<endl;
            }
        break;
        case 5:
        break;
        case 6:
        case 7:
        break;
        case 8:
        break;
        case 9:
            cout<<"============= Your Rank ===============\n";
        break;
        case 0:
            exit(0);
        break;
    }
}while( chase != 0);
    return 0;
}