#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main (){
    char option ;
    int a ,x,y;
    double result,num1,num2;
    start:
    cout<<"\t===============>>> Caculator <<<=============\n";
    cout<<"\t1:Plus\n";
    cout<<"\t2:Sub\n";
    cout<<"\t3:Multi\n";
    cout<<"\t4:Div\n";
    cout<<"\t5:Distribute waste\n";
    cout<<"\t6:Nature Logarithm\n";
    cout<<"\t7:Sqare Root\n";
    cout<<"\t8:Pow\n";
    cout<<"\tPleas choose one option (1->8) : ";
    cin>>a;
    switch (a) {
        case 1: 
            cout<<"\t===========<<< Add Two Numbers <<<==========="<<endl;
            cout<<"\tnum1 + num2"<<endl;
            cout<<"\tEnter num1 = ";cin>>num1; 
            cout<<"\tEnter num2 = ";cin>>num2;
            result = num1 + num2;
            cout<<"\tPlus : "<<num1<<" + "<<num2<<" = "<<result<<endl;
        break;
        case 2: 
            cout<<"\t===========<<< Subtract Two Number <<<==========="<<endl;
            cout<<"\tnum1 - num2"<<endl;
            cout<<"\tEnter num1 = ";cin>>num1;
            cout<<"\tEnter num2 = ";cin>>num2;
            result = num1 - num2;
            cout<<"\tSub : "<<num1<<" - "<<num2<<" = "<<result<<endl;
        break;
        case 3: 
            cout<<"\t===========<<< Multiply Two Number <<<==========="<<endl;
            cout<<"\tnum1 X num2"<<endl;
            cout<<"\tEnter num1 = ";cin>>num1;
            cout<<"\tEnter num2 = ";cin>>num2;
            result = num1 * num2;
            cout<<"\tMulti : "<<num1<<" X "<<num2<<" = "<<result<<endl;
        break;
        case 4:
            cout<<"\t===========<<< Divide Two Number <<<==========="<<endl;
            cout<<"\tnum1 / num2"<<endl;
            cout<<"\tEnter num1 = ";cin>>num1;
            cout<<"\tEnter num2 = ";cin>>num2;
            result = num1 / num2;
            cout<<"\tDiv : "<<num1<<" / "<<num2<<" = "<<result<<endl;
            break;
        case 5:
            cout<<"\t===========<<< Distribute waste <<<==========="<<endl;
            cout<<"\tnum1 % num1"<<endl;
            cout<<"\tEnter num1 = ";cin>>x;
            cout<<"\tEnter num2 = ";cin>>y;
            result = x % y ;
            cout<<"\tDist : "<<x<<" % "<<y<<" = "<<result<<endl;
        break;
        case 6:
            cout<<"\t===========<<< Nature Logarithm <<<==========="<<endl;
            cout<<"\tlog(x)"<<endl;
            cout<<"\tEnter value = ";cin>>x;
            result = log(x);
            cout<<"Nature Logarithm : log("<<x<<") = "<<result<<endl;
        break;
        case 7:
            cout<<"\t===========<<< Sqare Root <<<==========="<<endl;
            cout<<"\tsqrt(num1)"<<endl;
            cout<<"\tEnter value = ";cin>>num1;
            result = sqrt(num1);
            cout<<"\tSqare Root : sqrt("<<num1<<") = "<<result<<endl;
        break;
        case 8:
            cout<<"\t===========<<< Power <<<==========="<<endl;
            cout<<"\tpow(x, y)"<<endl;
            cout<<"\tEnter value = ";cin>>x;
            cout<<"\tEnter value = ";cin>>y;
            result = pow(x ,y);
            cout<<"\tPower ; pow("<<x<<", "<<y<<") = "<<result<<endl;
        break;
        default:
            cout<<"\tPleas chooses one option.........!\n";
        break;
    }
    cout<<"\tpress key to continue........!";
    getche();
    system("cls");
    goto start;
    return 0;
}