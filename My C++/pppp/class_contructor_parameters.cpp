#include<iostream>
using namespace std;
class class_contructor_parameters
{
public:
    class_contructor_parameters(int a , int b){
        int total,i,n;
        cout<<"Please input total";
        cin>>n;
        for(i=1;i<n;i++){
            total=a+b;
            cout<<total<<endl;
        }
    }
};
int main(){
    int para1,para2;
    cout<<"Please input para1 = ";cin>>para1;
    cout<<"Please input para2 = ";cin>>para2;
    class_contructor_parameters obj(para1,para1);
return 0;
}



