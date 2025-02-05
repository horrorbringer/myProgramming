#include<iostream>
using namespace std;
int main(){
    int row , culm;
    
        for(row=0;row<=2;row++){
            for(culm=1;culm<=17;culm++){
                if(culm>=3-row&&culm<=6+row || culm>=12-row&&culm<=15+row){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
        for(row=0;row<9;row++){
                for(culm=1;culm<=17;culm++){
                    if(culm>=row+1&&culm<=17-row){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            cout<<"\n";
        }
    
    return 0;
}