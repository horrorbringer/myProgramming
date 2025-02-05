#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string msg;

    // write data into tmp.txt
    ofstream wData("tmp.txt", ios::app);

    // read data 
    ifstream readData;
    readData.open("data_01.txt", ios::in);
    if(!readData){
        cout << " file not found!";
    }else {
        // readData>>msg;
        // cout << msg;

        while(!readData.eof()){

        //     readData>>msg;
        //         cout << msg << endl;
                // if(msg=="This"){
                //     msg = "Those";
                // }
        
            getline(readData,msg);
            cout<<msg<<endl;
        }
    }
    return 0;
} 