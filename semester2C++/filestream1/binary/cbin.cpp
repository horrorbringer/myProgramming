#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class Book{
    private:
        int book_id;
        char book_name[20];
        float price;
    public:
        // Book(){
        //     book_id = 0;
        //     book_name = ' ';
        //     price = 0;
        // }
        // Book(int a, char b, float c){
        //     book_id = a;
        //     book_name = b;
        //     price = c;
        // }
        void input(){
            cout << "Enter Book Id    : " ;cin >> book_id;
            cout << "Enter Book Name  : " ;cin >> book_name;
            cout << "Enter Book Price : " ;cin >> price;
        }
        void output(){
            cout << setw(10) << book_id;
            cout << setw(15) << book_name;
            cout << setw(15) << price;
            cout << "\n";
        }
        void printHeader(){
            cout << "\n";
            cout << setw(10) << "Book Id";
            cout << setw(15) << "Book Name";
            cout << setw(15) << "Book Price\n";

        }

};

int main(){
    fstream file;
    Book obj;
    int choice;

    do{
        cout << "=============== Book Menu =============\n\n";
        cout << "\t\t[1] Add Book\n";
        cout << "\t\t[2] List Book\n";
        cout << "\t\t[3] Exit\n";
        cout << "\nEnter Choice: ";cin>> choice;
        switch(choice){
            case 1:
                cout << "========== Add Book ==========\n\n";
                obj.input();
                file.open("002.txt", ios::out | ios::app);
                file.write((char*)&obj,sizeof(obj));
                file.close();
            break;
            case 2:
                cout << "========== List Book ==========\n\n";
                file.open("002.txt", ios::in);
                file.read((char*)&obj,sizeof(obj));
                obj.printHeader();
                while(!file.eof()){
                    obj.output();
                    file.read((char*)&obj,sizeof(obj));
                }
                file.close();
            break;
        }
    }while(choice != 3);
    return 0;
}