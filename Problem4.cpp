#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {12, 45, 7, 89, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);

    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
