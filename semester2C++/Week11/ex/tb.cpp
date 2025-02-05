#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int colWidth = 12;

    // Header
    cout << setw(60) << setfill('-') << "" << endl;
    cout << setw(30) << setfill(' ') << "Output" << setw(30) << setfill('-') << "" << endl;
    cout << setfill(' ');

    // Column names
    cout << setw(5) << "No" 
         << setw(colWidth) << "ID" 
         << setw(colWidth) << "Name" 
         << setw(5) << "Age" 
         << setw(colWidth) << "Gender" 
         << setw(colWidth) << "Contact" 
         << setw(colWidth) << "Salary" << endl;

    // Table border
    cout << setw(60) << setfill('-') << "" << endl;

    // Data rows
    cout << setfill(' ')
         << setw(5) << "1" << setw(colWidth) << "1001" << setw(colWidth) << "KUN SAROM" << setw(5) << "19" << setw(colWidth) << "M" << setw(colWidth) << "097882324" << setw(colWidth) << "450 $" << endl
         << setw(5) << "2" << setw(colWidth) << "2002" << setw(colWidth) << "HOIN HORLY" << setw(5) << "18" << setw(colWidth) << "M" << setw(colWidth) << "098378217" << setw(colWidth) << "400 $" << endl
         << setw(5) << "3" << setw(colWidth) << "3001" << setw(colWidth) << "LENG RAVET" << setw(5) << "20" << setw(colWidth) << "M" << setw(colWidth) << "097178493" << setw(colWidth) << "556 $" << endl
         << setw(5) << "4" << setw(colWidth) << "4001" << setw(colWidth) << "NGET KHIM" << setw(5) << "18" << setw(colWidth) << "M" << setw(colWidth) << "087743567" << setw(colWidth) << "700 $" << endl
         << setw(5) << "5" << setw(colWidth) << "5001" << setw(colWidth) << "NIM SOPHEA" << setw(5) << "20" << setw(colWidth) << "M" << setw(colWidth) << "097678484" << setw(colWidth) << "600 $" << endl
         << setw(5) << "6" << setw(colWidth) << "6001" << setw(colWidth) << "NY VANNDY" << setw(5) << "21" << setw(colWidth) << "M" << setw(colWidth) << "096584388" << setw(colWidth) << "600 $" << endl
         << setw(5) << "7" << setw(colWidth) << "7001" << setw(colWidth) << "ONN RATATI" << setw(5) << "22" << setw(colWidth) << "M" << setw(colWidth) << "098374732" << setw(colWidth) << "333 $" << endl
         << setw(5) << "8" << setw(colWidth) << "8001" << setw(colWidth) << "PHIN PONLE" << setw(5) << "21" << setw(colWidth) << "M" << setw(colWidth) << "098737788" << setw(colWidth) << "800 $" << endl
         << setw(5) << "9" << setw(colWidth) << "9009" << setw(colWidth) << "SAN TOLAKA" << setw(5) << "22" << setw(colWidth) << "M" << setw(colWidth) << "099874543" << setw(colWidth) << "199 $" << endl;

    // Footer
    cout << setw(60) << setfill('-') << "" << endl;
    return 0;
}
