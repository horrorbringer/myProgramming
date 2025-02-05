#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    float sum=0;
    system("cls");
    cout<<"គ. 1/2 + 1/3 + 1/5 +...+ 1/(2*n-1)\n";
    cout<<"Enter n: ";cin>>n;
    do{
        cout<<"1/"<<(2*i-1)<<" + ";
        sum+= (float)1/(2*i-1);
        i++;
    }while(i <= n);
    cout<<"\b\b= "<<sum<<endl;
    return 0;
}