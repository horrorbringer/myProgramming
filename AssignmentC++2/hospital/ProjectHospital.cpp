#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;
void login()
{
    string username_admin, pw_admin;
login:
    cout << "\n\t\t>>>>>>>>>>Management<<<<<<<<<<<" << endl;
    cout << "\t\tEnter Username: ";
    cin >> username_admin;
    cout << "\t\tEnter Password: ";
    cin >> pw_admin;
    if (username_admin == "Thegod" && pw_admin == "2222")
    {
        cout << "\t\tLogin Successfull!!!" << endl;
        cout << "&";
        for (int i = 0; i < 8; i++)
        {
            system("color A");
            Sleep(100);
            cout << "&";
            Sleep(200);
        }
        for (int i = 0; i < 15; i++)
        {
            system("color A");
            Sleep(50);
            cout << "&";
            Sleep(100);
        }
        for (int i = 0; i < 38; i++)
        {
            system("color A");
            cout << "&";
            Sleep(10);
        }
    }
    else
    {
        cout << "\tLogin Unsuccessful please try again!!!" << endl;
        for (int i = 0; i < 8; i++)
        {
            system("color C");
            Sleep(100);
            cout << "&";
            Sleep(200);
        }
        for (int i = 0; i < 15; i++)
        {
            system("color C");
            Sleep(50);
            cout << "&";
            Sleep(100);
        }
        for (int i = 0; i < 38; i++)
        {
            system("color C");
            cout << "&";
            Sleep(10);
        }
        goto login;
        cout << endl;
    }
    cout << endl;
}

class DATASTAFF{
protected:
    int id, age;
    string name, gender, dob, address, position, start_to_work;
    float salary;
    string username, password;

public:

void SetId(int sid)
{
    this->id = sid;
}

int getId()
{
    return id;
}
};

class STAFF : public DATASTAFF{
    protected:
        char building;
        int floor, room;
        string contact;
        string type_disease;
    public:
    
