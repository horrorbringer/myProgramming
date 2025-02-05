#include<iostream>
#include<fstream>

// ofstream : class stream use to create and write flie
// ifstream : class use to read file

using namespace std;

int main(){
    system("cls");

    // create and write to file  

    ofstream fout;
    fout.open("001.txt", ios::out);
    fout << "Wellcom to file stream in C++" << endl;
    fout << "1000" << endl;
    fout << 100 << endl;
    fout << "My name is Bona"  << endl;
    fout << "write text file " << endl; 
    fout << "======================\n";
    fout << "=        FILE        =\n";
    fout << "======================\n\n";
    fout << "                                 +-----------------------+-----------------------+-----------------------+\n";
    fout << "                                 |           Name        |        Username       |        Password       |\n";
    fout << "                                 +-----------------------+-----------------------+-----------------------+\n";


    fout.close();  // close file after write file

    string str;
    ifstream fin; // use to read file 
    fin.open("001.txt", ios::in); // open for read file mode
    if(fin.is_open()){ // check is open success
        while(fin){ // true until end of
            getline(fin,str);
            cout << str << endl; // output to console screen
        }
        fin.close();
    }else{
        cout << "Can no open file!" << endl;
    }
    return 0;
}