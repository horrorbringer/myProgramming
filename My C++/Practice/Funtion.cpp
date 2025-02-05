#include<iostream>
using namespace std;
class student{
    public :
    string name;
    char sex;
    int khmer ,math, computer;
    int D , M ,Y ;
    student(string a , char b,int k,int m, int c, int d,int u , int y){
        name = a;
        sex = b;
        khmer = k;
        math =m;
        computer = c;
        D = d;
        M = u;
        Y = y;
    }
    int total(){
        return khmer + math + computer;
    }
    float avg (){
        return float(khmer+math+computer)/3;
    }
    string result(){
        float x=(khmer+math+computer)/3;
        string r;
        if(x<50){
            r = "Fail";
        }
        else {
            r ="Pass";
        }
        return 0;
    }
    void showdata(){
        cout<<"Name          : "<<name      <<endl;
        cout<<"Gender        : "<<sex       <<endl;
        cout<<"Khmer         : "<<khmer     <<endl;
        cout<<"Math          : "<<math      <<endl;
        cout<<"Computer      : "<<computer  <<endl;
        cout<<"Total         : "<<total()   <<endl;
        cout<<"Average       : "<<avg()     <<endl;
        cout<<"Result        : "<<result()  <<endl;
        cout<<"Day of birth  : "<<D         <<endl;
        cout<<"Month of year : "<<M         <<endl;
        cout<<"Year of birth : "<<Y         <<endl;
    }
};
int main (){
    student std1("KK",'M',90,98,98,27,07,2009);

    std1.showdata();
}