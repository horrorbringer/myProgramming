#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int score_M, score_P, score_C, score_B, score_K;
    float total_score, averge;

    cout << "\tEnter score Math :";
    cin >> score_M;
    cout << "\tEnter score Physic :";
    cin >> score_P;
    cout << "\tEnter score Cemesty :";
    cin >> score_C;
    cout << "\tEnter score Biology :";
    cin >> score_B;
    cout << "\tEnter score Khmer :";
    cin >> score_K;
    total_score = score_B + score_C + score_M + score_P + score_K;
    cout << "\tTotal Score is : " << total_score << endl;
    averge = total_score / 5;
    cout << fixed << showpoint << setprecision(2);
    cout << "\tYour Averge is : " << averge << endl;
    if (averge >= 90 && averge <= 100)
    {
        cout << "\tcongatulation Your Great A";
    }
    else if (averge >= 80 && averge < 90)
    {
        cout << "\tcongatulation Your Great B";
    }
    else if (averge < 80 && averge >= 70)
    {
        cout << "\tcongatulation Your Great C";
    }
    else if (averge < 70 && averge >= 60)
    {
        cout << "\tcougatulation Your Gread D";
    }
    else if (averge < 60 && averge >= 50)
    {
        cout << "\tcongatulation Your Great E";
    }
    else if (averge < 50)
    {
        cout << "\tyour Great F\n";
        cout << "\tyou fail !";
    }
    return 0;
}