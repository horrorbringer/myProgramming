#include <iostream>

using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int arr[], int n) {
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

  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " numbers: ";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  selectionSort(arr, n);

  cout << "Sorted numbers: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}