#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val, pos = -1;
    int low = 0, high = n - 1, middle;

    cout << "Enter the search variable: ";
    cin >> val;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    while (low <= high) {
        middle = (low + high) / 2;
        if (val == arr[middle]) {
            pos = middle;
            break;
        } else if (val < arr[middle]) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }

    if (pos == -1)
        cout << "The search variable is not in the array" << endl;
    else
        cout << "The search variable " << val << " is at index " << pos << endl;

    return 0;
}
