// C++ Program to illustrate how to create a random
// alpha-numeric string
#include <iostream>
#include <random>
#include <string>
using namespace std;

string generateRandomString(int length)
{
    // Define the list of possible characters
    const string CHARACTERS
        = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuv"
          "wxyz0123456789!@#$%^&*()_+=-/";

    // Create a random number generator
    random_device rd;
    mt19937 generator(rd());

    // Create a distribution to uniformly select from all
    // characters
    uniform_int_distribution<> distribution(
        0, CHARACTERS.size() - 1);

    // Generate the random string
    string random_string;
    for (int i = 0; i < length; ++i) {
        random_string
            += CHARACTERS[distribution(generator)];
    }

    return random_string;
}

int main()
{
    int length ;
    cout << "Legnth of number you want: "; cin >> length;
    string random_string = generateRandomString(length);
    cout << "              =======================\n";
    cout << "Random String:    " << random_string << endl;
    cout << "              =======================\n";

    return 0;
}
