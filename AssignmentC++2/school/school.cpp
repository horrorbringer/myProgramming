#include <iostream>
#include <windows.h>
using namespace std;

string user;
int op, op1, op2, op3;
int p, i, n, password, pin;
string name, address;
int id;
char gender;

void PIN()
{
PIN:
    cout << " Enter PIN : ";
    cin >> pin;
    if (pin == 3456)
    {

        for (i == 1; i <= 10; i++)
        {
            Sleep(500);
            system("color A");
            cout << ".";
        }
        cout << endl;
        cout << " Verifis ";
        cout << endl;
    }
    else
    {
        for (i == 1; i <= 15; i++)
        {
            Sleep(500);
            system("color C");
            cout << ".";
        }
        goto PIN;
    }
}
void log_admin()
{
admin:
    cout << "\t---------> Admin <----------\n";
    cout << " Enter User Name : ";
    cin >> user;
    cout << " Enter Password  : ";
    cin >> password;
    if (user == "Admin" && password == 2233)
    {

        for (i = 1; i <= 10; i++)
        {
            Sleep(500);
            system("color A");
            cout << ".";
        }
        cout << endl;
        cout << "\t login Complete **>.<**\n";
    }
    else
    {
        for (i = 1; i <= 10; i++)
        {
            Sleep(500);
            system("color C");
            cout << ".\n";
        }
        cout << " \t login Fail **!!!**\n";
        goto admin;
    }
}
void log_user()
{
users:
    cout << "\t---------> User <-----------\n";
    cout << " Enter User Name : ";
    cin >> user;
    cout << " Enter password  : ";
    cin >> password;
    if (user == "users" && password == 2233)
    {
        for (i = 1; i <= 10; i++)
        {
            Sleep(500);
            system("color A");
            cout << ".\n";
        }
        cout << "\t Login Complete **>.<**\n";
    }
    else
    {
        for (i = 1; i <= 10; i++)
        {
            Sleep(500);
            system("color C");
            cout << ".\n";
        }
        cout << "\t Login Fail ***!!!***\n";
        goto users;
    }
}

class list
{
protected:
    int up, id_updates;
    int id, dob, contact;
    string name, address;
    char gender;


public:
    void insert()
    {
        cout << "******* list of information ***********\n\n\n";
        cout << "******* school of informtion *********\n\n";
        cout << "How many studend all of u : ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << " NO : " << i + 1 << endl;
            cout << "\t Enter Name : ";
            cin >> name;
            cout << "\t Enter id_card ";
            cin >> id;
            cout << "\t Enter Gender : ";
            cin >> gender;
            cout << "\t Enter Address : ";
            cin >> address;
            cout << "\t Enrt Dob : ";
            cin >> dob;
            cout << "\t Enter contract : ";
            cin >> contact;
        }
    }
    double total_score;
        float s1 , s2 , s3 , s4 ,s5;
        int average ;
        void inputs(){
          input();
          total_score = s1+s2+s3+s4+s5;
          average = total_score / 5;
          if(average >=90 && average <100){
            cout<<"\t you got grade A \n";
            cout<<" you Pass **  ** ";
          }else if(average >=80 && average <90){
            cout<<"\t you got grade B \n";
            cout<<" you Pass ** ** \n";
          }else if(average >=70 && average <80){
            cout<<"\t you got grade C ";
            cout<<" you Pass ** ** \n";
          }else if(average >=60 && average <70){
            cout<<"\t you got grade C ";
            cout<<" you Pass ** ** \n";
          }else if(average >=50 && average <60){
            cout<<"\t you got grade C ";
            cout<<" you Pass ** ** \n";
          }else{
            cout<<" You fail of your score !!!";
          }
        }
    void display()
    {
        
        void gets(){
          get();
          cout<<" Total_score of you : "<<total_score<<endl;
          cout<<" Averagae of you : : "<<average<<endl;
        }
}
};
class stu_list : public list
{
protected:
  double total_score;
        float s1 , s2 , s3 , s4 ,s5;
        int average ;
public:
    void insert()
    {
        
    }

    void display()
    {
    }
};
class tea_list
{
protected:
string subject;
public:
    void insert()
    {
    }

    void display()
    {
    }
};

int main()
{
    char S;
    cout << "======>> Welcome to the system <<======\n";
    cout << "\tA: Admin " << " or " << "\tU: User \n";
    cout << "\tWhat kind of you ??\n";
    cout << "\tPlease selcet: ";
    cin >> S;
    switch (S)
    {
    case 'A':
        cout << "********************>> list of information <<********************\n\n";
        cout << "\t 1.High school " << "\t\t 2.Secondary school " << "\t 3.primary school \n\n";
        cout << "\t\t * what you want to check : ";
        cin >> op;

        switch (op)
        {
        P:
        case 1:
            cout << "******>> list of high school <<*******\n";
            cout << "What the class you want to check ";
            cin >> op1;
            switch (op1)
            {
            case 1:
                cout << "*******>> class 12 <<**********\n";

                break;
            case 2:
                cout << "******>> class 11 <<*********\n";

                break;
            case 3:
                cout << "*******>> class 10 <<**********\n";

                break;
            }
            break;

        case 2:
            cout << "******>> list of Secondary School <<*******\n";
            cout << " What the class you want to check  ";
            cin >> op2;
            switch (op2)
            {
            case 1:
                cout << "*********>> Class 9 <<********\n";

                break;
            case 2:
                cout << "********>> Class 8 <<********\n";

                break;
            case 3:
                cout << "*******>> Class 7 <<*********\n";

                break;
            }
            break;


        case 3:
            cout << "*********>> lisr of Primary <<*******\n";
            cout << " What the class you want to check  ";
            cin >> op3;
            switch (op3)
            {
            case 1:
                cout << "*******>> Class 6 <<*******\n";

                break;
            case 2:
                cout << "********>> Class 5 <<********\n";

                break;
            case 3:
                cout << "********>> Class 4 <<**********\n";

                break;
            case 4:
                cout << "********>> Class 3 <<**********\n";

                break;
            case 5:
                cout << "*******>> Class 2 <<***********\n";

                break;

            case 6:
                cout << "******>> class 1 <<**********\n";

                break;
            default:
                goto P;
            }
            break;
        }
        break;
    case 'U':

        break;
    }

    return 0;
}
