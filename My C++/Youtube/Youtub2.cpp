#include<iostream>
using namespace std;

void pattern()
{
    int i,j,n;
    cout<<"Enter size of pttern :";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    pattern();
    return 0;
}
