#include<iostream>
using namespace std;
int main(){
int i, j;
int a[3][3]; // a[i][j] , [i]=row ; [j]=colum;
for(i = 0; i<3; i++){
    for(j = 0; j<3; j++){
        cout<<"Enter Array 2D : "<<a[i][j];cin>>a[i][j];
    }
}     
for(i = 0; i <3 ;i++){
    for(j = 0; j < 3;j++){
    cout<<"Array 2D : "<<a[i][j]<<endl;  
    } 
}
return 0;
}