    void InputPatient()
    {
        cout << ">>>>>>>>>>>Patient Information<<<<<<<<<<<\n";
        cout << "\tEnter Name   : ";
        cin >> name;
        cout << "\tEnter Age    : ";
        cin >> age;
        cout << "\tEnter Gender : ";
        cin >> gender;
        cout << "\tEnter Type of Disease: ";
        cin >> type_disease;
        cout << "\tEnter Builing: ";
        cin >> building;
        cout << "\tEnter Floor  : ";
        cin >> floor;
        cout << "\tEnter Room   : ";
        cin >> room;
        cout << "\tEnter Contact: ";
        cin >> contact;
    }
    void OutputPatient()
    {
        cout << ">>>>>>>>>>>Patient Information<<<<<<<<<<<\n";
        cout << "\t Name   : " << name << endl;
        cout << "\t Age    : " << age << endl;
        cout << "\t Gender : " << gender << endl;
        cout << "\t Date of Birth: " << dob << endl;
        cout << "\t Type of Disease: " << type_disease << endl;
        cout << "\t Builing: " << building << endl;
        cout << "\t Floor  : " << floor << endl;
        cout << "\t Room   : " << room << endl;
        cout << "\t Contact: " << contact << endl;
    }
    void SearchPatient()
    {
        string namepatient_search, dob_search;
        int op_searchpatient;

        cout << ">>>>>>Search Option<<<<<<<\n";
        cout << "[1].Search By Name.\n";
        cout << "[2].Search By Date of Birth.\n";
        cout << "Choose your choice one-<(o)>-: ";
        cin >> op_searchpatient;
        switch (op_searchpatient)
        {

        case 1:
            cout << "Enter Name: ";
            cin >> namepatient_search;
            if (namepatient_search == name)
            {
                OutputPatient();
            }
            break;
        case 2:
            cout << "Enter Date of Birth: ";
            cin >> dob_search;
            if (dob_search == dob)
            {
                OutputPatient();
            }
            break;
        }
    }
    void UpdatePatient()
    {
        int op_patient_update;
        cout << "\t[1]. Udate Name" << endl;
        cout << "\t[2]. Udate Age" << endl;
        cout << "\t[3]. Udate Gender" << endl;
        cout << "\t[4]. Udate Date of birth" << endl;
        cout << "\t[5]. Udate Type of Disease" << endl;
        cout << "\t[6]. Udate Builing" << endl;
        cout << "\t[7]. Udate Floor" << endl;
        cout << "\t[8]. Udate Room" << endl;
        cout << "\t[9]. Udate Contacts" << endl;
        cout << "\t[10]. Udate All" << endl;
        cout << "Choose your  choice one-<(o)>-: ";
        cin >> op_patient_update;
        switch (op_patient_update)
        {
        case 1:
            cout << "\tPatient Name   : " << name << endl;
            cout << "\tEnter New Name : ";
            cin >> name;
            break;
        case 2:
            cout << "\tPatient Age    : " << age << endl;
            cout << "\tEnter New Age  : ";
            cin >> age;
            break;
        case 3:
            cout << "\tPatient Gender    : " << gender << endl;
            cout << "\tEnter New Gender  : ";
            cin >> gender;
            break;
        case 4:
            cout << "\tPatient Date of Birth  : " << dob << endl;
            cout << "\tEnter New Date of Birth: ";
            cin >> dob;
            break;
        case 5:
            cout << "\tPatient Type of Disease    : " << type_disease << endl;
            cout << "\tEnter New Type of Disease  : ";
            cin >> type_disease;
            break;
        case 6:
            cout << "\tPatient Building   : " << building << endl;
            cout << "\tEnter New Building : ";
            cin >> building;
            break;
        case 7:
            cout << "\tPatient Floor  : " << floor << endl;
            cout << "\tEnter New Floor: ";
            cin >> floor;
            break;
        case 8:
            cout << "\tPatient Room   : " << room << endl;
            cout << "\tEnter New Room : ";
            cin >> room;
            break;
        case 9:
            cout << "\tPatient Contacts   : " << contact << endl;
            cout << "\tEnter New Contacts : ";
            cin >> contact;
            break;
        case 10:
            cout << "\tPatient Name     : " << name << endl;
            cout << "\tPatient Age      : " << age << endl;
            cout << "\tPatient Gender   : " << gender << endl;
            cout << "\tPatient Date of Birth: " << dob << endl;
            cout << "\tPatient Type of Disease: " << type_disease << endl;
            cout << "\tPatient Building : " << building << endl;
            cout << "\tPatient Floor    : " << floor << endl;
            cout << "\tPatient Room     : " << room << endl;
            cout << "\tPatient Contacts: " << contact << endl;
            cout << "\tEnter New Name   : ";
            cin >> name;
            cout << "\tEnter New Age    : ";
            cin >> age;
            cout << "\tEnter New Gender : ";
            cin >> gender;
            cout << "\tEnter New Date of Birth: ";
            cin >> dob;
            cout << "\tEnter New Type of Disease: ";
            cin >> type_disease;
            cout << "\tEnter New Building: ";
            cin >> building;
            cout << "\tEnter New Floor  : ";
            cin >> floor;
            cout << "\tEnter New Room   : ";
            cin >> room;
            cout << "\tEnter New Contacts: ";
            cin >> contact;
            break;
        }
    }
    void Building()
    {
        int op_building;
        cout << ">>>>>>>>>>>Building Option<<<<<<<<<<\n";
        cout << "\t[1]. Building A\n";
        cout << "\t[2]. Building B\n";
        cout << "\t[3]. Building C\n";
        cout << "\tChoose one option";
        cin >> op_building;

        switch (op_building)
        {

        case 1:
            cout << "____________________________________________________________\n";
            cout << "\t>>>>>>>>>>Builing A<<<<<<<<<<\n";
            cout << "\t>>>>>>General Diseases<<<<<<\n";
            cout << "\t[1]. Skin allergies\n";
            cout << "\t[2]. Dengue Fever\n";
            cout << "\t[3]. Diabetes\n";
            cout << "\t[4]. Kidney\n";
            cout << "\t[5]. Malaria\n";
            cout << "\t[6]. Gastroenterology\n";
            break;

        case 2:
            cout << "____________________________________________________________\n";
            cout << "\t>>>>>>>>>>>>Builing B<<<<<<<<<<<<<\n";
            cout << "\t>>>>>Intensive Care Unit[ICU]<<<<<\n";
            cout << "\t[1]. Cancer\n";
            cout << "\t[2]. Liver disease\n";
            cout << "\t[3]. Heart disease\n";
            break;

        case 3:
            cout << "____________________________________________________________\n";
            cout << "\t>>>>>>>>>>>>Builing C<<<<<<<<<<<<<\n";
            cout << "\t>>>>>>>>>>>>Emergency<<<<<<<<<<<<<\n";
            cout << "\t[1].Covid-19\n";
            break;
        }
    }
    void TypeDiseses()
    {
        int op_disease;
        cout << ">>>>>>>>>>>>>Type of Diseases<<<<<<<<<<<<<\n";
        cout << "\t[1]. Skin allergies\n";
        cout << "\t[2]. Dengue fever\n";
        cout << "\t[3]. Diabetes\n";
        cout << "\t[4]. Kidney\n";
        cout << "\t[5]. Malaria\n";
        cout << "\t[6]. Gastroenterology\n";
        cout << "\t[7]. Cancer\n";
        cout << "\t[8]. Liver disease\n";
        cout << "\t[9]. Heart disease\n";
        cout << "\t[10].Covid-19\n";
        cout << "\tWhich type of diseases?";
        cin >> op_disease;
        switch (op_disease)
        {
        case 1:
            cout << "\t.Building A: 1st Floor\n";
            break;
        case 2:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 3:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 4:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 5:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 6:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 7:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 8:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 9:
            cout << "\t.Building B: 2nd Floor\n";
            break;
        case 10:
            cout << "\t.1st Floor Building C for Severe Symptoms\n";
            cout << "\t.2nd Floor Building C for Normal Symptoms\n";
            cout << "\t.3rd Floor Building C for Relive Symptoms\n";
            break;
        }
    }
};
class User : public STAFF
{

public:
    void PatientCare()
    {
        system("cls");
        int op_patientcare;
        cout << "\n____________________________________________________________\n\n";
        cout << ">>>>>>>>>>>>>>>>>>>>>Calmette Hospital<<<<<<<<<<<<<<<<<<<<<<\n\n";
        cout << "____________________________________________________________\n\n";
        cout << "\t>>>>>>>>>>>>>>>>>>>>>>>About US<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
        cout << "\t[1]. EMERGENCY AND ICU\n";
        cout << "\t[2]. OUTATIENT SERVICES\n";
        cout << "\t[3]. SERVICES & FACILITIES\n";
        cout << "\t[4]. MEDICAL SPECIALISTS\n";
        cout << "\t\tChoose your choice!";
        cin >> op_patientcare;
        switch (op_patientcare)
        {
        case 1:
            cout << "____________________________________________________________\n";
            cout << "\t\t>>>Emergency<<<\n";
            cout << "\t\t>>>General ICU<<<\n";
            cout << "\t\t>>>Neuro-ICU<<<\n";
            break;
        case 2:
            cout << "____________________________________________________________\n";
            cout << "\t>>>ENT (Ear, Nose and Throat)<<<\n";
            cout << "\t\t>>>>>>>>>Eyes Care<<<<<<<<<<<\n";
            cout << "\t\t>>>>>>Dental Service<<<<<<\n";
            break;
        case 3:
            cout << "____________________________________________________________\n";
            cout << "\t>>>Accommodation Overview<<<\n";
            cout << "\t>>>Food and Beverage<<<\n";
            break;
        case 4:
            cout << "____________________________________________________________\n";
            cout << "\t>>>Cancer<<<\n";
            cout << "\t>>>Heart Disease<<<\n";
            cout << "\t>>>Diabetes<<<\n";
            cout << "\t>>>Gastroenterology<<<\n";
            cout << "\t>>>Kidneys<<<\n";
            cout << "\t>>Procedure and Tests<<<\n";
            break;
        }
    }
    void Disease()
    {
        TypeDiseses();
    }
};
class Manager : public DATASTAFF
{

public:
    void createAccountStaff()
    {
        system("color E");
        cout << "\tEnter ID: ";
        cin >> id;
        cout << "\tEnter Name: ";
        cin >> name;
        cout << "\tEnter Age: ";
        cin >> age;
        cout << "\tEnter Gender: ";
        cin >> gender;
        cout << "\tEnter Date of Birth: ";
        cin >> dob;
        cout << "\tEnter Address: ";
        cin >> address;
        cout << "\tEnter Start to work: ";
        cin >> start_to_work;
        cout << "\tEnter Position: ";
        cin >> position;
        cout << "\tEnter Salary: ";
        cin >> salary;
        cout << "\tEnter Username: ";
        cin >> username;
        cout << "\tEnter Password: ";
        cin >> password;
        cout << endl
             << endl;
    }
    void Display()
    {
        cout<<"ID\tName\tAge\tGender\tDate of Birth\tAddress\tStart to work\tPosition\tSalary\n";
        cout << setw(5) << id << setw(15) << name << setw(10) << age << setw(15) << gender << setw(20) << dob << setw(15) << address << setw(15)
             << start_to_work << setw(10) << position << setw(8) << salary << "$" << endl;
    }
    void Update()
    {
        int op_update;
        cout << "____________________________________________________________\n\n";
        cout << ">>>>>>>>>>>>>>>>>>>>>Calmette Hospital<<<<<<<<<<<<<<<<<<<<<<\n\n";
        cout << "____________________________________________________________\n\n";
        cout << "\t[1]. Udate ID" << endl;
        cout << "\t[2]. Udate Name" << endl;
        cout << "\t[3]. Udate Age" << endl;
        cout << "\t[4]. Udate Gender" << endl;
        cout << "\t[5]. Udate Date of birth" << endl;
        cout << "\t[6]. Udate Address" << endl;
        cout << "\t[7]. Udate Position" << endl;
        cout << "\t[8]. Udate All" << endl;
        cout << "Choose your  choice one-<(o)>-: ";
        cin >> op_update;
        cout << "____________________________________________________________\n\n";
        switch (op_update)
        {
        case 1:
            cout << "\tID Staff: " << id << endl;
            cout << "\tEnter New ID: ";
            cin >> id;
            break;
        case 2:
            cout << "\tName Staff: " << name << endl;
            cout << "\tEnter New Name: ";
            cin >> name;
        case 3:
            cout << "\tAge Staff: " << age << endl;
            cout << "\tEnter New Age: ";
            cin >> age;
            break;
        case 4:
            cout << "\tGender Staff: " << gender << endl;
            cout << "\tEnter New Gender: ";
            cin >> gender;
            break;
        case 5:
            cout << "\tDate of Birth's Staff: " << dob << endl;
            cout << "\tEnter New Date of Birth: ";
            cin >> dob;
            break;
        case 6:
            cout << "\tAddress Staff: " << address << endl;
            cout << "\tEnter New Address: ";
            cin >> address;
            break;
        case 7:
            cout << "\tPosition Staff: " << position << endl;
            cout << "\tEnter New Position: ";
            cin >> position;
            break;
        case 8:
            cout << "\tID Staff           : " << id << endl;
            cout << "\tName Staff         : " << name << endl;
            cout << "\tAge Staff          : " << age << endl;
            cout << "\tGender Staff       : " << gender << endl;
            cout << "\tDate of Birth's Staff: " << dob << endl;
            cout << "\tAddress Staff      : " << address << endl;
            cout << "\tPosition Staff     : " << position << endl;
            cout << "\tEnter New ID         : ";
            cin >> id;
            cout << "\tEnter New Name     : ";
            cin >> name;
            cout << "\tEnter New Age      : ";
            cin >> age;
            cout << "\tEnter New Gender   : ";
            cin >> gender;
            cout << "\tEnter New Date of Birth: ";
            cin >> dob;
            cout << "\tEnter New Address  : ";
            cin >> address;
            cout << "\tEnter New Position : ";
            cin >> position;
        }
    }
    void Search()
    {
        int op_search, id_search;
        string name_search;

        cout << ">>>>>>Search Option<<<<<<<\n";
        cout << "[1].Search By ID.\n";
        cout << "[2].Search By Name.\n";
        cout << "Choose your choice one-<(o)>-: ";
        cin >> op_search;
        switch (op_search)
        {

        case 1:
            cout << "Enter ID: ";
            cin >> id_search;
            if (id_search == id)
            {
                Display();
            }
            break;
        case 2:
            cout << "Enter Name: ";
            cin >> name_search;
            if (name_search == name)
            {
                Display();
            }
            break;
        }
    }
};

