#include<iostream>
using namespace std;

/*

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout<<"Enter element to search for; "<<'\n';
    cin>>myNum;

    index = searchArray(numbers, size, myNum); 

    if(index != -1){
        cout<<myNum<<" is at index "<<index;

    }
    else{
        cout<<myNum<<" is not int the array";
    }
    return 0;
}

int searchArray(int array[], int size, int element){
    for(int i=0;i<size;i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
*/

int searchArray(string array[], int size, string element);

int main(){
    string foods[] = {"pizza", "humburger", "hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    string myFood;

    cout<<"Enter element to search for; "<<'\n';
    cin>>myFood;

    index = searchArray(foods, size, myFood); 

    if(index != -1){
        cout<<myFood<<" is at index "<<index;

    }
    else{
        cout<<myFood<<" is not int the array";
    }
    return 0;
}

int searchArray(string array[], int size, string element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}