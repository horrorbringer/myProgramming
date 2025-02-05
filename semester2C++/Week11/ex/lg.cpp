#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void displayProgressBar(int totalItems) {
    int width = 50;  // Width of the progress bar
    int progress = 0;

    string progressChar = "#";
    string bar;

    // Incrementally update the progress bar
    for (int i = 1; i <= totalItems; ++i) {
        progress = i * width / totalItems;
        bar = string(progress, progressChar[0]) + string(width - progress, ' ');

        system("color A");
        cout << "\r[";
        cout << bar;
        cout << "] " << (i * 100 / totalItems) << "% ";
        cout.flush();

        // Simulate work with a small delay
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << endl;
}

int main() {
    cout << "1 items:" << endl;
    displayProgressBar(1);

    cout << "2 items:" << endl;
    displayProgressBar(2);

    cout << "4 items:" << endl;
    displayProgressBar(4);

    cout << "16 items:" << endl;
    displayProgressBar(16);

    cout << "64 items:" << endl;
    displayProgressBar(64);

    cout << "256 items:" << endl;
    displayProgressBar(256);
    return 0;
}