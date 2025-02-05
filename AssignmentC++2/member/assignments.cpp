#include<iostream>
#include<string>
using namespace std;
class staff{
    private:
    int id;
    int start_to_work;
    int age;
    string name;
    string dob;
    string job;
    string address;
    string position;
    string gender;
    float salary;
    int i,n,j;
    int op_up,id_update,id_delete;
    public:
void Menu(){
    cout<<"\t====>>Staff<<====\n";
    cout<<"\t====>>1.Insert staff\n";
    cout<<"\t====>>2.Display staff\n";
    cout<<"\t====>>3.Search staff\n";
    cout<<"\t====>>4.Update staff\n";
    cout<<"\t====>>5.delete staff\n";
}
void insert(){
    cout<<"\t Insert staff you want to input:";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"\t No="<<i+1<<endl;
        cout<<"\t Staff ID:";
        cin>>id;
        cout<<"\t Staff Start to work:";
        cin>>start_to_work;
        cout<<"\t Staff Age:";
        cin>>age;
        cout<<"\t Staff Name:";
        cin>>name;
        cout<<"\t Staff Dob:";
        cin>>dob;
        cout<<"\t Staff Job:";
        cin>>job;
        cout<<"\t Staff Address:";
        cin>>address;
        cout<<"\t Staff Position:";
        cin>>position;
        cout<<"\t Staff Gander:";
        cin>>gender;
        cout<<"\t Staff Salary:";
        cin>>salary;
    }
}
void display(){
    cout<<"\t====>>Display Staff<<====\n";
    for(i=0;i<n;i++){
        cout<<"\t No="<<i+1<<endl;
        cout<<"\t Staff ID="<<id<<endl;
        cout<<"\t Staff Staff Start to work="<<start_to_work<<endl;
        cout<<"\t Staff Age="<<age<<endl;
        cout<<"\t Staff Name="<<name<<endl;
        cout<<"\t Staff Dob="<<dob<<endl;
        cout<<"\t Staff Address="<<address<<endl;
        cout<<"\t Staff Position="<<position<<endl;
        cout<<"\t Staff Gender="<<gender<<endl;
        cout<<"\t Staff Salary="<<salary<<endl;
    }
}
void update(){
        cout<<"\t1.Update ID:";
        cout<<"\t2.Update Staff Start to work:";
        cout<<"\t3.Update Age:";
        cout<<"\t4.Update Name:";
        cout<<"\t5.Update Dob:";
        cout<<"\t6.Update Address:";
        cout<<"\t7.Update Position:";
        cout<<"\t8.Update Gender:";
        cout<<"\t9.Staff Salary:";
        cout<<"\tPlease Choose the option:";
        cin>>op_up;
        switch(op_up){
            case 1:
            id_update:
            cout<<"\t====>>Update ID<<====\n";
            cout<<"\t Enter id to update:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tProduct id="<<id;
                    cout<<"\tEnter New id:";
                    cin>>id;
                    break;
                    goto id_update;
            }
            case 2:
            start_update:
            cout<<"\t====>>Update Start to work<<====\n";
            cout<<"\t Enter id to update Start to work:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Start to work="<<start_to_work;
                    cout<<"\tEnter New Start to wrok:";
                    cin>>start_to_work;
                    break;
                    goto start_update;
            }
            case 3:
            age_update:
            cout<<"\t====>>Update Age<<====\n";
            cout<<"\t Enter id to update Age:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Age="<<age;
                    cout<<"\tEnter New Age:";
                    cin>>age;
                    break;
                    goto age_update;
            }
            case 4:
            name_update:
            cout<<"\t====>>Update Name<<====\n";
            cout<<"\t Enter id to update Name:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Name="<<name;
                    cout<<"\tEnter New Name:";
                    cin>>name;
                    break;
                    goto name_update;
            }
            case 5:
            dob_update:
            cout<<"\t====>>Update Dob<<====\n";
            cout<<"\t Enter id to update Dob:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Dob="<<dob;
                    cout<<"\tEnter New Dob:";
                    cin>>dob;
                    break;
                    goto dob_update;
            }
            case 6:
            add_update:
            cout<<"\t====>>Update Address<<====\n";
            cout<<"\t Enter id to update Address:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Address="<<address;
                    cout<<"\tEnter New Address:";
                    cin>>address;
                    break;
                    goto add_update;
            }
            case 7:
            pos_update:
            cout<<"\t====>>Update Position<<====\n";
            cout<<"\t Enter id to update Name:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Position="<<position;
                    cout<<"\tEnter New Position:";
                    cin>>position;
                    break;
                    goto pos_update;
            }
            case 8:
            gen_update:
            cout<<"\t====>>Update Gender<<====\n";
            cout<<"\t Enter id to update Gender:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Gender="<<gender;
                    cout<<"\tEnter New Gender:";
                    cin>>gender;
                    break;
                    goto gen_update;
            }
            case 9:
            sa_update:
            cout<<"\t====>>Update Salary<<====\n";
            cout<<"\t Enter id to update Salary:";
            cin>>id;
                if(id_update == id){
                    cout<<"\tNo="<<i+1<<endl;
                    cout<<"\tStaff Salary="<<salary;
                    cout<<"\tEnter New Salary:";
                    cin>>salary;
                    break;
                    goto sa_update;
            }
        }
    }
void Delete(){
    delete1:
    cout<<"====>>Delete Staff<<====\n";
    cout<<"\t Enter id to Delete:";
    cin>>id_delete;
        for(i=0;i<n;i++){
            if(id_delete == id);
                for(int j=i;j<n;j++){
                    id=j+1;
                    start_to_work=j+1;
                    age=j+1;
                    name=j+1;

                }
                n--; 
                goto delete1;
        }
}
};
int main(){
    int opSt;
    int nStf=0;
    staff obj[50];
    cout << "=====================================================================\n\n\n";
    cout << "\t1 <---- INSET INFORMATION STAFF\n\n";
    cout << "\t2 <---- DISPLAY INFORMATION STAFF\n\n";
    cout << "\t3 <---- UPDATE INFORMATION STAFF\n\n";
    cout << "\t4 <---- DELETE INFORMATION STAFF\n\n";
    cout << "\t5 <---- EXIT\n\n";
    cout << "______________________________________________\n\n";
    cout << "Select: ";
    cin >> opSt;
    switch(opSt){
        case 1:
            int x;
            cout << "How many staff do you wnat input: ";
            cin >> x ;
            for (int i = 0; i < x; i++){
                obj[nStf].insert();
                nStf++;
            }
        break;
        case 2:
            for(int i = 0; i <nStf;i++){
                obj[i].display();
            }
        break;
        case 3:
            
        break;
        case 4:
        break;
        case 5:
        break;

    }
    obj.insert();
    system("cls");
    obj.display();
    obj.update();
    system("cls");

    return 0;
}