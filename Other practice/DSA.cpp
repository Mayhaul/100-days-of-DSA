#include <iostream>
#include <vector>
using namespace std;

// void insertatfirst(int arr[], int &n, int key) {
//     for (int i = n; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = key;
//     n++;
// }
// void insertatlast(int arr[], int &n, int key) {
//     arr[n] = key;
//     n++;
// }
// void insertatindex(int arr[], int &n, int key, int index) {
//     if(index>=0 && index<n){ for (int i = n; i > index; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[index] = key;
//     n++;}
// }
// int main() {
//     int arr[100] = {1, 2, 3, 4, 5};
//     int n = 5; // Current size of the array
//     int key, index;
//     cout << "Enter the element to insert at the beginning: ";
//     cin >> key;
//     insertatfirst(arr, n, key);
//     cout << "Array after inserting at the beginning: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Enter the element to insert at the end: ";
//     cin >> key;
//     insertatlast(arr, n, key);
//     cout << "Array after inserting at the end: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Enter the element to insert at a specific index: ";

//     cin >> key;
//     cout << "Enter the index: ";
//     cin >> index;
//     insertatindex(arr, n, key, index);
//     cout << "Array after inserting at index " << index << ": ";
//     for (int i = 0; i < n; i++) {


//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Final size of the array: " << n << endl;
//     cout << "Final elements in the array: ";

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "End of program." << endl;




//     return 0;
// }

// SEARCHING
    // Binary Search
//     #include <iostream>
//     using namespace std;
    
    
//     int binarySearch(int arr[], int n, int key) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key)
//             return mid; // Found
//         else if (arr[mid] < key)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return -1; // Not found
// }

// int main(){
// int arr[] = {1,2,3,4,5,6,7,8,9,10};
// int len = sizeof(arr)/sizeof(arr[0]);
// int key = 5;
// int result = binarySearch(arr, len, key);
// if (result != -1)
//     cout << "Element found at index: " << result << endl;
// else
//     cout << "Element not found." << endl;

//     return 69;
// }

    // This loop prints the contents of the array from index 0 to 5.
// Note: If the array is declared as int arr[5], valid indices are 0 to 4.
// Accessing arr[5] goes beyond the allocated memory, which leads to undefined behavior.
// The program might print a garbage value, overwrite nearby variables, or crash.

    // #include <iostream>
    // using namespace std;

    // int main() {
    //     int arr[5] = {1, 2, 3, 4, 5};
    //     int x = 10;

    //     cout << "Before overflow:" << endl;
    //     cout << "x = " << x << endl;

    //     // Dangerous: writing beyond bounds
    //     arr[5] = 999;  // This may overwrite x

    //     cout << "After overflow:" << endl;
    //     cout << "x = " << x << endl;
    //     cout<<arr[5]<<endl;

    //     for(int i = 0; i<6; i++){
    //         cout<<arr[i]<<endl;
    //     }
    //     return 0;
    // }

int deleteElement(int arr[], int &T, int n) {
    int pos = -1;

    // Find position of element to delete
    for (int i = 0; i < T; i++) {
        if (arr[i] == n) {
            pos = i;
            break;
        }
    }

    // If element not found
    if (pos == -1) {
        cout << "Element not found.\n";
        return T;
    }

    // Shift elements to left
    for (int i = pos; i < T - 1; i++) {
        arr[i] = arr[i + 1];
    }

    T--; // Reduce size

    return T;
}

int main() {
    int arr[100]; // You need a fixed array size
    int T; // Actual number of elements

    cout << "Enter number of elements: ";
    cin >> T;

    cout << "Enter elements: ";
    for (int i = 0; i < T; i++) {
        cin >> arr[i];
    }

    int n;
    cout << "Enter element to delete: ";
    cin >> n;

    deleteElement(arr, T, n);

    cout << "Array after deletion: ";
    for (int i = 0; i < T; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

