#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
using namespace  std;
void login(){
    string username_admin,pw_admin;
    label:
    cout<<"\n\t>>>>>>>>>>Management<<<<<<<<<<<"<<endl;
    cout<<"\tEnter Username: ";cin>>username_admin;
    cout<<"\tEnter Password: ";cin>>pw_admin;
    if(username_admin == "Thegod" && pw_admin == "2222"){
        cout<<"\tLogin Successfull!!!"<<endl;
            cout<<"&";
        for(int i=0;i<8;i++){
            system("color A");
            Sleep(100);
            cout<<"&";
            Sleep(200);
        }
        for(int i=0;i<8;i++){
            system("color A");
            Sleep(50);
            cout<<"&";
            Sleep(100);
        }
         for(int i=0;i<30;i++){
            system("color A");
            cout<<"&";
            Sleep(10);
        }
    }else{
         for(int i=0;i<8;i++){
            system("color C");
            Sleep(100);
            cout<<"&";
            Sleep(200);
        }
        for(int i=0;i<8;i++){
            system("color C");
            Sleep(50);
            cout<<"&";
            Sleep(100);
        }
         for(int i=0;i<30;i++){
            system("color C");
            cout<<"&";
            Sleep(10);
        }
        goto label;
        cout<<endl;
    }
    cout<<endl;
}
class DATASTAFF{
    protected:
        int id,age;
        string name,gender,dob,address,position,start_to_work;
        float salary;
        string username,password;
};
class STAFF: public DATASTAFF{
    public:
        string contact;
    public:
    void InputPatient(){
        cout<<">>>>>>>>>>>Patient Information<<<<<<<<<<<\n";
        cout<<"\tEnter ID: ";cin>>id;
        cout<<"\tEnter Name: ";cin>>name;
        cout<<"\tEnter Age: ";cin>>age;
        cout<<"\tEnter Gender: ";cin>>gender;
        cout<<"\tEnter Contact: ";cin>>contact;
    }
    void OutputPatient(){
        cout<<">>>>>>>>>>>Patient Information<<<<<<<<<<<\n";
        cout<<"\t ID: "<<id<<endl;
        cout<<"\t Name: "<<name<<endl;
        cout<<"\t Age: "<<age<<endl;
        cout<<"\t Gender: "<<gender<<endl;
        cout<<"\t Contact: "<<contact<<endl;

    }
    void Building(){
        
    }
    void TypeDiseses(){

    }

};
class Manager:public DATASTAFF{

