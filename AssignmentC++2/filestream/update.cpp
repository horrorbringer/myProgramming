#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string msg;

    // write data into tmp.txt
    ofstream wData("tmp.txt", ios::app);

    // read data 
    ifstream updateData;
    
    updateData.open("data_01.txt", ios::in);
    if(!updateData.eof()){
        cout << " file not found!";
    }else {

        // readData>>msg;
        // cout << msg;
        
        while(!updateData.eof()){
            updateData>>msg;
            if(msg=="This"){
                msg = "Those";
            }
            updateData.close();
            wData.close();

            remove("data_01.txt");
            rename("tmp.txt","data_01.txt");
            
        
            // getline(readData,msg);
            // cout<<msg<<endl;
        }
    }
    return 0;
} 