#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int op1,op2,op3,op4,op5,qty,op6;
float opa,payment_$,payment_khr, price_$, price_khr;
char gzise;
int main(){
    E:
    string username,password;
    cout<<setw(15)<<"============ LOGIN ==========\n";
cout<<setw(15)<<"Enter Username:";
cin>>username;
cout<<setw(15)<<"Enter Password:";
cin>>password;
if(username == "Admin" && password == "123"){
 cout<<setw(15)<<"Welcome\n";
 system ("cls");
}else{
    cout<<setw(20)<<"Wrong Username orr Password Please try Agian .....\n";
    system ("cls");
    goto E;
}
cout<<setw(20)<<"=========>> PAPA N  COFFEE SHOP <<============= \n\n";
cout<<setw(10)<<"1.COFFEE "<<setw(15)<<"2.SOFT DRINK "<< setw(15) <<"3.ALCOHOL DRINK \n";
cout<< setw(15) <<"CHOOSE THE OPTION :";
cin>>op1;
switch (op1){

case 1:
cout<<setw(20) <<"=============>> TYPE OF COFFEE <<============\n\n";
cout<<setw(15)<<"1.HOT COFFEE \n";
cout<<setw(15)<<"2. ICE COFFEE \n";
cout<<setw(15) <<">>>>>>>>CHOSE THE MENU<<<<<<<<<<<, ";
cin>>op2;
switch(op2){
    case 1:
    cout<<setw(20)<<"==============>> HOT COFFEE << =============\n\n";
    cout <<"1.EXPREESO\n";
    cout <<"2.AMERICANO\n";
    cout <<"3.CAPPUCCINO\n";
    cout<< " >>>>>>>>>>>  CHOSE THE MENU <<<<<<<<<< :\n";
    cin>>op3;break;
    switch(op3){
    case 2:
    cout<<setw(20)<<"==============>> ICE COFFEE << =============\n\n";
    cout<<"1.ICE EPREESO\n";
    cout<<"2.ICE AMERICANO\n";
    cout<<"3.ICE CAPPUCCINO\n";
    cout<<"CHOSE THE MENU :\n";
    cin>>op4;break;}

if(opa=1){cout<<"\t Americano Cafe\n";}
else if (opa=2){cout<<"\t Exprsso Cafe\n";}
else if (opa=3){cout<<"\t Cappucino\n";}
else if (opa=4){cout<<"\t Ice Americano \n";}
else if (opa=5){cout <<"\t Ice Expresso \n";}
else if (opa=6){cout<<"\t Ice Cappucino \n";}
else{cout <<"\t you are wrong your chosing please chose agian...!!!)\n";}

cout<<"\t Enter gsize       :";cin>>gzise;
cout<<"\t Enter price_$     :";cin>>price_$;
cout<<"\t Enter price_KHR  :";cin>>price_khr;
cout<<"\t Enter qty        :";cin>>qty;

payment_$=price_$*qty;
payment_khr=price_khr*qty;

cout<<setw(15)<<"=============>> RECIPE <<===========\n";
cout<<fixed<<showpoint<<setprecision(2);
cout<<setw(15)<< "Order By :"<<username << endl;
cout<<setw(15)<<"your order qty:"<< qty<<endl;
cout<<setw(15)<<" Your order price_$ :"<<price_$<<endl;
cout<<setw(15)<<"Your order price_khr :"<<price_khr<<endl;



switch(op4){
case 2:
cout<<setw(20) <<"=============>> TYPE OF SOFT DRINK <<============\n\n";
cout<<setw(15)<<"1.CAN \n";
cout<<setw(15)<<"2. JUICE\n";
cout<<setw(15)<<"3.SHAKE\n";
cout<<setw(15) <<">>>>>>>>>>>CHOSE THE MENU<<<<<<<<<<<<<<<<<<:";
cin>>op5;break;
switch(op5){
    case 2:
    cout<<"\t========== CAN ============\n";
    cout<<"1.STING \n";
    cout<<"2.CARABAO \n";
    cout<<"3.BOSSTRONG \n";
    cout<<">>>>>> CHOSE THE MENU <<<<<<<\n";
    cin>>op6;break;
}

}

}

   
    return 0; 

}
 }