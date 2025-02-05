#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    long  b=1500, qty=5500, sellprice=7, deli=200,p_t,p_d,p_b,t_b,sel_kh;
    float t_kh,t_us,t_batt;
    p_d = deli * 4100;
    p_b = b * qty;
    sel_kh = sellprice * 4100;
    t_b = sel_kh * qty;
    p_t = p_b + p_d;
    t_kh = (t_b - p_t) * 0.9;
    t_us = t_kh / 4100;
    t_batt = t_kh / 111.20; 
    system("cls");
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tPayment Buy Goods = "<<p_b<<" Riel"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tPayment Delivery = "<<p_d<<" Riel"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tTotal sell = "<<t_b<<" Riel"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tTotal Payment = "<<p_t<<" Riel"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tProfit Amounts KHR = "<<t_kh<<" Riel"<<endl; 
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tProfit Amounts USD = "<<t_us<<" $"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tProfit Amounts Batt = "<<t_batt<<" Baht"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl<<endl;
    return 0;
}
