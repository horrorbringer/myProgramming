#include <iostream>
using namespace std;

    int sum = 0;
    double average;
    int lagerArray;
    int max_index;
    int min_index;
    int smallerArray, tmp;
    int list[5];

    // insert array
    void insertArray(){
        cout << "\n-------------> Input the Value <---------------\n\n";
        for (int index = 0; index < 5; index++)
        {
            cout << "Please input the value index ["<<index<<"] = ";
            cin >> list[index];
            sum = sum + list[index];
        }
            average = sum / 5;
    }

    // display value
    void displayValue(){
        cout << "\n------------> Output the Value <----------------\n\n";
        for (int index = 0; index < 5; index++)
        {
            cout << "The value of array index [" << index << "] = " << list[index] << endl;
        }
    }

    // find maxArray
    void maxArray(){
        for (int index = 0; index < 5; index++)
        {
            if (list[max_index] < list[index])
            {                      
                max_index = index; 
                lagerArray = list[max_index];
            }
        }
        cout << "\n                   _________________________\n";
        cout << "                  |                         |\n";
        cout << "The max array is: |"<<"\t\t"<< lagerArray << "          |\n";
        cout << "                  |_________________________|\n";
    }

    // find minArray
    void minArray(){
        for(int index = 0; index < 5; index++){
            if(list[min_index] > list[index])
            {
                min_index = index;
                smallerArray = list[min_index];
            }
        }
        cout << "\n                   _________________________\n";
        cout << "                  |                         |\n";
        cout << "The min array is: |" <<"\t\t"<<smallerArray << "          |\n";
        cout << "                  |_________________________|\n";
    }

    // sort array from small to big
    void sortArray(){
        bool sort;
        sort = false;
        for(int index = 0; index < 5-1; index++){
            for(int j = index + 1; j < 5; j++){
                if(list[index] > list[j]){
                    tmp = list[index];
                    list[index] = list[j];
                    list[j] = tmp;
                    sort = true;
                }
            }
        }
        if(sort == true){
            cout << "Sort Array Completed!\n";
        }else {
            cout << "Sort Arrray not Completed!\n";
        }
    }

    // display after sort array
    void afterSort(){
        cout << "\n----------------> After sort <----------------\n";
        for(int index = 0; index < 5; index++){
            cout << "The array after sort is ["<<index<<"] = " << list[index] << endl;
        }
    }

    // display result 
    void displayResult(){
        cout << "\n----------------> Result <----------------\n";
        cout << "Total to a  rray is = " << sum <<endl;
        cout << "The average is = " << average << endl;
        cout << "The largerArray is = " << lagerArray << endl;
        cout << "The smallerArray is = " << smallerArray << endl;
    }

    int main(){
        system("cls");
        int op;
        do{
        above:
        cout << " \n___________________________________________\n";
        cout << "|                                         |\n";
        cout << "|-------------->> Menu <<-----------------|\n";
        cout << "|_________________________________________|\n\n";
        cout << "1.Insert Array\n";
        cout << "2.Display Value Array\n";
        cout << "3.Max Array\n";
        cout << "4.Min Array\n";
        cout << "5.Sort Array\n";
        cout << "6.Display After Sort Array\n";
        cout << "7.Display Result\n";
        cout << "8.Exit\n\n";
        cout << "choose option: ";cin >> op;
        switch(op){
            case 1:
                insertArray();
                break;
            case 2:
                displayValue();
                break;
            case 3:
                maxArray();
                break;
            case 4:
                minArray();
                break;
            case 5:
                sortArray();
                break;
            case 6:
                afterSort();
                break;
            case 7:
                displayResult();
                break;
        }
        }while(op !=8);
    return 0;
}

