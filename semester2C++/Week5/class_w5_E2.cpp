#include<iostream>
#include<string>
using namespace std;
class book{
    private:
        int Book_code;
        string Book_name;
        int book_page;
        string book_language;
        string book_Author;
        int book_generations;
        float book_price;
    public:
        void input(){
            cout << "\tEnter Book code: ";cin >> Book_code;
            cout << "\tEnter Book Name: ";cin >> Book_name;
            cout << "\tEnter Book Pages: ";cin >> book_page;
            cout << "\tEnter Book Language: ";cin >> book_language;
            cout << "\tEnter Book Author: ";fflush(stdin);cin.ignore();getline(cin,book_Author);
            cout << "\tEnter Book Generations: ";cin >> book_generations;
            cout << "\tEnter Book Price: ";cin >> book_price;
        }
        void output(){
            cout << "\tBook code: " << Book_code <<endl;
            cout << "\tBook Name: " << Book_name <<endl;
            cout << "\tBook Pages: " << book_page <<endl;
            cout << "\tBook Language: " << book_language <<endl;
            cout << "\tBook Author: " << book_Author <<endl;
            cout << "\tBook Generations: " << book_generations <<endl;
            cout << "\tBook Price: " << book_price <<endl;
        }
};
int main(){
    
    system("cls");
    system("color D");
    int n,i;

    book obj[100];
    cout << "\tHow many book do you want input: ";cin>>n;
    cout << "\n\t--------------->> Input <<--------------\n\n";
    for(i=0;i<n;i++){
        cout << "\tNo: "<<i+1<<endl;
        obj[i].input();
    }

    cout << "\n\t----------------->> Output <<----------------\n\n";
    for(i=0;i<n;i++){
        cout << "\tNo: "<<i+1<<endl;
        obj[i].output();
    }

    return 0;
}