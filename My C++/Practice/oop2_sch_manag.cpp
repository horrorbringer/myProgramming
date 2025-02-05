#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Person{
    protected:
        int id;
        string name,gender;
    public:
    Person(){
        this->id=0;
        this->name="Unkow";
        this->gender="M";
    }
    // Encapulation set get
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    string getGender(){
        return gender;
    }
    void setId(int paraid){
        this->id=paraid;
    }
    void setName(string paraname){
        this->name=paraname;
    }
    void setGender(string paragender){
        this->gender=paragender;
    }
    void Input(){
        cout<<"Input ID : ";cin>>id;
        cout<<"Input Nmae : ";cin>>name;
        cout<<"Input Gender : " ;cin>>gender;
    }
    void Output(){
        cout<<setw(10)<<id;
        cout<<setw(15)<<name;
        cout<<setw(15)<<gender;
    }
};
class Student : public Person{
    private:
        float score1,score2,score3;
    public:
        Student(){
            this->score1 =0;
            this->score2 =0;
            this->score3 =0;
        }
        void Input(){
            Person::Input(); // call fun input in person
            cout<<"Input Score1 : ";cin>>score1;
            cout<<"Input Score2 : ";cin>>score2;
            cout<<"Input Score3 : ";cin>>score3;
        }
        void Output(){
            Person::Output();
            cout<<setw(15)<<score1;
            cout<<setw(15)<<score2;
            cout<<setw(15)<<score3;
            cout<<setw(10)<<getAvg();
            cout<<setw(10)<<getGrade()<<endl;
        }
        double getTotalScore(){
            return score1+score2+score3;
        }
        double getAvg(){
            return getTotalScore()/3;
        }
        char getGrade(){
            double avg = getAvg();
            char grade;
            if(avg <= 100 && avg >=90){
                grade = 'A';
            }else if(avg < 90 && avg >=80){
                grade = 'B';
            }else if(avg < 80 && avg >=70){
                grade = 'C';
            }else if(avg < 70 && avg >=60){
                grade = 'D';
            }else if(avg < 60 && avg >=50){
                grade = 'E';
            }else if(avg <50){
                grade = 'F';
            }
            return grade;
        }
        string getResult(){
            string result;
            result = getAvg() < 50 ? "Fail" : "Pass";
            // if(getAvg() <50){
            //     result = "Fail";
            // }else{
            //     result = "Pass";
            // }
            return result;
        }
};
class Teacher{

}; 
class Staff{

};
int main(){
    system("cls");
    Student objS[100],objTmp;
    int op,n=0,i,j,idTmp,x;
    do{
        cout<<"\n--------->> School Student <<----------"<<endl;
        cout<<"\n1.Input Student"<<endl;
        cout<<"2.Output Student"<<endl;
        cout<<"3.Search Student"<<endl;
        cout<<"4.Delete Student"<<endl;
        cout<<"5.Update Student"<<endl;
        cout<<"6.Sort Student"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Input choice : ";cin>>op;
        switch(op){
            case 1:
                system("cls");
                cout<<"\n-------------------->> Input Student Info <<------------------"<<endl<<endl;
                objS[n].Input();
                n +=1 ;
            break;
            case 2:
                system("cls");
                cout<<"\n------------------->> List All Student Info <<----------------"<<endl<<endl;
                for(i = 0;i<n;i++){
                    objS[i].Output();
                }
            break;
            case 3: 
                system("cls");
                cout<<"\n----------------->> Search id student in list <<-----------------"<<endl<<endl;
                cout<<"Input id do you want search : ";cin>>idTmp;
                x=0;
                for(i=0;i<n;i++){
                    if(idTmp == objS[i].getId()){
                        cout<<"Here is student id : "<<idTmp<<endl<<endl;
                        objS[i].Output();
                        x=1;
                        break;
                    }
                }
                if(x==0){
                    cout<<"Search not found"<<endl;
                }
            break;
            case 4:
                system("cls");
                cout<<"\n----------------->> Delete student by id from list <<-------------------"<<endl<<endl;
                cout<<"Input id studnet do you delete : ";cin>>idTmp;
                x=0;
                for(i=0;i<n;i++){
                    if(idTmp==objS[i].getId()){
                        for(j=i;j<n;j++){
                            objS[j]=objS[j+1];
                        }
                        cout<<"Student id "<<idTmp<<" Delete completed"<<endl;
                        n -=1;
                        x=1;
                        break;
                    }
                }
                if(x==0){
                    cout<<"Student id "<<idTmp<<" not found in list !"<<endl;
                }
            break;
            case 5:
                system("cls");
                cout<<"\n------------->> Update student intfo by id <<----------------"<<endl<<endl;
                cout<<"Input student id to update : ";cin>>idTmp;
                x=0;
                for(i=0;i<n;i++){
                    if(idTmp==objS[i].getId()){
                        cout<<"\n-------------->> Input New Informantion <<--------------"<<endl<<endl;
                        objS[i].Input();
                        x=1;
                        cout<<"\n------------>> Student info Update success <<-----------------"<<endl;
                    }
                }
                if(x==0){
                    cout<<"\n----------------->> Student not found in list <<----------------"<<endl;
                }
            break;
            case 6:
                do{
                system("cls");
                cout<<"\n----------------->> Sort By <<---------------------"<<endl<<endl;
                cout<<"1.Sort by name (A-Z)"<<endl;
                cout<<"2.Sort by grade (A-F)"<<endl;
                cout<<"3.Sort by avg"<<endl;
                cout<<"4.Back"<<endl;
                cout<<"Input option : ";cin>>op;
                switch(op){
                    case 1:
                    system("cls");
                        cout<<"\n----------->> List student sort by name (A-Z) <<--------------"<<endl;
                        for(i=0;i<n;i++){
                            for(j=i;j<n;j++){
                                if(objS[i].getName()>objS[j].getName()){
                                    objTmp = objS[i];
                                    objS[i] = objS[j];
                                    objS[j] = objTmp;
                                }
                            }
                        }
                        // List all student again
                        for(i=0;i<n;i++){
                            objS[i].Output();
                        }
                    break;
                    case 2:
                        system("cls");
                        cout<<"\n----------->> List student sort by grade (A-F) <<--------------"<<endl<<endl;
                        for(i=0;i<n;i++){
                            for(j=i;j<n;j++){
                                if(objS[i].getGrade()>objS[j].getGrade()){
                                    objTmp = objS[i];
                                    objS[i] = objS[j];
                                    objS[j] = objTmp;
                                }
                            }
                        }
                        // List all student again
                        for(i=0;i<n;i++){
                            objS[i].Output();
                        }
                    break;
                    case 3:
                        system("cls");
                        cout<<"\n----------->> List student sort by Average <<--------------"<<endl<<endl;
                        for(i=0;i<n;i++){
                            for(j=i;j<n;j++){
                                if(objS[i].getAvg()>objS[j].getAvg()){
                                    objTmp = objS[i];
                                    objS[i] = objS[j];
                                    objS[j] = objTmp;
                                }
                            }
                        }
                        // List all student again
                        for(i=0;i<n;i++){
                            objS[i].Output();
                        }
                    break;
                }

                }while(op !=4);
            break;
            case 7:exit(0);

        }
    }while(op !=7);

    return 0;
}