#include<iostream>
using namespace std;

int main(){
    //  fill() = fills a range if element with a specified value
    //           fill(begin, end, value)
    const int SIZE = 99;
    string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "humburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(string food : foods){
        cout<<food<<'\n';
    }
    return 0;
}