#include<iostream>
#include<conio.h>
using namespace std;

double total_Balance_us = 0;
long total_Balance_kh = 0;
double amountUs = 0;
long amountKh = 0;
int internet,tv,wate,electric;

void Ruler(){
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < 30; i++){
            cout << "-";
        }
        cout << endl;
    }
}

void myAccount(double total_Balance_us,long total_Balance_kh){
    cout << "\n\t---------> My Account <----------\n\n";
    cout << "\tyour balance US is: " << total_Balance_us << " USD \n";
    cout << "\tyour balance KH is: " << total_Balance_kh << " KHR \n";
}

long depositKh(){
    cout << "\n\t----------> Deoposit Account KH <------------\n\n";
    cout << "Enter amount do you want DEPOSIT: ";
    cin >> amountKh;
    if(amountKh > 0){
        return amountKh;
    }else {
        cout << "\tInvalid amount!\n";
        return amountKh = 0;
    }
}

double depositUs(){
    cout << "\n\t----------> Deoposit Account US <------------\n\n";
    cout << "Enter amount do you want DEPOSIT: ";
    cin >> amountUs;
    if(amountUs > 0){
        return amountUs;
    }else {
        cout << "\tInvalid amount!\n";
        return amountUs = 0;
    }
}

long withDrawKh(){
    cout << "\n\t----------> Withdraw Account KH <------------\n\n";
    cout << "Enter amount do you want WITHDRAW: ";
    cin >> amountKh;
    if(amountKh > 0){
        return amountKh;
    }else {
        cout << "\tInvalid amount!\n";
        return 0;
    }
}

double withDrawUs(){
    cout << "\n\t----------> Withdraw Account US <------------\n\n";
    cout << "Enter amount do you want WITHDRAW: ";
    cin >> amountUs;
    if(amountUs > 0){
        return amountUs;
    }else {
        cout << "\tInvalid amount!\n";
        return 0;
    }
}

long tranSfersKh(){
    cout << "\n\t----------> Transfer Account KH <------------\n\n";
    cout << "Enter Amount KHR: ";
     cin >> amountKh;
    return amountKh; 
}

double tranSfersUs(){
    cout << "\n\t----------> Transfer Account US <------------\n\n";
    cout << "Enter Amount USD: ";
    cin >> amountUs;
    return amountUs;
}
long PaymentKh(){
    cout << "\n\t----------> Payment <--------------\n";
    cout << "Enter Amount for paymemt: ";
    cin >> amountKh;
    return amountKh;
}
double PaymentUs(){
    cout << "\n\t----------> Payment <--------------\n";
    cout << "Enter Amount for paymemt: ";
    cin >> amountUs;
    return amountUs;
}
void PaymentCurrency(){
    int opPcc;
    Ruler();
    cout << "\n\tPayment US\n";
    cout << "\tPayment KH\n";
    Ruler();
    cout << "Choose Currency: ";
    cin >> opPcc;
    switch(opPcc){
        case 1:
            total_Balance_us -= PaymentUs();
        break;
        case 2:
            total_Balance_kh -= PaymentKh();
        break;
    }
}


void Atm(){
    int opDp;
    int choice;
    do{
        Ruler();
        cout << "\t1.My Account\n";
        cout << "\t2.Desopsit\n";
        cout << "\t3.Withdraw\n";
        cout << "\t4.Transfers\n";
        cout << "\tPayment\n";
        cout << "\t0.Exit\n";
        Ruler();
        cout << "Please choose option: ";
        cin >> choice;
        switch(choice){
            case 1:
                myAccount(total_Balance_us,total_Balance_kh);
            break;
            case 2:
                Ruler();
                cout << "\t1).Account US\n";
                cout << "\t2).Account KH\n";
                cout << "\t0).Exit\n";
                Ruler();
                cout << "Enter your choice: ";
                cin >> opDp;
                switch(opDp){
                    case 1:
                        total_Balance_us += depositUs();
                    break;
                    case 2:
                        total_Balance_kh += depositKh();
                    break;
                    case 0:
                        exit(0);
                }
                myAccount(total_Balance_us,total_Balance_kh);
            break;
            case 3:
                Ruler();
                cout <<"\t1).Account US\n";
                cout <<"\t2).Account KH\n";
                Ruler();
                cout << "Enter your choice: ";
                cin >> opDp;
                switch(opDp){
                    case 1:
                        total_Balance_us -= withDrawUs();
                    break;
                    case 2:
                        total_Balance_kh -= withDrawKh();
                    break;
                }
                myAccount(total_Balance_us,total_Balance_kh);
            break;
            case 4:
                int opTs;
                int transferkh;
                Ruler();
                cout <<"\t1).Transfer to own accout\n";
                cout <<"\t2).Transfer to other Account\n";
                Ruler();
                cout << "Enter your choice: ";
                cin >> opDp;
                switch(opDp){
                    case 1:
                        Ruler();
                        cout << "\tSeclet account to recive\n";
                        cout << "\t1).Account US\n";
                        cout << "\t2).Account KH\n";
                        Ruler();
                        cout << "Choose Account recive: ";
                        cin >> opTs;
                        switch(opTs){
                            case 1:
                                total_Balance_kh -= tranSfersKh();
                                total_Balance_us += amountKh / 4000;
                            break;
                            case 2:
                                total_Balance_us -= tranSfersUs();
                                total_Balance_kh += amountUs * 4000;
                            break;
                        }
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                    case 2:
                        Ruler();
                        cout << "\tTransfers to other account\n";
                        cout << "\t1).Account US\n";
                        cout << "\t2).Account KH\n";
                        Ruler();
                        cout << "Choose Account : ";
                        cin >> opTs;
                        switch(opTs){
                            case 1:
                                total_Balance_us -= tranSfersUs();
                            break;
                            case 2:
                                total_Balance_kh -= tranSfersKh();
                            break;
                        }
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                }
            break;
            case 5:
                int opPm;
                cout << "\n\t------------> Payment <------------\n\n";
                cout << "\t1).Water\n";
                cout << "\t2).Electric\n";
                cout << "\t3).Internet\n";
                cout << "\t4).TV\n";
                cout << "\t5).Other Payment\n";
                Ruler();
                cout << "Choose your payment: ";
                cin >> opPm;
                switch(opPm){
                    case 1:
                        PaymentCurrency();
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                    case 2:
                        PaymentCurrency();
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                    case 3:
                        PaymentCurrency();
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                    case 4:
                        PaymentCurrency();
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                    case 5:
                        PaymentCurrency();
                        myAccount(total_Balance_us,total_Balance_kh);
                    break;
                }
            break;
        }
        cout << "\n\tEnter <{---|}";
        getch();
        system("cls");
    }while(choice != 0);
}
int main(){
    Atm();
    return 0;
}