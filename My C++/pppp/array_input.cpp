#include <iostream>
using namespace std;
char character[3][3];
void insertArray(){
    cout<<"\t------------ Insert array by each index as character(A-Z)------------\n\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"\tArray index ["<<i<<"]["<<j<<"] = ";
            cin>>character[i][j];
        }
    }
}
void displyArray(){
    cout<<"\n\t---------- Disply array -----------\n\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"\tArray index ["<<i<<"]["<<j<<"] = "<<character[i][j]<<endl;
        }
    }
}
int main(){
    system("cls");
    cout<<"\n";
    insertArray();
    displyArray();
    return 0;
}