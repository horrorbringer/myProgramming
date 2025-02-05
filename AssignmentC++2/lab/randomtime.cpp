#include<iostream>
#include <ctime>
#include<windows.h>
using namespace std;
struct RdTime{
    string Time;
	string getTime(){
		time_t timestamp = time(NULL);
		struct tm datetime = *localtime(&timestamp);
		return Time = asctime(&datetime);
	}
};

int main(){
    int n=1,j=0;
    RdTime tm[100];
    
        cout << (tm[j].getTime()) << endl;
        j++;
        // Sleep(3600);
    return 0;
}