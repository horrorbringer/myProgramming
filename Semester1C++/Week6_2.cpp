#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   int code;
   string name;
   float price;
   float qty;
   double total_payment_USD,total_payment_KHR,total_payment_CNY,total_payment_VND,afterDis_payment_USD,afterDis_payment_KHR,afterDis_payment_CNY,afterDis_payment_VND;

   cout<<"\t=============>>>Enter Information<<<============="<<endl;
   cout<<"\tDiscount 10%"<<endl;
   cout<<"\tInput Pro-Code : ";
   cin>>code;
   cout<<"\tInput Pro-Name : ";
   cin>>name;
   cout<<"\tInput Pro-Price : $ ";
   cin>>price;
   cout<<"\tinput Pro-Qty : ";
   cin>>qty;
   
   total_payment_USD = price * qty ;
   total_payment_KHR = total_payment_USD * 4069.03;
   total_payment_CNY = total_payment_USD * 7.1968;
   total_payment_VND = total_payment_USD * 24401.9;

   afterDis_payment_USD = total_payment_USD * (100-10)/100;
   afterDis_payment_KHR = total_payment_KHR * (100-10)/100;
   afterDis_payment_CNY = total_payment_CNY * (100-10)/100;
   afterDis_payment_VND = total_payment_VND * (100-10)/100;

   system("CLS");
   cout<<"\t=========>>>Shop Management Information<<<==========="<<endl; 
   cout<<fixed<<showpoint<<setprecision(2);
   cout<<"\tPro_Code : "<<code<<endl;
   cout<<"\tPro-Name : "<<name<<endl;
   cout<<"\tPro-Price : $ "<<price<<endl;
   cout<<"\tPro-Qty : "<<qty<<endl;
   cout<<"\t================>>>Total Payment<<<=================="<<endl;
   cout<<"\tTotal Payment in USD : $ "<<total_payment_USD<<endl;
   cout<<"\tTotal Payment in KHR : R "<<total_payment_KHR<<endl;
   cout<<"\tTotal Payment in CNY : Y "<<total_payment_CNY<<endl;
   cout<<"\tTotal Payment in VND : D "<<total_payment_VND<<endl;
   cout<<"\t=========>>>Total Payment After Discount<<<=========="<<endl;
   cout<<"\tPayment After Discount in USD : $ "<<afterDis_payment_USD<<endl;
   cout<<"\tPayment After Discount in KHR : R "<<afterDis_payment_KHR<<endl;
   cout<<"\tPayment After Discount in CNY : Y "<<afterDis_payment_CNY<<endl;
   cout<<"\tPayment After Discount in VND : D "<<afterDis_payment_VND<<endl;
   cout<<"\t=============>>>Shop Management Result<<<============"<<endl; 

   return 0;
}
