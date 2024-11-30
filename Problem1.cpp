#include <iostream>
using namespace std;

void MaxMin(int arr[], int n, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
}

int main() {
    int arr[] = {4, 5, 2, 10, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    MaxMin(arr, n, max, min);
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    return 0;
}

