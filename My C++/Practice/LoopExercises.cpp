#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter Value A : ";cin>>A;
    cout<<"Enter Value B : ";cin>>B;
    cout<<"Enter Value C : ";cin>>C;
    for(int i = 0; i<3;i++){
        cout<<"*"<<endl;
        for( int i=0;i<3;i++){
            cout<<"="<<endl;
        }
        for(int i = 0;i<2;i++){
            cout<<"@"<<"\t";
                for(int i = 0;i<4;i++){
                    cout<<setw(10)<<A;
                    cout<<setw(10)<<C;
                    cout<<setw(10)<<B;
            }
        }
    }
}
    