    public:
    void createAccountStaff(){
        system("color E");
        cout<<"\tEnter ID: ";cin>>id;
        cout<<"\tEnter Name: ";cin>>name;
        cout<<"\tEnter Age: ";cin>>age;
        cout<<"\tEnter Gender: ";cin>>gender;
        cout<<"\tEnter Date of Birth: ";cin>>dob;
        cout<<"\tEnter Address: ";cin>>address;
        cout<<"\tEnter Start to work: ";cin>>start_to_work;
        cout<<"\tEnter Position: ";cin>>position;
        cout<<"\tEnter Salary: ";cin>>salary;
        cout<<"\tEnter Username: ";cin>>username;
        cout<<"\tEnter Password: ";cin>>password;
        cout<<endl<<endl;
    }
    void Display(){
        cout<<setw(5)<<id<<setw(15)<<name<<setw(10)<<age<<setw(15)<<gender<<setw(20)<<dob<<setw(15)<<address<<setw(15)
        <<start_to_work<<setw(10)<<position<<setw(8)<<salary<<endl;
    }
    void Update(){
        int op_update;
        cout<<"\t[1]. Udate ID"<<endl;
        cout<<"\t[2]. Udate Name"<<endl;
        cout<<"\t[3]. Udate Age"<<endl;
        cout<<"\t[4]. Udate Gender"<<endl;
        cout<<"\t[5]. Udate Date of birth"<<endl;
        cout<<"\t[6]. Udate Address"<<endl;
        cout<<"\t[7]. Udate Position"<<endl;
        cout<<"\t[8]. Udate All"<<endl;
        cout<<"Choose your  choice one-<(o)>-: ";cin>>op_update;

        switch (op_update){
            case 1:
                cout<<"\tID Staff: "<<id<<endl;
                cout<<"\tEnter New ID: ";cin>>id;
                break;
            case 2:
                cout<<"\tName Staff: "<<name<<endl;
                cout<<"\tEnter New Name: ";cin>>name;
            case 3:
                cout<<"\tAge Staff: "<<age<<endl;
                cout<<"\tEnter New Age: ";cin>>age;
                break;
            case 4:
                cout<<"\tGender Staff: "<<gender<<endl;
                cout<<"\tEnter New Gender: ";cin>>gender;
                break;
            case 5:
                cout<<"\tDate of Birth's Staff: "<<dob<<endl;
                cout<<"\tEnter New Date of Birth: ";cin>>dob;
                break;
            case 6:
                cout<<"\tAddress Staff: "<<address<<endl;
                cout<<"\tEnter New Address: ";cin>>address;
                break;
            case 7:
                cout<<"\tPosition Staff: "<<position<<endl;
                cout<<"\tEnter New Position: ";cin>>position;
                break;
            case 8:
                cout<<"ID Staff             : "<<id<<endl;
                cout<<"\tName Staff         : "<<name<<endl;
                cout<<"\tAge Staff          : "<<age<<endl;
                cout<<"\tGender Staff       : "<<gender<<endl;
                cout<<"\tDate of Birth's Staff: "<<dob<<endl;
                cout<<"\tAddress Staff      : "<<address<<endl;
                cout<<"\tPosition Staff     : "<<position<<endl;
                cout<<"Enter New ID         : ";cin>>id;
                cout<<"\tEnter New Name     : ";cin>>name;
                cout<<"\tEnter New Age      : ";cin>>age;
                cout<<"\tEnter New Gender   : ";cin>>gender;
                cout<<"\tEnter New Date of Birth: ";cin>>dob;
                cout<<"\tEnter New Address  : ";cin>>address;
                cout<<"\tEnter New Position : ";cin>>position;
            break;
        }
    }
    void SearchId(){
        int id_search;
            cout<<"Enter ID: ";cin>>id_search;
            if(id_search == id ){
                Display();
            }
    }
    void SearchName(){
        string name_search;
        int id_search;
        cout<<"Enter Name: ";cin>>name_search;
        if(name_search == name ){
            Display();
        }
    }
    void Delete(){
        int id_delete;
        cout<<"Enter Your ID: ";cin>>id_delete;
        if(id_delete == id){
        }
    }
    void loginStaff(){
        string username_staff,password_staff;
        staff_again:
        cout<<"\n\t>>>>>>>>>>Staff<<<<<<<<<<<"<<endl;
        cout<<"\tEnter Username: ";cin>>username_staff;
        cout<<"\tEnter Password: ";cin>>password_staff;
        if(username_staff == username && password_staff == password){
            cout<<"\tLogin Successfull!!!"<<endl;
                cout<<"&";
            for(int i=0;i<8;i++){
                system("color A");
                Sleep(100);
                cout<<"&";
                Sleep(200);
            }
            for(int i=0;i<8;i++){
                system("color A");
                Sleep(50);
                cout<<"&";
                Sleep(100);
            }
            for(int i=0;i<30;i++){
                system("color A");
                cout<<"&";
                Sleep(10);
            }
        }else{
            for(int i=0;i<8;i++){
                system("color C");
                Sleep(100);
                cout<<"&";
                Sleep(200);
            }
            for(int i=0;i<8;i++){
                system("color C");
                Sleep(50);
                cout<<"&";
                Sleep(100);
            }
            for(int i=0;i<30;i++){
                system("color C");
                cout<<"&";
                Sleep(10);
            }
            goto staff_again;
            cout<<endl;
        }
        cout<<endl;
}

};
int main(){
    int n,i;
    int n_staff = 0;

    Manager obj[100];
    STAFF staff[100];
    int option;
    do{
        cout<<"\t1. Manager"<<endl;
        cout<<"\t2. Staff"<<endl;
        cout<<"\t3. User"<<endl;
        cout<<"\t4. Exit"<<endl;
        cout<<"\tPlease choose one option!\n";
        cin>>option;
        switch (option){
        case 1:
            int op_mgm;
            login();
            system("cls");
            do{
                cout<<"____________________________________________________________\n\n";
                cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>Manager<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
                cout<<"____________________________________________________________\n\n";
                cout<<"\t\t[1]. Create Account for Staff\n\n";
                cout<<"\t\t[2]. Output Information Staff\n\n";
                cout<<"\t\t[3]. Search Information Staff\n\n";
                cout<<"\t\t[4]. Update Information Staff\n\n";
                cout<<"\t\t[5]. Delete Information Staff\n\n";
                cout<<"\t\t[6]. Back\n\n";
                cout<<"\t\t[7]. Exit\n\n";
                cout<<"Please Choose Your Choice one  -<(o)>-: ";cin>>op_mgm;
                switch (op_mgm){
                    case 1:
                        cout<<"How many staff do you to create? ";cin>>n;
                        for( i=0;i<n;i++){
                            obj[n_staff].createAccountStaff();
                            n_staff++;
                        }   
                        break;
                    case 2:
                        cout<<"____________________________________________________________________________________________________________________\n";
                        for(i=0;i<n_staff;i++){
                            obj[i].Display();
                        }
                        cout<<"\n\t\t\t\t\tPress any keys to continue!";
                        getch();
                        break;
                    case 3:
                        int op_search;
                        cout<<">>>>>>Search Option<<<<<<<\n";
                        cout<<"[1].Search By ID.\n";
                        cout<<"[2].Search By Name.\n";
                        cout<<"Choose your choice one-<(o)>-: ";cin>>op_search;
                        switch(op_search){
                            case 1:
                                for( i=0;i<n_staff;i++){
                                    obj[i].SearchId();
                                }
                                cout<<"\n\t\t\tPress any keys to continue!";
                                getch();
                            break;
                            case 2:
                                for( i=0;i<n_staff;i++){
                                    obj[i].SearchName();
                                }
                                cout<<"\n\t\t\tPress any keys to continue!";
                                getch();
                            break;
                        }
                    break;
                    case 4:
                        for( i=0;i<n_staff;i++){
                            obj[i].Update();
                        }
                        cout<<"\n\t\t\tPress any keys to continue!";
                        getch();
                    break;
                    case 5:
                        cout<<">>>>>>>>>>>>>Oprion Delete<<<<<<<<<<<\n";
                        for( i=0;i<n_staff;i++){
                            obj[i].Delete();
                        }
                        cout<<"\n\t\t\tPress any keys to continue!";
                        getch();
                    break;
                }
            }while(op_mgm != 6);
        break;
        case 2:
            cout << "                                      Staff Sing in\n";
            cout << "____________________(<o>)____________________________________________(<o>)_________________________\n\n\n";
            for(i=0;i<n_staff;i++){
                obj[i].loginStaff();
            }
        break;
        case 3:
        break;
        case 4:
            exit (0);
        break;
        }
    }while(option !=0);
    return 0;
}
