#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
    class Book{
    private:
        string name;
        double code;
        int page;
        int language;
        string author;
        int generation;
        double price;

    public:
        void input(){
            cout << "\t========================================  BOOK STORE ===========================================\n";
            cout << "\tBOOK NAME: ";
            cin >> name;
            cout << "\tBOOK CODE: ";
            cin >> code;
            cout << "\tBOOK PAGE: ";
            cin >> page;
            cout << "\tBOOK LANGUAGE: ";
            cin >> language;
            cout << "\tBOOK AUTHOR: ";
            cin >> author;
            cout << "\tBOOK GENERATION: ";
            cin >> generation;
            cout << "\tBOOK PRICE: ";
            cin >> price;
            if(price >= 500){
                price *= 0.85;
            }
            else if(price >= 300){
                price *= 0.90;
            }
            else if(price >= 200){
                price *= 0.95;
            }
            else if(price >= 100){
                price *= 0.97;
            }
            else if(price < 100){
                price = price;
            }
        }
        void output(){
            cout << "BOOK-NAME: "<< name<<endl;
            cout << "BOOK-CODE: "<< code<<endl;
            cout << "BOOK-PAGE: "<< page<<endl;
            cout << "BOOK-LANGUAFE: "<< language<<endl;
            cout << "BOOK-AUTHOR: "<< author<<endl;
            cout << "BOOK-GENERATION: "<< generation<<endl;
            cout << "BOOK-PRICE: "<< price<<endl;
        }
    };
int main(){
    int i, n;
    system("cls");
    cout << "HOW MANY BOOK TO YOU WANT TO BUY?\n";
    cout << "INSERT YOUR BOOK HERE: ";
    cin >> n;
    Book book[n];
    for(i=0;i<n;i++){
        cout << "No" <<i+1<<endl;
        book[i].input();
    }
    for(i=0;i<n;i++){
        cout << "No" <<i+1<<endl;
        book[i].output();
    }
    
    return 0;
}
