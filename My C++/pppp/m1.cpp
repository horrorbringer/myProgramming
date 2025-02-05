#include <iostream>
#include <iomanip>
using namespace std;
char a=201,b=205,c=203,d=187;
char l=186,s=204,x=206,r=185;
char t=200,e=202,w=188;
int i , j, k,rows;

void Bot();
void On();
void Table();
void Mid();

int main(){
    system("cls");
    cout << "\n";
    cout << "\tHow many rows dow you want: ";cin>>rows;
    Table();
    
    return 0;
}

void Table(){
    On();
    Mid();
    for(k=1;k<=rows-1;k++){
        for(i=1;i<=rows;i++){
            Mid();
            cout<<s;
            for(j=1;j<=98;j++){
                if(j==19||j==39||j==59||j==79){
                    cout <<x;
                }else{
                cout << b;
                }
            }
            cout<<r<<endl;
            Mid();
        }
    }
    Mid();
    Bot();
}

void On(){
    for( i = 1;i <= 100;i++){
        if(i==1){
        cout << a;
        }else if(i==20||i==40||i==60||i==80){
            cout << c;
        }else if(i==100){
            cout << d;
        }else {
            cout <<b;
        }
    }
    cout <<"\n";
}

void Mid(){
   
    for(i=1;i<=100;i++){
        if(i==1){
            cout << l<<"\t\t   ";
        }else if(i==20){
            cout << l << "\t\t\t\b";
        }else if(i==40){
            cout << l << "\t\t   ";
        }else if(i==60){
            cout << l << "\t\t\t\b";
        }else if(i==80||i==100){
            cout << l<<"\t\t   " ;
        }

        // if(i==1){
        //     cout << l<<setw(19);
        // }else if(i==20||i==40||i==60||i==80){
        //     cout << l<<setw(10);
        // }else if(i==100){
        //     cout << l<<setw(10);
        // }else{ 
        //     cout << l;
        // }

    }
    cout << "\n";
}

void Bot(){
    for(i=1;i<=100;i++){
        if(i==1){
            cout << t;
        }else if(i==20 || i==40 || i==60 || i==80){
            cout << e;
        }else if(i==100){
            cout << w;
        }else{ 
            cout << b;
        }
    }
    cout << "\n";
}
