#include <iostream>
#include <iomanip>
using namespace std;

void swap(float *a, float *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(float arr[], float n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index]) {
         min_index = j;
      }
    }
    swap(&arr[min_index], &arr[i]);
  }
}

int main() {
  int n;
  float arr[n];
  //cout<<fixed<<showpoint<<setprecision(2);
  cout << "Enter the number of elements: ";
  cin >> n;
  cout << "Enter " << n << " numbers: ";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  selectionSort(arr, n);
  cout << "Sorted numbers: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "   ";
  }
  cout << endl;
  return 0;
}