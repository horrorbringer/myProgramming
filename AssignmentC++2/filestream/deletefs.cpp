#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string delName,tmpName;
    string stu_name[10];

    ofstream writeData("tmp.txt",ios::out);
    ifstream readData;
    readData.open("data_01.txt",ios::in);

    if(!readData){
        cout << "File not Found!" <<endl;
        exit(0);
    }else {
        int i = 0;
        while(!readData.eof()){
            readData >> tmpName;
            stu_name[i] = tmpName;
            cout << tmpName << "\n";
            i++;
        }
        cout << "Enter student's name to delete: ";getline(cin, delName);
        for(string s:stu_name){
            if(s!=delName){
                writeData << s <<endl;
            }
        }
        readData.close();
        writeData.close();

        remove("data_01.txt");
        rename("tmp.txt", "data_01.txt");
    }

    return 0;
}