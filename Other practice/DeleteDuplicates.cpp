#include <iostream>
using namespace std;

int deleteDuplicates(int arr[], int* size) {
    int newSize = 0;

    for (int i = 0; i < *size; i++) {
        bool isDuplicate = false;

        // Check if arr[i] exists earlier in the array
        for (int j = 0; j < newSize; j++) {
            if ((arr[i] ^ arr[j]) == 0) {  // means arr[i] == arr[j]
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            arr[newSize++] = arr[i];  // move unique element forward
        }
    }

    *size = newSize;  // update size in caller
    return newSize;
}

int main() {
    int arr[100] = {1, 2, 3, 2, 4, 3, 5};
    int size = 7;

    deleteDuplicates(arr, &size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}