int main()
{
    int n, i;
    int n_staff = 0;
    login();
    system("cls");
    Manager obj[100];
    STAFF obj1[100];
    system("cls");
    User obj2;
    int option;
    do
    {
        cout << "\n____________________________________________________________\n\n";
        cout << ">>>>>>>>>>>>>>>>>>>>>Calmette Hospital<<<<<<<<<<<<<<<<<<<<<<\n\n";
        cout << "____________________________________________________________\n\n";
        cout << "\t\t\t[1]. Manager" << endl;
        cout << "\t\t\t[2]. Staff" << endl;
        cout << "\t\t\t[3]. User" << endl;
        cout << "\t\t\t[4]. Exit" << endl;
        cout << "____________________________________________________________\n";
        cout << "\t\tPlease choose one option!\n";
        cin >> option;
        switch (option)
        {

        case 1:
            int op_mgm;
            
            system("cls");
            do
            {
                cout << "\n____________________________________________________________\n\n";
                cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>Manager<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
                cout << "____________________________________________________________\n\n";
                cout << "\t\t[1]. Create Account for Staff\n\n";
                cout << "\t\t[2]. Output Staff Information\n\n";
                cout << "\t\t[3]. Search Staff Information\n\n";
                cout << "\t\t[4]. Update Staff Information\n\n";
                cout << "\t\t[5]. Delete Staff Information\n\n";
                cout << "\t\t[6]. Back\n\n";
                cout << "\t\t[7]. Exit\n\n";
                cout << "Please Choose Your Choice one  -<(o)>-: ";
                cin >> op_mgm;

                switch (op_mgm){

                case 1:
                    cout << "How many staff do you want to create? ";
                    cin >> n;
                    for (i = 0; i < n_staff; i++)
                    {

                        obj[n_staff].createAccountStaff();
                        n_staff++;
                    }
                    break;

                case 2:
                    cout << "____________________________________________________________________________________________________________________\n";
                    for (i = 0; i < n_staff; i++)
                    {
                        obj[i].Display();
                    }
                    cout << "\n\t\t\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 3:
                    for (i = 0; i < n_staff; i++)
                    {
                        obj[i].Search();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 4:
                    for (i = 0; i < n_staff; i++)
                    {

                        obj[i].Update();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 5:
                    int id_delete;
                    cout << "\tEnter ID :";
                    cin >> id_delete;
                    for (i = 0; i < n_staff; i++)
                    {
                        if (id_delete == obj[i].getId())
                        {
                            obj[i] = obj[i + 1];

                            n_staff--;
                            cout << "\tDeleted successful!" << endl;
                            break;
                        }
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                }

            } while (op_mgm != 6);
            break;
        case 2:
            int op_patient;
            int op_staff;
            do
            {

                cout << "____________________________________________________________\n\n";
                cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>STAFF<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
                cout << "____________________________________________________________\n\n";
                cout << "\t\t[1]. Input Patient Information\n\n";
                cout << "\t\t[2]. Output Patient Information\n\n";
                cout << "\t\t[3]. Search Patient Information\n\n";
                cout << "\t\t[4]. Update Patient Information\n\n";
                cout << "\t\t[5]. Delete Patient Information\n\n";
                cout << "\t\t[6]. Building of Information\n\n";
                cout << "\t\t[7]. Type of Diseases Information\n\n";
                cout << "\t\t[8]. Back\n\n";
                cout << "\t\t[9]. Exit\n\n";
                cout << "Please Choose Your Choice one  -<(o)>-: ";
                cin >> op_staff;
                switch (op_staff)
                {

                case 1:
                    cout << "\tHow many patient ?:";
                    cin >> op_patient;
                    for (i = 0; i < n; i++)
                    {
                        obj1[i].InputPatient();
                    }
                    break;
                case 2:
                    cout << "____________________________________________________________________________________________________________________\n";
                    for (i = 0; i < n; i++)
                    {
                        obj1[i].OutputPatient();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 3:
                    for (i = 0; i < n_staff; i++)
                    {
                        obj1[i].SearchPatient();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 4:
                    for (i = 0; i < n_staff; i++)
                    {
                        obj1[i].UpdatePatient();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 5:

                    break;
                case 6:
                    for (i = 0; i < n_staff; i++)
                    {
                        obj1[i].Building();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 7:
                    for (i = 0; i < n_staff; i++)
                    {
                        obj1[i].TypeDiseses();
                    }
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;

                case 9:
                    exit(0);
                    break;
                }

            } while (op_staff != 8);

            break;

        case 3:
            int op_user;
            do
            {
                cout << "____________________________________________________________\n\n";
                cout << ">>>>>>>>>>>>>>>>>>>>>Calmette Hospital<<<<<<<<<<<<<<<<<<<<<<\n\n";
                cout << "____________________________________________________________\n\n";
                cout << "\t\t[1].Patient Care\n";
                cout << "\t\t[2].Builing \n";
                cout << "\t\t[3].Type of diseases\n";
                cout << "\t\t[4].Contact Us\n";
                cout << "\t\t[5].Back\n";
                cout << "\t\t[6].Exit\n\n";
                cout << "____________________________________________________________\n";
                cout << "\tChoose your choice!:";
                cin >> op_user;
                switch (op_user)
                {
                case 1:
                    cout << "____________________________________________________________\n";
                    obj2.PatientCare();
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();

                    break;
                case 2:
                    obj2.Building();
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 3:
                    obj2.Disease();
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 4:
                    cout << "\tTel:{855} 23 426 948\n";
                    cout << "\tHotline:{855} 11 426 948\n";
                    cout << "\n\t\t\tPress any keys to continue!";
                    getch();
                    break;
                case 6:
                    exit(0);
                    break;
                }
            } while (op_user != 5);
            break;
        case 4:
            exit(0);
            break;
        }
    } while (option != 0);
    return 0;
}