#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream readData;
    readData.open("data_01.txt",ios::in);

    if(!readData){
        cout << "File not Found!";exit(0);
    }else {
        string searchName;
        cout << "Enter Name to Search: ";getline(cin, searchName);

        string tmpName;
        bool isFound = false;
        while(!readData.eof()){
            readData >> tmpName;
            if(tmpName == searchName){
                cout << "Search Found! -->> " << tmpName << " <<--" <<endl;
                isFound = true;
            }
        }
        if(!isFound){
            cout << "Search Not Found!" << endl;
        }
    }

    return 0;
}